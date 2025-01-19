#include <iostream>

// global variable
int a, b, c;

int main(){

    std::cout << "Masukan nilai a : "; 
    std::cin >> a;
    std::cout << "Masukan nilai b : "; 
    std::cin >> b;
    
    c =  a + b;
    std::cout << "Hasil dari a + b = " << c << std::endl;
    return 0;
}