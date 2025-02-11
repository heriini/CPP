#include <iostream>
#include <string>

struct aktor{
    std::string nama;
    int umur;
};

struct film{
    std::string judul;
    std::string genre;
    int tahun;
    aktor pemeran_1;
    aktor pemeran_2;
};

int main(){

    aktor aktor1,aktor2;
    film film1,film2;

    aktor1.nama = "Habib Voni";
    aktor1.umur = 25;

    aktor2.nama = "Gus Derpan";
    aktor2.umur = 23;

    film1.judul     = "Jangan Suka Kabur";
    film1.genre     = "Horor";
    film1.tahun     = 2025;
    film1.pemeran_1 = aktor1;
    film1.pemeran_2 = aktor2;

    film2.judul     = "Aku Mau Kabur Aja...";
    film2.genre     = "Komedi";
    film2.tahun     = 2027;
    film2.pemeran_1 = aktor1;

    std::cout << "info film 1 : " << std::endl;
    std::cout << film1.judul << std::endl;
    std::cout << film1.pemeran_1.nama << std::endl;
    std::cout << film1.pemeran_2.nama << std::endl << std::endl;

    std::cout << "info film 2: " << std::endl;
    std::cout << film2.judul << std::endl;
    std::cout << film2.pemeran_1.nama << std::endl;
    std::cout << film2.pemeran_2.nama << std::endl;
    
    return 0;
}
