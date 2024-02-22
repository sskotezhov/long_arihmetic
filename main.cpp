#include <iostream>
#include <big_num.hpp>



int main()
{
    time_t start = clock();
    big_num::big_num pi = big_num::Calculate_pi(100);
    time_t end = clock();
    std::cout << "Time: " << (end - start)*1000 / CLOCKS_PER_SEC << "ms" << std::endl;
}