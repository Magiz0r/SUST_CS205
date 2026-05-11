#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<int> up1(new int(9));
    std::cout << "up1's content:" << *up1 << std::endl;

    std::unique_ptr<std::string> up2(new std::string("Hello C++!"));
    std::cout << "up2's content: " << *up2 << std::endl;


    std::unique_ptr<std::string> up3 = std::make_unique<std::string>("Hello C++!");
    std::cout << "up3's content: " << *up3 << std::endl;

    std::unique_ptr<int[]> up4 = std::make_unique<int[]>(5);
    std::cout << "up4's content: " << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cout << up4[i] << " ";
        std::cout << std::endl;
    }

    float* p = new float[3]{1, 2, 3};
    std::unique_ptr<float[]> up5(p);
    std::cout << "up5's content: " << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << up5[i] << " ";
        std::cout << std::endl;
    }

    std::unique_ptr<int> up6 = std::move(up1);
    std::cout << "up6's content: " << *up6 << std::endl;


    return 0;
}