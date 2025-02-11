#include <iostream>

int main(){

    int n;
    std::cout << "### Mari bentuk segitigam-mu ###" << std::endl;
    std::cout << "\nMasukan nilai ke-n : ";
    std::cin >> n;
    std::cout << std::endl;

    std::cout << "Segitiga siku-siku" << std::endl;
    std::cout << "Pola 1 : " << std::endl << std::endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "\nPola 2 : " << std::endl << std::endl;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "\nPola 3 : " << std::endl << std::endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            std::cout << " ";
        }
        for(int k = n; k >= i; k--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "\nPola 4 : " << std::endl << std::endl;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            std::cout << " ";
        }
        for(int k = 1; k <= i; k++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "\nSegitiga sama kaki" << std::endl;
    std::cout << "Pola 1 : " << std::endl << std::endl;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            std::cout << " ";
        }
        for(int k = 1; k <= (2*i - 1); k++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "\nPola 2 : " << std::endl << std::endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            std::cout << " ";
        }
        for(int k = n; k >= (2*i - n); k--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "\nBelah ketupat :" << std::endl;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            std::cout << " ";
        }
        for(int k = 1; k <= (2*i - 1); k++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            std::cout << " ";
        }
        for(int k = n; k >= (2*i - n); k--){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    
    return 0;
}