/*** Function / fungsi
 * 
 * ada yang dengan kembalian dan ada pula yang tidak.
 * fungsi juga mempunyai prototype untuk memudahkan pemanggian pada saat multi file
 * 
 */

#include <iostream>

// Prototype Fungsi
double tambah (double a, double b);
double kurang (double a, double b);
double kali(double a, double b);
double bagi(double a, double b);
void print_tambah(double a, double b, double hasil);
void print_kurang(double a, double b, double hasil1);
void print_kali(double a, double b, double hasil2);
void print_bagi(double a, double b, double hasil3);

// main program
int main(){

    double a, b, hasil, hasil1, hasil2, hasil3;
    
    std::cout << "Penjumlahan" << std::endl;
    std::cout << "masukan nilai a: ";
    std::cin >> a;
    std::cout << "masukan nilai b: ";
    std::cin >> b;
    hasil = tambah(a,b);
    print_tambah(a, b, hasil);
  
    std::cout << "\nPengurangan" << std::endl;
    std::cout << "masukan nilai a: ";
    std::cin >> a;
    std::cout << "masukan nilai b: ";
    std::cin >> b;
    hasil1 = kurang(a,b);
    print_kurang(a, b, hasil1);

    std::cout << "\nPerkalian" << std::endl;
    std::cout << "masukan nilai a: ";
    std::cin >> a;
    std::cout << "masukan nilai b: ";
    std::cin >> b;
    hasil2 = kali(a,b);
    print_kali(a, b, hasil2);

    std::cout << "\nPembagian" << std::endl;
    std::cout << "masukan nilai a: ";
    std::cin >> a;
    std::cout << "masukan nilai b: ";
    std::cin >> b;
    hasil3 = bagi(a, b);
    print_bagi(a, b, hasil3);

    return 0;
}

// fungsi dengan kembalian (return)
double tambah (double a, double b){
    double c;
    c = a + b;
    return c;
}

double kurang (double a, double b){
    double c;
    c = a - b;
    return c;
}

double kali(double a, double b){
    double c;
    c = a * b;
    return c;
}

double bagi(double a, double b){
    double c;
    c = a / b;
    return c;
}

// tanpa kembalian
void print_tambah(double a, double b, double hasil){
  std::cout << "Hasil dari  " << a << " + " << b << " adalah : " << hasil << std::endl;
}

void print_kurang(double a, double b, double hasil1){
  std::cout << "Hasil dari  " << a << " - " << b << " adalah : " << hasil1 << std::endl;
}

void print_kali(double a, double b, double hasil2){
  std::cout << "Hasil dari  " << a << " * " << b << " adalah : " << hasil2<< std::endl;
}

void print_bagi(double a, double b, double hasil3){
  std::cout << "Hasil dari  " << a << " / " << b << " adalah : " << hasil3<< std::endl;
}

