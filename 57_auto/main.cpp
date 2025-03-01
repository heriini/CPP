#include <iostream>
#include <string>

// auto digunakan jika kita tidak tahu variabel bertipedata apa.

template<typename T, typename U>
auto max(T a, U b){
    return (a > b) ? a : b ;
}

template<typename T>
void print(T data){
    std::cout << data << std::endl;
}

int main(){
    
    print(max(23.5,13));
    return 0;
}
