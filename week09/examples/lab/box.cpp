#include <iostream>


class Box {

    private:
        double length;
        double breadth;
        double height;
        double volume;

    public:

        // Default **Constructor**
        Box();
    
        // Parameterized **Constructor**
        Box(double, double, double);

        // **Member functions** declaration
        double getVolume(void);
        void setLength(double len);
        void setBreadth(double bre);
        void setHeight(double hei);


};

Box::Box() {
    length = 3.0;
    breadth = 4.0;
    height = 5.0;
}

Box::Box(double length, double breadth, double height) {
    this->length = length;
    this->breadth = breadth;
    this->height = height;
}

double Box::getVolume(void) {
    return length * breadth * height;
}

void Box::setLength(double len) {
    length = len;
}

void Box::setBreadth(double bre) {
    breadth = bre;
}

void Box::setHeight(double hei) {
    height = hei;
}


int main() {

    Box a_box;

    a_box.setLength(10);
    a_box.setHeight(10);
    a_box.setBreadth(10);

    std::cout << a_box.getVolume() << std::endl;

    return 0;
}

