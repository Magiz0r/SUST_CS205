#include <iostream>

class StaticTest {
    private:
        static int m_value;

    public:
        static int getValue() {
            return m_value;
        }
};


int StaticTest::m_value = 12;

int main() {

    StaticTest statictest;
    std::cout << statictest.getValue() << std::endl;
    return 0;
}