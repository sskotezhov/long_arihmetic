#pragma once
#include <iostream>
#include <string.h>
class big_num
{
    public:
        big_num(long double num);
        std::string num_to_str();

    private:
        bool sign;
        std::string int_part;
        std::string fract_part;
        unsigned int_part_len;
        unsigned fract_part_len;
};