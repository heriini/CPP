#include <iostream>
#include <string>

void print(int val){
    std::cout << val << std::endl;
}

int main(){

    int a;
    int b;
    int c;

    // implementasi comma operator (penulisan berurutan)
    a = ( b=3, print(b), c=4, print(c), (b+c));

    std::cout << b << " + " << c << " = " << a << std::endl;

    return 0;
}