#include <iostream>
using namespace std;

int main()
{
    int a, b;
    double c, d,f,g;
    char h;

    a = 19.99 + 21.99;
    b = (int)19.99 + 21.99;
    c = 23 / 3;
    d = 23 / 3.0;
    f = 23 / 3.0e4;
    g = 23 / 3.0e5;
    h = 'b' - 32;

    //complete code here
    cout << h << endl; // B
    cout << a << endl; // 41 becasue 19.99 + 21.99 = 41.98 but int a which the decimals are ignored
    cout << b << endl; // 40 because int 19.99 = 19, then 19 + 21.99 = 40.99 -> 40
    cout << c << endl;
    cout << d << endl;
    cout << g << endl;
    cout << f << endl;
    return 0;
}