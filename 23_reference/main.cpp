/*** Reference
 * 
 * digunakan untuk menyamakan nilai / alat referensi dari variabel lain (a = b / b = a)
 * nilai dan alamat kedua variabel akan sama
 * 
 */

#include <iostream>

int main(){

    int a = 5;

    int &b = a;

    std::cout << " nilai dari a : " << a << std::endl;
    std::cout << "alamat dari a : " << &a << std::endl << std::endl;

    std::cout << " nilai dari b : " << b << std::endl;
    std::cout << "alamat dari b : " << &b << std::endl << std::endl;

    b = 20;
    std::cout << " nilai dari a : " << a << std::endl;
    std::cout << "alamat dari a : " << &a << std::endl << std::endl;

    std::cout << " nilai dari b : " << b << std::endl;
    std::cout << "alamat dari b : " << &b << std::endl << std::endl;

    return 0;
}