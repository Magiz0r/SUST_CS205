#include <iostream>
using namespace std;

int main()
{
    int n,fa; // n and fa will be random dump number

    do{
        fa *= n; 
        n++;
    }while(n <= 10);
    
    cout << "fa = " << fa << endl;
    
    return 0;
}