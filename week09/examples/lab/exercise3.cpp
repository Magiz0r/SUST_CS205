#include <iostream>

class Complex {

    private:
        int real;
        int imag;
    public:
        Complex(): real(0), imag(0) {}

        Complex(int real, int imag) {
            this->real = real;
            this->imag = imag;
        }

        void add(int real, int imag) {
            this->real += real;
            this->imag += imag;
        }

        void subtract(int real, int imag) {
            this->real -= real;
            this->imag -= imag;
        }

        void display() const {
            std::cout << real << " + " << imag << "i" << std::endl;
        }

};

int main() {

    Complex c1;
    Complex c2(1, 2);

    c1.add(3, 4);
    c1.display();

    c2.add(5, 6);
    c2.display();

    return 0;


}