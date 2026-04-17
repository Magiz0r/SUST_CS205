#include <iostream>
#include <string>

template <typename T>
int Compare(const T &a, const T &b) {
    if (a > b) {
        return 1;
    } else if (a < b) {
        return -1;
    } else {
        return 0;
    }
}

struct stuinfo {
    std::string name;
    int age;

    bool operator>(const stuinfo &other) const {
        return age > other.age;
    }

    bool operator<(const stuinfo &other) const{
        return age < other.age;
    }
};

int main() {

    stuinfo a;
    stuinfo b;

    a.name = "sam";
    a.age = 20;

    b.name = "tim";
    b.age = 22;

    std::cout << "Compare of two integers: " << Compare(1, 2) << std::endl;
    std::cout << "Compare of two floats: " << Compare(2.1f, 2.0f) << std::endl;
    std::cout << "Compare of two characters: " << Compare('a', 'b') << std::endl;
    std::cout << "Compare of two structs: " << Compare(a, b) << std::endl;

    return 0;
}