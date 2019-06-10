# Required by CMake 3.6
CMAKE_MINIMUM_REQUIRED(VERSION 3.6)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

find_package(OpenCV REQUIRED)
find_package(realsense2 REQUIRED)

if (REALSENSE2_FOUND)
	message("realsense2 founded")
endif()

ADD_EXECUTABLE(RealSenseWrapper RealSenseWrapper.cpp)

#add_library(RealSenseManager SHARED RealSenseManager.cpp)
TARGET_LINK_LIBRARIES(RealSenseWrapper ${OpenCV_LIBS} ${realsense2_LIBRARY})
