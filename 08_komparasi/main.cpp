/*** Komparasi, relation expression
 * 
 * == (sama dengan)
 * != (tidak sama dengan)
 * >= / > (lebih besar sama dengan / lebih besar dari)
 * <= / < (lebih kecil sama dengan / lebih kecil dari)
 * 
***/

#include <iostream>

    int a = 2;
    int b = 2;

int main(){

    bool benar, salah;

    // sama dengan / sebanding
    benar = (a == b);
    std::cout << benar << std::endl;

    // tidak sama dengan / tak sebanding
    salah = ( a != b);
    std::cout << salah << std::endl;

    return 0;
}