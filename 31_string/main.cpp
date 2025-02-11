#include <iostream>
#include <string>

int main(){
    
    std::string kata("Kereta");
    std::cout << kata << std::endl;

    std::string data;

    std::cout << "Ketikan sebuah Kata : " << std::endl;
    std::cin >> data;
    std::cout << "Kata yang kamu tuliskan adalah : " << data << std::endl;
    
    return 0;
}
