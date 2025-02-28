#include <iostream>

#define ID 1

#if ID == 1
    #define LANG "Indonesia"
#else
    #define LANG "English"
#endif

int main(){

    std::cout << "Bahasa : " << LANG << std::endl;
    return 0;
}
