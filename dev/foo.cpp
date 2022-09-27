#include <iostream>
#include <cmath>
#include "foo.h"

void foo(int a, int b, int c)
{
    /*
    int a;
    int b;
    int c;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    */
    double d = b * b - 4 * a * c;
    if (d < 0.0)
        std::cout << "Non real roots\n";
    if (d >= 0.0)
    {
        double x_one = (-b - sqrt(d)) / 2 / a;
        double x_two = (-b + sqrt(d)) / 2 / a;
        std::cout << "x1: " << x_one << ",  x2: " << x_two;
    }
}

