#include <iostream>

class Complex {

    private:
        double real;
        double imag;

    public:
        Complex(double r, double i = 0): real(r), imag(i) {}

        // Overloading: member function
        Complex operator+(const Complex& other) const {
            return Complex(real + other.real, imag + other.imag);
        }

        // Overloading: Friend function
        friend Complex operator+(const Complex& a, const Complex& b);

        double getReal() const { return real; }
        double getImag() const { return imag; }

        void display() {
            std::cout << real << " + " << imag << "i" << std::endl;
        }

};

// Overloading: Non-member function, you cannot directly access the private variable
Complex operator+(const Complex& a, const Complex& b) {
    return Complex(a.getReal() + b.getReal(), 
                    a.getImag() + b.getImag());
}

// Overloading: Friend function (defined outside the class), you can directly access the private variable
Complex operator+(const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.imag + b.imag);
}

int main() {

    Complex a(1, 2);
    Complex r(3, 4);
    a = operator+(a, r);
    a.display();

    return 0;

}



