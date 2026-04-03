#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int * p1 = NULL, * p2 = NULL; // declaration, initialize to 0
    p1 = &num; // take the address of num, assign to p1
    p2 = &num; // take the address of num, assign to p2

    cout << "num = " << num << endl;

    *p1 = 20; // assign to num
    cout << "num = " << num << endl;

    *p2 = 30; // assign to num
    cout << "num = " << num << endl;

    cout << &num << endl; // get address
    cout << p1 << endl; // get address too, because p1 is pointing to num address
    cout << *p1 << endl; // get the content of the address which p1 is pointing at

    return 0;
}