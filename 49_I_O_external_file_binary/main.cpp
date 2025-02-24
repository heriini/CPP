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
    myFile.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    
    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

    mahasiswa1.nim = 1234;
    mahasiswa1.nama = "Anita";
    mahasiswa1.jurusan = "Perdagangan";

    mahasiswa2.nim = 1235;
    mahasiswa2.nama = "Rukia";
    mahasiswa2.jurusan = "Olahraga";

    mahasiswa3.nim = 1236;
    mahasiswa3.nama = "Roni";
    mahasiswa3.jurusan = "Perkebunan";

    myFile.write(reinterpret_cast<char*>(&mahasiswa1), sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa2), sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa3), sizeof(Mahasiswa));
    
    myFile.close();

    return 0;
}

