#pragma once
#include <iostream>
#include <string.h>
void say_hello();

class big_num
{
    public:
        big_num(double num);
        void print();
        void str_to_num(std::string arr);

    private:
        bool sign;
        std::string value;
};