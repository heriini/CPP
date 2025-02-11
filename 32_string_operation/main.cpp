#include <iostream>
#include <string>

int main(){
    
    std::string kata("sapi");

    // menampilkan data string
    std::cout << kata << std::endl;

    // mengambil karakter berdasarkan index
    std::cout << "Index ke-0 : " << kata[0] << std::endl;
    std::cout << "Index ke-1 : " << kata[1] << std::endl;
    std::cout << "Index ke-2 : " << kata[2] << std::endl;
    std::cout << "Index ke-3 : " << kata[3] << std::endl;

    // mengubah karakter berdasarkan index
    kata[1] = 'o';
    std::cout << kata << std::endl;

    // menyambung, concatination
    std::string kata2(kata + "er");
    std::cout << kata2 << std::endl;

    std::string kata3(" angkoet");
    kata2.append(kata3);
    std::cout << kata2 << std::endl;

    std::string kata4("jakarta");
    kata2 += " " + kata4;
    std::cout << kata2 << std::endl;

    return 0;
}
