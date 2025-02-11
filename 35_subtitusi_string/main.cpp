#include <iostream>
#include <string>

int main(){
    
    std::string kalimat_1("Dadang dan Dudung main di sawah");
    std::string kalimat_2("Selamat datang");

    std::cout << "Kalimat awal : " << std::endl;
    std::cout << "1." << kalimat_1 << std::endl;
    std::cout << "2." << kalimat_2 << std::endl << std::endl;

    //swab string
    kalimat_1.swap(kalimat_2);
    std::cout << "swab string : " << std::endl;
    std::cout << "1." << kalimat_1 << std::endl;
    std::cout << "2." << kalimat_2 << std::endl << std::endl;

    //replace string
    kalimat_2.replace(kalimat_2.find("in"),2, "kan");
    kalimat_1.replace(kalimat_1.find("da"),6, "jalan");
    std::cout << "replace string : " << std::endl;
    std::cout << "1." << kalimat_1 << std::endl;
    std::cout << "2." << kalimat_2 << std::endl << std::endl;

    //insert
    kalimat_2.insert(24, "pecel ");
    kalimat_1.insert(13, " para pengunjung");
    std::cout << "insert string : " << std::endl;
    std::cout << "1." << kalimat_1 << std::endl;
    std::cout << "2." << kalimat_2 << std::endl;

    return 0;
}
