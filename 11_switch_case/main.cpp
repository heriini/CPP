#include <iostream>

int main(){

    int a;

    std::cout << "Masukan angka = ";
    std::cin >> a;

    switch (a)
    {
    case 1:
        std::cout << "a = 1" << std::endl; 
        break;
    case 2:
        std::cout << "a = 2" << std::endl;
        break;
    case 3:
        std::cout << "a = 3" << std::endl; 
        break;
    case 4:
        std::cout << "a = 4" << std::endl;
        break;
    case 5:
        std::cout << "a = 5" << std::endl;
        break;
    default:
        std::cout << "a = " << a << std::endl;
        break;
    }

    return 0;
}