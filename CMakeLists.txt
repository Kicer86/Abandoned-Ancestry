
project(Abandoned-Ancestry)

cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/modules)

find_package(SFML REQUIRED COMPONENTS window)

# setup gmock and gtest
include_directories(external/googletest/googletest/include)
include_directories(external/googletest/googlemock/include)

add_library(gtest STATIC external/googletest/googletest/src/gtest-all.cc)
add_library(gtest_main STATIC external/googletest/googletest/src/gtest_main.cc)

add_library(gmock STATIC external/googletest/googlemock/src/gmock-all.cc)
add_library(gmock_main STATIC external/googletest/googlemock/src/gmock_main.cc)

target_include_directories(gtest PRIVATE external/googletest/googletest)
target_include_directories(gmock PRIVATE external/googletest/googlemock)
#


add_executable(Abandoned-Ancestry main.cpp
                                  basic/DrawableRect.cpp
                                  basic/BasicObject.cpp)

target_link_libraries(Abandoned-Ancestry
                        PRIVATE
                            sfml-window
                            sfml-graphics
                            sfml-system)
