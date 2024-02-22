#include <gtest/gtest.h>
#include <big_num.hpp>
#include <sign_change_tests.cpp>
#include <Calc_pi_tests.cpp>

TEST(constructor, NegativeFloatingNumber)
{
    big_num::big_num a(-123.566);
    ASSERT_EQ(a.num_to_str(), "-123.566");
}
TEST(constructor, PositiveFloatingNumber)
{
    big_num::big_num a(123.566);
    ASSERT_EQ(a.num_to_str(), "123.566");
}
TEST(constructor, PositiveStringNumber)
{
    std::string num = "123.566";
    big_num::big_num a(num);
    ASSERT_EQ(a.num_to_str(), "123.566");
}
TEST(constructor, NegativeStringNumber)
{
    std::string num = "-123.566";
    big_num::big_num a(num);
    ASSERT_EQ(a.num_to_str(), "-123.566");
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}