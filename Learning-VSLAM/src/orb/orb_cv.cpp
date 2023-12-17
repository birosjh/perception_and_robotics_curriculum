#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <chrono>
#include <yaml-cpp/yaml.h>

using namespace std;
using namespace cv;

using TimePoint = chrono::steady_clock::time_point;

int main() {
    YAML::Node config = YAML::LoadFile("src/orb/config.yaml");

    Mat img_1 = imread(config["image_one"].as<std::string>(), IMREAD_COLOR);
    Mat img_2 = imread(config["image_two"].as<std::string>(), IMREAD_COLOR);
    assert(img_1.data != nullptr && img_2.data != nullptr);

    std::vector<KeyPoint> keypoints_1, keypoints_2;
    Mat descriptors_1, descriptors_2;
    TimePoint t1, t2;

    Ptr<FeatureDetector> detector = ORB::create();
    Ptr<DescriptorMatcher> matcher = DescriptorMatcher::create("BruteForce-Hamming");

    t1 = chrono::steady_clock::now();

    detector->detect(img_1, keypoints_1);
    detector->detect(img_2, keypoints_2);

    detector->compute(img_1, keypoints_1, descriptors_1);
    detector->compute(img_2, keypoints_2, descriptors_2);

    t2 = chrono::steady_clock::now();
    auto time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);

    cout << "extract ORB cost = " << time_used.count() << " seconds. " << endl;

    Mat outimg1;
    drawKeypoints(img_1, keypoints_1, outimg1, Scalar(127,200,10), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);
    imwrite(config["output_dir"].as<std::string>() + "ORB_features.jpg", outimg1);

    vector<DMatch> matches;
    t1 = chrono::steady_clock::now();
    matcher->match(descriptors_1, descriptors_2, matches);
    t2 = chrono::steady_clock::now();
    time_used = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
    cout << "match ORB cost = " << time_used.count() << " seconds. " << endl;

    auto min_max = minmax_element(
        matches.begin(),
        matches.end(),
        [](const DMatch &m1, const DMatch &m2) { return m1.distance < m2.distance; }
    );

    double min_dist = min_max.first->distance;
    double max_dist = min_max.second->distance;

    cout << "-- Max dist: " << max_dist << endl;
    cout << "-- Min dist: " << min_dist << endl;

    std::vector<DMatch> good_matches;
    std::copy_if(
        matches.begin(),
        matches.end(),
        std::back_inserter(good_matches),
        [min_dist](DMatch match){ return match.distance <= max(2 * min_dist, 30.0);}
    );

    cout << "Num Matches: " << matches.size() << endl;
    cout << "Num Good Matches: " << good_matches.size() << endl;

    Mat img_match;
    Mat img_goodmatch;
    drawMatches(img_1, keypoints_1, img_2, keypoints_2, matches, img_match);
    drawMatches(img_1, keypoints_1, img_2, keypoints_2, good_matches, img_goodmatch);
    imwrite(config["output_dir"].as<std::string>() + "all_matches.jpg", img_match);
    imwrite(config["output_dir"].as<std::string>() + "good_matches.jpg", img_goodmatch);

    return 0;
}

