#include <bignum.hpp>

void say_hello(){
    std::cout << "Hello, from bignum!\n";
}

void big_num::print()
{
    std::cout << value;
}

void big_num::set_value(std::string arr)
{
    value = arr;
}