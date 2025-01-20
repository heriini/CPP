/* do while minimal akan melakukan aksi 1 kali walau sayarar belum terpenuhi*/

#include <iostream>

int main(){

    int a = 100;

    do
    {
        std::cout <<"Hitung Mundur " << a << std::endl;
        a--;
    } while (a <= 1);

    std::cout << "Hitung mundur selesai...!!!" << std::endl;
    
    return 0;
}