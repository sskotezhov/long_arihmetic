#include <iostream>
#include <bignum.hpp>
#include <bignum.cpp>


int main()
{
    std::string a = "124.53";
    std::string b = "2456.623";
    std::string c = "435.534634612312";
    big_num ex = a;
    big_num ex1 = b;
    big_num ex2 = c;
    big_num out = ex1+ex2;
    std::cout << out.num_to_str() << std::endl;
}