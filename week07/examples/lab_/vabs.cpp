#include "vabs.h"
#include <cstdlib>
#include <cmath>

bool vabs(int* p, std::size_t n) {
    if (p == nullptr) {
        return false;
    }

    for (std::size_t i = 0; i < n; i++) {
        p[i] = std::abs(p[i]);
    }
    return true;
}

bool vabs(float* p, std::size_t n) {
    if (p == nullptr) {
        return false;
    }

    for (std::size_t i = 0; i < n; i++) {
        p[i] = std::fabs(p[i]);
    }
    return true;
}

bool vabs(double* p, std::size_t n) {
    if (p == nullptr) {
        return false;
    }

    for (std::size_t i = 0; i < n; i++) {
        p[i] = std::fabs(p[i]);
    }
    return true;
}