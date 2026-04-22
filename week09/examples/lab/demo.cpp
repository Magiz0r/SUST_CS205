#include <iostream>
#include <cstring>

class vsdemo{

    private:
        const int length;
        char* name;
        static int classId;

    public:
        vsdemo(int len, char* nm): length(len) {
            name = new char[length];
            if(NULL != name) {
                strncpy(name, nm, length-1);
                name[length-1]='\0';
            }
        }
        ~vsdemo() {
            delete[] (name);
            std::cout << "~vsdemo" << std::endl;
        }

        void disObj() {
            std::cout << "Obj address: " << this << ", length:" <<length<< ", name: " <<name<< std::endl;
        }

        static void displayClassId() {
            std::cout << "classID: " << classId << std::endl;
        }
};

int vsdemo::classId = 2025;

int main() {
    char tdata[14] = "SUSTECH_CS219";
    vsdemo vsd1(sizeof(tdata), tdata);
    vsdemo::displayClassId();
    vsd1.disObj();
    return 0;
}