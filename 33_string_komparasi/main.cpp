#include <iostream>
#include <string>

int main(){
    
    std::string input;
    std::string kata_rahasia("yeye");

    while (true){
        std::cout << "Main Tebak Nama" << std::endl;
        std::cout << "Ketik Tebakan-mu : ";
        std::cin >> input;

        if(input == kata_rahasia){
            std::cout << "Horeeeee, Tebakan kamu benar...!!!!" << std::endl;
            break;
        }
        
        std::cout << "Tebakan kamu SALAH...!!!" << std::endl;
    }

    std::cout << "Program Selesai..." << std::endl;
    return 0;
}
