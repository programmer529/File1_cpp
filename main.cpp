#include <iostream>

int main()
{
    double f1 = 0.0;
    double f2 = 1.0;
    double f3 = f1 + f2;
    double f4 = f2 + f3;
    double f5 = f3 + f4;

    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    std::cout << f3 << std::endl;
    std::cout << f4 << std::endl;
    std::cout << f5 << std::endl;
}