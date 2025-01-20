/*** Assigment operator
 * Variabel = Variabel Operator Ekspresi
 *     a    =.    a.   +,-,*,/     3
 * Variabel Operator= Ekspresi
 *     a       +=.       3
 * 
 * += (ditambah)
 * -= (dikurang)
 * *= (dikali)
 * /= (dibagi)
 * %= (modulus)
 * 
 * 
***/

#include <iostream>

int main(){

    int a = 10;
    std::cout << "Nilai awal dari a adalah " << a << std::endl;

    a += 3;
    std::cout<< "Ditambah 3 menjadi " << a << std::endl;
    a -= 3;
    std::cout<< "Dikurang 3 menjadi " << a << std::endl;
    a /= 3;
    std::cout<< "Dibagi 3 menjadi " << a << std::endl;
    a *= 3;
    std::cout<< "Dikali 3 menjadi " << a << std::endl;
    a %= 3;
    std::cout<< "Dimodulus 3 menjadi " << a << std::endl;
    return 0;
}