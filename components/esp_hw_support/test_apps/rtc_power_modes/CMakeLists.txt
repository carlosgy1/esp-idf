# This is the project CMakeLists.txt file for the test subproject
cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

#"Trim" the build. Include the minimal set of components, main, and anything it depends on.
set(COMPONENTS main)

project(rtc_power_modes)
