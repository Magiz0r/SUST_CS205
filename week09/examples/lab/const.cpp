#include <iostream>

class Myclass {
    private:
        const int x;
    public:
        Myclass(int a): x(a) {} 

        void show_x() {
            std::cout << "Value of constant x: " << x; 
        }

};


int main() {
    Myclass obj(10);
    obj.show_x();


    return 0;
}