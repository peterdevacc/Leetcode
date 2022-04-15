cmake_minimum_required(VERSION 3.21)
project(medium)

set(CMAKE_CXX_STANDARD 20)

file(
        GLOB SOURCES
        "*.h"
        "*.cpp"
)

add_library(
        medium
        ${SOURCES}
)

target_include_directories(medium INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
