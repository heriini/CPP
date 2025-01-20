#include <iostream>

    // Varible Global 
    float a, b, hasil;
    char aritmatika;

// Fungsi menjalankan program menggunakan if_statment
void if_statment(void){
    if(aritmatika == '+'){
        hasil = a + b;
        std::cout << " = " << hasil << "\n\n";
    } 
    else if(aritmatika == '-'){
        hasil = a - b;
        std::cout << " = " << hasil << "\n\n";
    }
    else if(aritmatika == '*'){
        hasil = a * b;
        std::cout << " = " << hasil << "\n\n";
    }
    else if(aritmatika == '/'){
        hasil = a / b;
        std::cout << " = " << hasil << "\n\n";
    } 
    else {
        std::cout << "\nOperator yang anda masukan salah...!!!\n\n";
    }
}

// Fungsi menjalankan program menggunakan switch_case
void switch_case(void){
    switch (aritmatika)
    {
    case '+':
        hasil = a + b;
        std::cout << " = " << hasil << "\n\n";
        break;
    case '-':
        hasil = a - b;
        std::cout << " = " << hasil << "\n\n";
        break;
    case '*':
        hasil = a * b;
        std::cout << " = " << hasil << "\n\n";
        break;
    case '/':
        hasil = a / b;
        std::cout << " = " << hasil << "\n\n";
        break;
    default:
        std::cout << "\nOperator yang anda masukan salah...!!!\n\n";
        break;
    }
}

int main(){

    std::cout << "*** Basic Calculator Program ***\n\n";

    std::cout << "Masukan nilai pertama : ";
    std::cin >> a;
    std::cout << "Pilih operator (+), (-), (*), (/) : ";
    std::cin >> aritmatika;
    std::cout << "Masukan nilai kedua : ";
    std::cin >> b;

    std::cout << "Hasil perhitungan : ";
    std::cout << a << " " <<  aritmatika << " " << b;

    if_statment();      // Menggunakan if_statment
    //switch_case();      // Menggunakan switch_case

    return 0;
}