#include <iostream>
#include <string>

int main()
{
    std::string input_kalimat;
    std::cout << "Masukan kalimat : " ;
    std::getline(std::cin,input_kalimat);
    std::cout << "Kalimat anda adalah : " << input_kalimat << std::endl;

    // mencari jumlah kata pada kalimat
    int posisi = 0;
    int jumlah = 0;

    while(true){
        posisi = input_kalimat.find(" ", posisi + 1);
        jumlah ++;
            if (posisi < 0){
                break;
            }
    }
    std::cout << "Jumlah kata adalah : " << jumlah << std::endl;
    
    return 0;
}
