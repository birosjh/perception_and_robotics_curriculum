add_executable(orb_cv orb_cv.cpp)

find_package(OpenCV CONFIG REQUIRED)
target_link_libraries(orb_cv PRIVATE ${OpenCV_LIBS})

find_package(yaml-cpp CONFIG REQUIRED)
target_link_libraries(orb_cv PRIVATE yaml-cpp::yaml-cpp)