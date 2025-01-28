#include <iostream>
#include <array>

int main(){
    
    const int kolom = 3;
    const int baris = 2;
    std::array <std::array <int, kolom>, baris> nilaiMD = {0,1,2,3,4,5};

    std::cout << nilaiMD[0][0] << " ";
    std::cout << nilaiMD[0][1] << " ";
    std::cout << nilaiMD[0][2] << " " << std::endl;

    std::cout << nilaiMD[1][0] << " ";
    std::cout << nilaiMD[1][1] << " ";
    std::cout << nilaiMD[1][2] << " " << std::endl;
    return 0;
}
