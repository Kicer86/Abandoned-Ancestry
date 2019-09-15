
project(Abandoned-Ancestry)

cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/modules)

find_package(SFML REQUIRED COMPONENTS window)

# init external submodules
add_subdirectory(external)

add_executable(Abandoned-Ancestry main.cpp
                                  basic/DrawableRect.cpp
                                  basic/BasicObject.cpp
                                  world/WorldController.cpp)

target_link_libraries(Abandoned-Ancestry
                        PRIVATE
                            sfml-window
                            sfml-graphics
                            sfml-system)
