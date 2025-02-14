#include <iostream>

int main(){
    
    int a = 5;
    float b = 7.34f;
    char c = 'd';

    // inplisit casting
    std::cout << a + b << std::endl;

    // explisit casting
    std::cout << a + (int)c << std::endl;
    
    std::cout << (char)(a + c) << std::endl;

    return 0;
}


/*
casting operator digunakan untuk suatu tipe data ke tipe data lain
penggunaan (tipe konversi)variabel
contoh (int)a / (float)a dll
*/