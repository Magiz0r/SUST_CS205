#include <iostream>
#include "complex.h"

int main() {
    Complex complex_(1, 2);
    Complex result = complex_.Add(complex_);

    complex_.show();
    result.show();

    return 0;
}