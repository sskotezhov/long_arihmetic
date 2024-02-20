#include <bignum.hpp>
#include <cmath>

big_num::big_num(std::string num)
{
    if (num[0] == '-')
    {
        num.erase(0);
        sign = 0;
    }
    else
    {
        sign = 1;
    }
    long len = num.find(".");
    if (len == std::string::npos)
    {
        int_part = num;
        fract_part = "0";
    }
    else
    {
        int_part = num.substr(0, len);
        fract_part = num.substr(len + 1, num.length());
    }
}
big_num::big_num(long double num)
{
    std::string str = std::to_string(num);
    long len = str.find(".");
    int_part = str.substr(0, len);
    fract_part = str.substr(len + 1, str.length());
}
big_num::big_num()
{
    sign = 1;
    int_part = "0";
    fract_part = "0";
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

big_num big_num::amount(big_num a, big_num b)
{
    big_num c = 0;

    return c;
}