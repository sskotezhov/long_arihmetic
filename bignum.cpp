#include <bignum.hpp>
#include <cmath>


big_num::big_num(long double num)
{
    if (num < 0)
    {
        num = -num;
        sign = 0;
    }
    else
    {
        sign = 1;
    }
    long double tmp;
    fract_part = std::to_string(modfl(num, &tmp));
    int_part = std::to_string(num);
}
std::string big_num::num_to_str()
{
        if (sign == 0)
        {
            return "-" + int_part + "." + fract_part;
        }
        else
        {
            return int_part + "." + fract_part;
        }
            
}