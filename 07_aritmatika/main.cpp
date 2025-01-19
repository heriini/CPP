/* Operator Aritmatika 
    * Penjumlahan (+)
    * Pengurangan (-)
    * Perkalian (*)
    * Pembagian (/)
    * Modulus / sisa hasil bagi (%)
*/

#include <iostream>

    int a = 10;
    int b = 2;

int main(){

    int penjumlahan = a + b;
    int pengurangan = a - b;
    int perkalian = a * b;
    int pembagian = a / b;
    int mod = a % b;

    std::cout << "Hasil penjumlahan dari a + b = " << penjumlahan << std::endl;
    std::cout << "Hasil pengurangan dari a - b = " << pengurangan << std::endl;
    std::cout << "Hasil perkalian dari a * b = " << perkalian << std::endl;
    std::cout << "Hasil pembagian dari a / b = " << pembagian << std::endl;
    std::cout << "Hasil mod dari a % b = " << mod << std::endl;

    return 0;
}