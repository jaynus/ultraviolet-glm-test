cmake_minimum_required(VERSION 3.14)

# cmake_minimum_required(VERSION <specify CMake version here>)
project(glm)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/../glm)

add_library(uv-glm projections.cpp)

install(TARGETS uv-glm)