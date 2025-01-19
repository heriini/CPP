/**** Operator logika
 * 
 * not / negasi (!) (membalikan nilai)
 * and (&&) (akan bernilai true ketika kedua nulai = true)
 * or (||) (akan bernilai true jika salah satu nilai true)
 * 
 *  ****/

#include <iostream>

    int a = 2;
    int b = 3;

int main(){

    bool hasil; 

    // not 
    std::cout << "Negasi / Not Operator" << std::endl; 
    hasil = (a == b);
    std::cout << "hasil sebelum negasi = " << hasil << std::endl;
    hasil = !(a == b);
    std::cout << "hasil setelah negasi = " << hasil << std::endl;

    // and 
    std::cout << "\nAND Operator" << std::endl; 
    hasil = (a == 3) && (b == 4);
    std::cout << "false and fals = " << hasil << std::endl;
    hasil = (a == 2) && (b == 4);
    std::cout << "true and false = " << hasil << std::endl;
    hasil = (a == 3) && (b == 3);
    std::cout << "false and true = " << hasil << std::endl;
    hasil = (a == 2) && (b == 3);
    std::cout << "true and true = " << hasil << std::endl;

    // or
    std::cout << "\nOR Operator" << std::endl; 
    hasil = (a == 3) || (b == 4);
    std::cout << "false and fals = " << hasil << std::endl;
    hasil = (a == 2) || (b == 4);
    std::cout << "true and false = " << hasil << std::endl;
    hasil = (a == 3) || (b == 3);
    std::cout << "false and true = " << hasil << std::endl;
    hasil = (a == 2) || (b == 3);
    std::cout << "true and true = " << hasil << std::endl;

    return 0;
}