#ifndef _MYCOMPLEX_H
#define _MYCOMPLEX_H

class Complex {
    private:
        double real;
        double imag;

    public:

        // Default Constructor
        Complex();

        Complex(double re, double im);

        Complex Add(const Complex& data);

        void show() const;
};

#endif