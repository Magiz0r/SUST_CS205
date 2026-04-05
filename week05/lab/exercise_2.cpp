#include <iostream>
using namespace std;

int main()
{

    int matrix[][4] = {1,3,5,7,9,11,13,15,17,19}; // 10 elements, 4 cols, so it will split to 3 rows
    int *p = *(matrix + 1);
    p += 3;
    cout << "*p++ = " << *p++ << endl; // for *p++, it will get the value first which is 15, and then p will move it 17
                                        // if you cout *p here, you will get 17

    const char *str = "Welcome to programming.";
    long *q = (long *)str;
    q++;
    char *r = (char *)q;
    cout << r << endl;
    
    unsigned int num = 0x3E56AF67;
    unsigned short *pshort = (unsigned short *) &num;
    cout << "*pshort = 0x" << hex << *pshort << endl;
    return 0;
}