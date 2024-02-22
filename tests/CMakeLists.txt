add_subdirectory(googletest)
include(GoogleTest)
include_directories(.)

add_executable(tests constructor_tests.cpp)
target_link_libraries(tests gtest gtest_main big_num)
include_directories(include_bn)

enable_testing()
include(GoogleTest)
gtest_discover_tests(tests)
