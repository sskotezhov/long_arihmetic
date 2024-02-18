#pragma once
#include <iostream>
#include <string.h>
void say_hello();

class big_num
{
    public:
    void print();
    void set_value(std::string arr);

    private:
    std::string value;
};