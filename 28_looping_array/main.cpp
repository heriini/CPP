#include <iostream>

int main(){

    int nilai[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i : nilai){
        std::cout << i << " alamatnya   : " << &nilai << std::endl;
    }

    std::cout << std::endl;

    // manipulasi nilai array
    for(int &iref : nilai){
        iref *= 2;

        std::cout << iref << " alamatnya   : " << &iref << std::endl;
    }
    return 0;
}
