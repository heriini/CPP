#include <iostream>

int main(){

    int a;
    std::cout << "Ketikan angka = ";
    std::cin >> a;

    // jika variabel a bernilai 1 maka akan menjalankan fungsi oini
    if(a == 1){
        std::cout << "kamu mengetikan angka 1" << std::endl;
    } 

     // lain jika variabel a bernilai 5 maka akan menjalankan fungsi ini
    else if(a == 5){
        std::cout << "kamu mengetikan angka 5" << std::endl;
    }

    // variabel a tidak bernilai 1 maka jalankan fungsi ini
    else {
        std::cout << "pasti kamu mengetik bukan angka 1 maupun 5" << std::endl;
    }

    std::cout << "oke...!!!" << std::endl;
    return 0;
}