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
    std::string str = std::to_string(num);
    long len = str.find(".");
    int_part = str.substr(0, len);
    fract_part = str.substr(len + 1, str.length());
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