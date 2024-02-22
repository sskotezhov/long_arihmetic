#include <gtest/gtest.h>
#include <big_num.hpp>

TEST(Calculate_pi, 100_digits)
{
    ASSERT_EQ(big_num::Calculate_pi(100).num_to_str(), "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679");

}