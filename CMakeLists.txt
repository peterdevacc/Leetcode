cmake_minimum_required(VERSION 3.21)
project(Leetcode)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/easy)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/medium)

file(
        GLOB SOURCES
        "*.h"
        "*.cpp"
)

add_executable(Leetcode ${SOURCES})

target_link_libraries(
        Leetcode PUBLIC
        easy
        medium
)
