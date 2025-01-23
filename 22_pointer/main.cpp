/*** Pointer 
 * 
 * Menyalin alamat momori dari sumbernya (alias)
 * (&) untuk mengambil alamat
 * (*) untuk menggunakan pointer
 */

#include <iostream>

int main(){

    int a = 5;

    //pointer menyalin alamat dari variable a
    int *aPtr = &a;

    std::cout << "nilai dari a : " << a << std::endl;
    std::cout << "alamat dari a : " << &a <<std::endl;
    std::cout << "nilai dari aPtr : " << *aPtr << std::endl;
    std::cout << "alamat dari aPtr : " << aPtr << std::endl;
    return 0;
}