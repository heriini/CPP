#include <iostream>
#include <string>

int main(){
    
    // struct merupakan tipe data dari berbagai gabungan tipe data
    struct kendaraan{
        std::string merek;
        std::string warna;
        float cc;
        int tahun;
        int harga;
    };

    kendaraan honda;
    kendaraan yamaha;

    honda.merek = "Supra X";
    honda.warna = "Hitam";
    honda.cc    = 110.00f;
    honda.tahun = 2005;
    honda.harga = 15000000;

    yamaha.merek = "Vega R";
    yamaha.warna = "Biru";
    yamaha.cc    = 110.00f;
    yamaha.tahun = 2007;
    yamaha.harga = 18000000;
    
    std::cout << "Spesifikasi Kendaraan Honda : " << std::endl;
    std::cout << "1." << honda.merek << std::endl;
    std::cout << "2." << honda.warna << std::endl;
    std::cout << "3." << honda.cc << std::endl;
    std::cout << "4." << honda.tahun << std::endl;
    std::cout << "5." << honda.harga << std::endl << std::endl;

    std::cout << "Spesifikasi Kendaraan Yamaha : " << std::endl;
    std::cout << "1." << yamaha.merek << std::endl;
    std::cout << "2." << yamaha.warna << std::endl;
    std::cout << "3." << yamaha.cc << std::endl;
    std::cout << "4." << yamaha.tahun << std::endl;
    std::cout << "5." << yamaha.harga << std::endl;
    
    return 0;
}
