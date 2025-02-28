/* macro tidak menempati memori */

#include <iostream>

// macro merubah nilai dengan nama
#define PHI 3.14
#define BAHASA "INDONESIA"

//macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B) ? A : B)

int main(){

    std::cout << "Nilai dari phi = " << PHI << std::endl;
    std::cout << "Bahasa yang digunakan adalah = " << BAHASA << std::endl;
    std::cout << "Nilai kuadrat dari 5 = " << KUADRAT(5) << std::endl;
    std::cout << "MAX = " << MAX(5,3) << std::endl;

    return 0;
}
    