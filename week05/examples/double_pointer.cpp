#include <iostream>


int main() {
    int num = 10;
    int* p = &num;
    int** pp = &p;

    // address of p

    std::cout << p << std::endl;
    std::cout << *pp << std::endl; // *pp is getting the address of p


    // getting content of num
    std::cout << *(*pp) << std::endl; // *(*pp) is like *p, and *p will get the content of num

}