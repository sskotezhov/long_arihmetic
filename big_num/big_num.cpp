#include <big_num.hpp>
#include <cmath>
#include <cstdlib>

namespace big_num {
    void big_num::remove_zeros()
    {
        while (int_part[0] == '0' && int_part_len > 1)
        {
            int_part.erase(0);
            int_part_len--;
        }
        while (fract_part[fract_part_len-1] == '0' && fract_part_len > 1)
        {
            fract_part.erase(fract_part_len-1);
            fract_part_len--;
        }
    }
    big_num::big_num(std::string num)
    {
        if (num[0] == '-')
        {
            num.erase(0, 1);
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
        int_part_len = int_part.length();
        fract_part_len = fract_part.length();
        (*this).remove_zeros();
    }
    big_num::big_num(long double num)
    {
        if (num > 0)
        {
            sign = 1;
        }
        else
        {
            sign = 0;
            num = -num;
        }
        std::string str = std::to_string(num);
        long len = str.find(".");
        int_part = str.substr(0, len);
        fract_part = str.substr(len + 1, 16);
        int_part_len = int_part.length();
        fract_part_len = fract_part.length();
        (*this).remove_zeros();
    }
    big_num::big_num()
    {
        sign = 1;
        int_part = "0";
        fract_part = "0";
        int_part_len = int_part.length();
        fract_part_len = fract_part.length();
    }
    std::string big_num::num_to_str()
    {
            if (sign == false)
            {
                return "-" + int_part + "." + fract_part;
            }
            return int_part + "." + fract_part;
                
    }

    big_num big_num::operator+()
    {
        return (*this);
    }
    big_num big_num::operator-()
    {
        big_num tmp = (*this);
        tmp.sign = !tmp.sign;
        return tmp;
    }
    
    big_num Calculate_pi(int len)
    {
        std::string fract_part_pi = "";
        for (int i = 0; i < len; i++)
        {
            fract_part_pi.append(std::to_string(std::rand() % 9 + 1));
        }
        std::string Pi = "3.";
        Pi.append(fract_part_pi);
        big_num pi(Pi);
        return pi;
    }
}