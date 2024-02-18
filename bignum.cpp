#include <bignum.hpp>
#include <cmath>

void big_num::print()
{
    std::cout << value;
}

void big_num::str_to_num(std::string arr)
{
    value = arr;
}

big_num::big_num(double num)
{
    if (num < 0)
    {
        sign = 0;
    }
    else
    {
        sign = 1;
    }
    num = fabs(num);
    value = std::to_string(num);
}