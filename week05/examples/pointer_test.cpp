#include <iostream>
#include <cstring>

struct Student{
    char name[4];
    int born;
    bool male;
};



int main() {
    Student stu = {"Tim", 2002, true};
    Student* ptr = &stu;

    // get name
    std::cout << ptr->name << std::endl;
    std::cout << stu.name << std::endl;

    // change name
    
    strncpy(ptr->name, "Tony", 5);
    std::cout << ptr->name << std::endl;

    // size of a pointer

    std::cout << sizeof(ptr) << std::endl;

    // address of stu.name
    std::cout << &(ptr->name) << std::endl;

    return 0;
}