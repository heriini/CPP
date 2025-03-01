/* Template untuk fungsi fungsi general*/

#include <iostream>

template<typename T>
void print(T data){
    std::cout << data << std::endl;
}

template<typename T>
int toInt(T data){
    return int(data);
}

template<typename T>
char toChar(T data){
    return char(data);
}

template<typename T, typename U>
auto max(T a, U b){
    return (a > b) ? a : b;
}

int main(){
    
    print(5);
    print(3.4);
    print('a');

    print(toInt('a'));
    print(toInt(3.4));

    print(toChar(97));
    print(max(10.5,23.5));

    return 0;
}
