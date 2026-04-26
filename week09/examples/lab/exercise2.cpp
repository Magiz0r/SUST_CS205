#include <iostream>

using namespace std;

class ConstMember {
    private:
        const int m_a;
    public:
        ConstMember(): m_a(0) {};

        ConstMember(int a): m_a(a) {}

        void Display() const {
            cout << "The value of the const member variable m_a is " << m_a << endl;
        }
};


int main() {

    ConstMember o1(666);
    ConstMember o2(42);
    ConstMember o3;

    o1.Display();
    o2.Display();
    o3.Display();

    // o1 = o2; <- this line could be wrong because you cannot change the const member variable

    return 0;
}