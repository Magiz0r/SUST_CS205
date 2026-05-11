/*
    Matrix addition
*/

#include <iostream>
#include <memory>
#include "matrix.hpp"

int main() {

    Matrix a(3, 4);
    a(1, 2) = 3;
    std::cout << "a is:" << std::endl;
    a.print();

    Matrix b(3, 4);
    b(2, 3) = 4;
    std::cout << "b is:" << std::endl;
    b.print();

    Matrix c = a + b;
    std::cout << "c is:" << std::endl;
    c.print();

    Matrix d = a;
    std::cout << "Before assignment, d is:" << std::endl;
    d.print();

    d = b;
    std::cout << "After assignment, d is:" << std::endl;
    d.print();

    return 0;
}