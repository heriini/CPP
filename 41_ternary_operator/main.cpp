#include <iostream>
#include <string>

int main(){
    
    int a, b;
    std::string hasil1, hasil2, output;

    hasil1 = "benar";
    hasil2 = "salah";

    std::cout << "masukan nilai a : ";
    std::cin >> a;
    std::cout << "masukan nilai b : ";
    std::cin >> b;

    // penulisan ternary operator (? :)
    output =  (a > b) ? hasil1 : hasil2;
    std::cout << output << std::endl;
    return 0;
}
