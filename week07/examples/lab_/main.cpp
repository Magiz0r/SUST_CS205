#include <iostream>
#include "vabs.h"

using namespace std;

void print_int_array(const int* p, size_t n) {
    for (size_t i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

void print_float_array(const float* p, size_t n) {
    for (size_t i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

void print_double_array(const double* p, size_t n) {
    for (size_t i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {-1, 2, -3, 4, 5};
    float b[] = {-1.5f, 2.3f, -3.7f};
    double c[] = {-1.11, 2.22, -3.33};

    size_t na = sizeof(a) / sizeof(a[0]);
    size_t nb = sizeof(b) / sizeof(b[0]);
    size_t nc = sizeof(c) / sizeof(c[0]);

    cout << "int array: ";
    print_int_array(a, na);

    cout << "float array: ";
    print_float_array(b, nb);

    cout << "double array: ";
    print_double_array(c, nc);

    cout << "\nFunction addresses:\n";
    cout << "vabs(int*, size_t):    " << reinterpret_cast<void*>(static_cast<bool(*)(int*, size_t)>(vabs)) << endl;
    cout << "vabs(float*, size_t):  " << reinterpret_cast<void*>(static_cast<bool(*)(float*, size_t)>(vabs)) << endl;
    cout << "vabs(double*, size_t): " << reinterpret_cast<void*>(static_cast<bool(*)(double*, size_t)>(vabs)) << endl;

    return 0;
}