cmake_minimum_required(VERSION 3.0.0...3.19)
project(long_arihmetic VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(big_num)
add_executable(main_run main.cpp)
target_link_libraries(main_run big_num)
include_directories(include)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

enable_testing()
add_subdirectory(tests)

set(CMAKE_CXX_FLAGS_DEBUG "-Wall -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -Wall -DNDEBUG")
