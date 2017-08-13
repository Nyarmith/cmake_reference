cmake_minimum_required(VERSION 2.8)
project(GoogTestPls)

#the most important setting
set(CMAKE_INCLUDE_CURRENT_DIR ON)

#config file for macros
configure_file (
    "${CMAKE_CURRENT_SOURCE_DIR}/ProjectConfig.hpp.in"
    "${CMAKE_CURRENT_SOURCE_DIR}/ProjectConfig.hpp"
    )
#now we can add our configure header file from anywhere
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#do we want to use the included math library?
option(USE_MYMATH "Use the included power function" ON)
#do we want to use math.h to implement that particular library?
option(LIB_MATH_USAGE "use math.h for math library implementation" OFF)

add_subdirectory(main)
add_subdirectory(libFunc)
#the test dir
enable_testing()
add_subdirectory(test)

