#include <iostream>

void prinyArray(int *ptrArray, int baris, int kolom){
    int index = 0;
    for(int i = 0; i < baris; i++){
        std::cout << "[ ";
        for(int j = 0 ; j < kolom; j ++){
            std::cout << (*ptrArray + index) << " ";
            index++;
        }
        std::cout << "]" << std::endl;
    }
}

int main(){
    
    // arrayMD [baris] [kolom]
    const int baris = 2;
    const int kolom = 2;
    int arrayMD[baris][kolom] = {1,2,3,4};

    prinyArray(*arrayMD, baris, kolom);
    return 0;
}
