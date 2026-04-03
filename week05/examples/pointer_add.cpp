#include <iostream>
#include <iterator>


int main() {
    int numbers[4] = {1, 2, 3, 4};

    int* a = numbers + 1;
    int* p = &numbers[0];

    std::cout << a << std::endl;
    std::cout << p << std::endl;
    std::cout << *(p + 1) << std::endl;

    for (int i = 0; i < std::size(numbers); i++) {
        std::cout << *(p + i) << std::endl;
    }

    std::cout << p[1] << std::endl;
    return 0;

}