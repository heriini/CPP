#include <iostream>
#include <array>

int main(){
    
    // Bentuk lain dari deklarasi tipe data dan variabel array
    std::array < int, 5 > nilai;

    for(int i = 0; i <= 4; i++){
        nilai[i] = i;
        std::cout << "Nilai [" << nilai[i] << "] adalah : " << i << std::endl;
    }

    std::cout << " " << std::endl;

    // fungsi standar librari array

    // ukuran array
    std::cout << "ukuran array : " << nilai.size() << std::endl;

    // nilai dengan indeks
    std::cout << "nilai ke-3 : " << nilai.at(3) << std::endl;

    // dan masih banyak lagi

    return 0;
}
