cmake_minimum_required(VERSION 3.13)
project(C-Robotics)

# set important values
set(CMAKE_CXX_STANDARD 11)
set(ROBOTICS_INCLUDE_DIRS  "${PROJECT_SOURCE_DIR}/include")

# find important packages
find_package(CUDA REQUIRED)


#include directories
include_directories(${ROBOTICS_INCLUDE_DIRS}/MCMC)

