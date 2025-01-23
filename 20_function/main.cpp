/*** Function / fungsi
 * 
 * ada yang dengan kembalian dan ada pula yang tidak
 * 
 */

#include <iostream>

// fungsi dengan kembalian (return)
int tambah (int a, int b){
    int c;
    c = a + b;
    return c;
}

int kurang (int a, int b){
    int c;
    c = a - b;
    return c;
}

int kali(int a, int b){
    int c;
    c = a * b;
    return c;
}

float bagi(float a, float b){
    float c;
    c = a / b;
    return c;
}

int main(){

    int a, b, hasil, hasil1, hasil2;
    float a2, b2, hasil3;

    std::cout << "Penjumlahan" << std::endl;
    std::cout << "masukan nilai a: ";
    std::cin >> a;
    std::cout << "masukan nilai b: ";
    std::cin >> b;
    hasil = tambah(a,b);
    std::cout << "Hasil dari  " << a << " + " << b << " adalah : " << hasil << std::endl;

    std::cout << "\nPengurangan" << std::endl;
    std::cout << "masukan nilai a: ";
    std::cin >> a;
    std::cout << "masukan nilai b: ";
    std::cin >> b;
    hasil1 = kurang(a,b);
    std::cout << "Hasil dari  " << a << " - " << b << " adalah : " << hasil1 << std::endl;

    std::cout << "\nPerkalian" << std::endl;
    std::cout << "masukan nilai a: ";
    std::cin >> a;
    std::cout << "masukan nilai b: ";
    std::cin >> b;
    hasil2 = kali(a,b);
    std::cout << "Hasil dari  " << a << " * " << b << " adalah : " << hasil2 << std::endl;

    std::cout << "\nPembagian" << std::endl;
    std::cout << "masukan nilai a: ";
    std::cin >> a2;
    std::cout << "masukan nilai b: ";
    std::cin >> b2;
    hasil3 = bagi(a2, b2);
    std::cout << "Hasil dari  " << a << " / " << b << " adalah : " << hasil3 << std::endl;

    return 0;
}

