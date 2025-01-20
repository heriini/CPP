#include <iostream>

int main(){

    // Rumus f_n = f_n1 + f_n2

    int n;
    int f_n, f_n1, f_n2;

    std::cout << "*** Program Deret Fibonaci ***" << std::endl;
    std::cout << "Masukan nilai ke-n : ";
    std::cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;

    std::cout << f_n2 << " ";
    std::cout << f_n1 << " ";
    for(int i = 1; i < n; i++){
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        std::cout << f_n << " ";
    }
    std::cout << " " << std::endl;
    
    return 0;
}