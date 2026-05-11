#include <iostream>
#include <memory>

using namespace std;

int main() {
    // double* p_reg = new double(5);
    // shared_ptr<double> pd(p_reg);
    // pd = p_reg; 

    shared_ptr<double> pd = make_shared<double>(5);
    // pd = shared_ptr<double>(p_reg);
    cout << "*pd = " << *pd << endl;
    
    // shared_ptr<double> pshared = p_reg;
    shared_ptr<double> pshared = pd;
    cout << "*pshred = " << *pshared << endl;
    
    shared_ptr<string> pstr = make_shared<string>("Hello World!");
    // shared_ptr<string> pstr(&str);
    cout << "*pstr = " << *pstr << endl;
    return 0;
}