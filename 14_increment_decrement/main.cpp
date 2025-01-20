/****Increment Decrement
 * 
 * Post-Increment (a++)
 * Pre-Increment (++a)
 * 
 * Post-Decrement (b--)
 * Pre-Decrement (--b)
 * 
 ****/

#include <iostream>

int main(){

    int a = 5;
    int b = 5;

    std::cout << "Nilai a adalah " << a << std::endl;
    // Post-Increment
    a++;
    std::cout << "Sekarang Nilai a adalah " << a << std::endl;
    //Pre-Increment
    ++a;
    std::cout << "Sekarang Nilai a adalah " << a << std::endl;


    std::cout << "\nNilai b adalah " << b << std::endl;
    // Post-Decrement
    b--;
    std::cout << "Sekarang nilai b adalah " << b << std::endl;
    // Pre-Decrement
    --b;
    std::cout << "Sekarang nilai b adalah " << b << std::endl;
    

    return 0;
}