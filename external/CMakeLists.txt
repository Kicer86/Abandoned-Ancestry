
# setup googletest
add_library(gtest STATIC ${CMAKE_SOURCE_DIR}/external/googletest/googletest/src/gtest-all.cc)
add_library(gtest_main STATIC ${CMAKE_SOURCE_DIR}/external/googletest/googletest/src/gtest_main.cc)

add_library(gmock STATIC ${CMAKE_SOURCE_DIR}/external/googletest/googlemock/src/gmock-all.cc)
add_library(gmock_main STATIC ${CMAKE_SOURCE_DIR}/external/googletest/googlemock/src/gmock_main.cc)

target_include_directories(gtest
                            PUBLIC
                                ${CMAKE_SOURCE_DIR}/external/googletest/googletest/include
                            PRIVATE
                                ${CMAKE_SOURCE_DIR}/external/googletest/googletest
)

target_include_directories(gmock
                            PUBLIC
                                ${CMAKE_SOURCE_DIR}/external/googletest/googlemock/include
                            PRIVATE
                                ${CMAKE_SOURCE_DIR}/external/googletest/googlemock
)
