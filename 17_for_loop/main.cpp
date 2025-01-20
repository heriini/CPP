#include <iostream>

int main(){

    std::cout << "Loop dengan increment" << std::endl;
    for(int a = 0; a <= 10; a++){
        std::cout << a << std::endl;
    }
    std::cout << "\nLoop dengan decrement" << std::endl;
    for(int a = 0; a >= -10; a--){
        std::cout << a << std::endl;
    }
    std::cout << "\nLoop dengan assigment" << std::endl;
    for(int a = 0; a <= 10; a += 2){
        std::cout << a << std::endl;
    }
    std::cout << "\nLoop dengan gabungan" << std::endl;

    int total = 0;
    for(int a = 0; a <= 10; a++, total += a){
        std::cout << a << " || " << total << std::endl;
    }

    return 0;
}