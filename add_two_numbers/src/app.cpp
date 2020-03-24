#include <iostream>
#include "../include/operations.hpp"

int main()
{
    double x = 1.5;
    double y = 2.5;

    std::cout << x << " + " << y << " = " << operations::add(x, y) << std::endl;

    return 0;
}
