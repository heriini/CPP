#include <iostream>
#include <fstream>
#include <string>

struct Mahasiswa{
    int nim;
    std::string nama;
    std::string jurusan;
};

int main(){

    std::fstream myFile;
    myFile.open("data.bin", std::ios::in | std::ios::binary);

    Mahasiswa dataBaca;
    myFile.read(reinterpret_cast<char*>(&dataBaca), sizeof(Mahasiswa));

    std::cout << sizeof(Mahasiswa) << std::endl;

    std::cout << dataBaca.nim << std::endl;
    std::cout << dataBaca.nama << std::endl;
    std::cout << dataBaca.jurusan << std::endl;

    myFile.close();

    return 0;
}
