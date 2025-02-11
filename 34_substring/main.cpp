#include <iostream>
#include <string>

int main(){
    
    std::string kalimat_1("Habib Voni sedang jalan-jalan di pasar.");
    std::string kalimat_2("Pada hari minggu Habib Voni sedang bersantai.");

    std::cout << "1." << kalimat_1 << std::endl;
    std::cout << "2." << kalimat_2 << std::endl;

    // mencari posisi index dari substring
    std::cout << "Posisi index dari pasar : ";
    std::cout << kalimat_1.find("pasar") << std::endl;
    std::cout << "Posisi index dari minggu : ";
    std::cout << kalimat_2.find("minggu") << std::endl;

    // subsring (mengambil string di tengah tengah)
    // substr(index, panjang)
    std::cout << kalimat_1.substr(33,5) << " ";
    std::cout << kalimat_2.substr(10,6) << std::endl;

    return 0;
}
