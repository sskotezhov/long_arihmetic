cmake_minimum_required(VERSION 3.0.0...3.19)
project(bignum)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_library(bignum bignum.hpp bignum.cpp)
include_directories(.)
add_executable(main main.cpp)