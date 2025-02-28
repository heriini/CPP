#include <iostream>
#include "main.h"
#include "sub.h"

// #define YOO "OLD"

//ifdef
// #ifdef YOO
//     #define TEST "ada nih"
// #else
//     #define TEST "lah gak ada"
// #endif


//ifndef -> jika tidak terdefinisi
// #ifndef YOO
//     #define YOO "NEW"
// #endif

//pragram

int main(){
    Mahasiswa mahasiswa;
    mahasiswa.NIM = 10;
    std::cout << "NIM : " << mahasiswa.NIM << std::endl;
    return 0;
}
