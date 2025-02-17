#include <iostream>
#include <fstream>
#include <string>

int main(){

    std::fstream myFile;
    int hasil;
    myFile.open("data.bin", std::ios::in | std::ios::binary);

    myFile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));

    std::cout << hasil << std::endl;
    myFile.close();


    return 0;
}

    
    