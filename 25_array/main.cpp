/*** Array 
 * 
 * Ibaratkan sebuah lemari array dapat menyimpan suatu nilai pada setiap indeks nya
 * 
 */

#include <iostream>

int main(){

    // Deklarasi tipe data & variable array
    int nilai[5];

    // Mengisi nilai pada setiap indeks array
    nilai[0] = 1;
    nilai[1] = 2;
    nilai[2] = 3;
    nilai[3] = 4;
    nilai[4] = 5;

    std::cout << "alamat : " << &nilai[0] << " nilainya adalah : " << nilai[0] << std::endl;
    std::cout << "alamat : " << &nilai[1] << " nilainya adalah : " << nilai[1] << std::endl;
    std::cout << "alamat : " << &nilai[2] << " nilainya adalah : " << nilai[2] << std::endl;
    std::cout << "alamat : " << &nilai[3] << " nilainya adalah : " << nilai[3] << std::endl;
    std::cout << "alamat : " << &nilai[4] << " nilainya adalah : " << nilai[4] << std::endl;

    std::cout << "ukuran array " << sizeof(nilai) << " byte" << std::endl;
    std::cout << "member array " << sizeof(nilai)/sizeof(int) << std::endl;
    return 0;
}