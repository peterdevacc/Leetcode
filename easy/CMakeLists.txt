cmake_minimum_required(VERSION 3.21)
project(easy)

set(CMAKE_CXX_STANDARD 20)

file(
        GLOB SOURCES
        "*.h"
        "*.cpp"
)

add_library(
        easy
        ${SOURCES}
)

target_include_directories(easy INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
