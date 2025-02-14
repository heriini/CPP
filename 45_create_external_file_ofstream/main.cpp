#include <iostream>
#include <fstream> 

int main(){
    
    // myFile merupakan object dari kelas ofstream
    std::ofstream myFile;

    // ios::out = default, operasi output (akan dioverwrite)
    myFile.open("data1.txt", std::ios::out);     // membuat file 
    myFile << "ada tambahan pendekar baru";    // isi file
    myFile.close();                              // menutup file jika sudah tidak digunakan

    // ios::app = menuliskan pada akhir baris
    myFile.open("data2.txt", std::ios::app);     // membuat file 
    myFile << "\nada tambahan pendekar baru";    // isi file
    myFile.close();                              // menutup file jika sudah tidak digunakan

    // ios::trunc = default, membuat file jika belum ada file yang tersedia
    myFile.open("data3.txt", std::ios::trunc);   // membuat file 
    myFile << "ada tambahan pendekar baru";    // isi file
    myFile.close();                              // menutup file jika sudah tidak digunakan
    
    return 0;
}
