#include <iostream>
#include "complex.h"

//Initialization list
Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(double re, double im): real(re), imag(im)
{
}


Complex Complex::Add(const Complex& data) {
    
    return Complex(real + data.real, imag + data.imag);
}



void Complex::show() const {
    std::cout << real << " + " << imag << "i" << std::endl;
}