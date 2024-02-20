#include <iostream>
#include <bignum.hpp>
#include <bignum.cpp>


int main()
{
    float a = 124.53;
    double b = 12456.623;
    long double c = 435.5346346;
    big_num ex = a;
    big_num ex1 = b;
    big_num ex2 = c;
    std::cout << ex.num_to_str() << std::endl;
    std::cout << ex1.num_to_str() << std::endl;
    std::cout << ex2.num_to_str() << std::endl;
}