#include <iostream>
int main()
{
    auto a = 10; // a is int, its type wont change
    a = 20.5; // 20.5 cutted to 20
    a += 10.5; // should be 30
    std::cout << a << std::endl;
    
    auto b=10.0; // double b
    b = 20.5; 
    b +=a; // 20.5 + 10.0 = 30.5
    std::cout << b << std::endl;
    
    return 0;
}