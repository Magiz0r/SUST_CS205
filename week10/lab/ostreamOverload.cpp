#include <iostream>

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r, double i = 0): real(r), imag(i) {}

        friend std::ostream& operator<<(std::ostream& os, const Complex& c){
            os << c.real << " + " << c.imag << "i";
            return os;
        }
};

int main() {

    Complex c(1, 2);
    std::cout << c << std::endl;
    
    return 0;
}