#include <gtest/gtest.h>
#include <big_num.hpp>

TEST(add, PositiveAddPositive)
{
    big_num::big_num a("11111111111111111111.11111111111111111"), b("11111111111111111111.11111111111111111");
    big_num::big_num c = a+b;
    ASSERT_EQ(c.num_to_str(), "22222222222222222222.22222222222222222");

}