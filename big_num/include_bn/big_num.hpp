#pragma once
#include <iostream>
#include <algorithm>
#include <string.h>

namespace big_num {
    class big_num
    {
        public:
            big_num(long double num);
            big_num();
            big_num(std::string num);
            std::string num_to_str();
            big_num operator +();
            big_num operator -();
            big_num operator +(big_num b);

        private:
            bool sign;
            std::string int_part;
            std::string fract_part;
            unsigned int_part_len;
            unsigned fract_part_len;
    };
}