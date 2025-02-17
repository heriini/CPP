#include <iostream>
#include <fstream>
#include <string>

int main(){

    std::fstream myFile;
    int number = 5;
    myFile.open("data.bin", std::ios::out | std::ios::binary);

    myFile.write(reinterpret_cast<char*>(&number),sizeof(number));

    myFile.close();
    return 0;
}
    