#include <iostream>
using namespace std;

class Demo {
    private:
        int id;
        static int num;
    
    public:
        Demo() {
            id = 0;
        }

        Demo(int cid) {
            this->id = cid;
        }

        void display_() {
            cout<<"this is: "<<this<<", id is:"<<this->id<<endl;
        }

        static void display() {
            cout << "The value of the static num is: " << num << endl;
        }
};

int Demo::num = 10;

int main() {
    Demo obj;
    Demo obj1(1);

    obj.display_();
    obj1.display_();

    Demo::display();

    return 0;
}