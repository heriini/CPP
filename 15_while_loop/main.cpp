/* Sesuatu yang ditulisa didalam while ketika syaratnya terpenuhi akan terus di looping sampai syarat tidak terpenuhi*/

#include <iostream>

int main(){

    int a = 100;

    while (a >= 1){
        std::cout << "Hitung mundur " << a << std::endl;
        a--;
    }

    std::cout << "Hitung mundur selesai...!!!" << std::endl;

    return 0;
}