#include <iostream>
#include <string>

int main(){

    typedef struct{
        std::string nama;
        int nim;
        std::string jurusan;
    }Mahasiswa;

    Mahasiswa mahasiswa;

    mahasiswa.nama = "Amanda Nisabel";
    mahasiswa.nim = 12;
    mahasiswa.jurusan = "Memasak";

    std::cout << "Nama    : " << mahasiswa.nama << std::endl; 
    std::cout << "NIM     : " << mahasiswa.nim << std::endl; 
    std::cout << "Jurusan : " << mahasiswa.jurusan << std::endl; 
    
    return 0;
}
