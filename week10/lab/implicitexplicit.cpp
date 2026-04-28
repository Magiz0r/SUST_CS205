#include <iostream>

class Circle {
    private:
        double radius;

    public:
        Circle(): radius(1) {}

        // Circle(double r): radius(r) {}
        
        // Explicit conversion
        explicit Circle(double r): radius(r) {}

        void display() {
            std::cout << radius << std::endl;
        }
};


int main() {

    Circle c1;

    // This could only possible for implicit conversion
    // Circle c2 = 4;

    // For explicit Conversion, you need to write everything clearly
    Circle c2 = Circle(4);
    

    c1.display();
    c2.display();
    
    //c1 = 4;
    
    c1 = Circle(4);
    
    c1.display();
    
    return 0;

}