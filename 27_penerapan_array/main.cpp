#include <iostream>
#include <array>

int main(){
    
    std::array <int, 11> nilai;

    std::cout << "Input Nilai Mahasiswa" << std::endl << std::endl;

    for(int i = 0; i < nilai.size(); i++ ){
        std::cout << "Jumlah mahasiswa dengan nilai  ";
        if(i == 0){
            std::cout << "0-9   : ";
        }
        else if (i == 10){
            std::cout << "100   : ";
        }
        else{
            std::cout << i*10 << "-" << (i*10)+9 << " : ";;
        }
        std::cin >> nilai[i];
    }

    std::cout << std::endl;
    std::cout << "Grafik Niai Mahasiswa" << std::endl << std::endl;

    for(int i = 0; i < nilai.size(); i++){
        if(i == 0){
            std::cout << "0-9   : ";
        }
        else if(i == 10){
            std::cout << "100   : ";
        }
        else {
            std::cout << i*10 << "-" << (i*10)+9 << " : ";;
        }
        for (int j = 0; j <= nilai[i]; j++){
            std::cout << "#";
        }
        std::cout << std::endl;
    }

    return 0;
}
