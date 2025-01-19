#include <iostream>
#include <limits>

// bilangan bulat
int a = 1;
long b =2;
short c = 3;

// bilangan desimal
float d = 1.0;
double e = 2.5;

// charakter
char f ='a';

// boolean
bool g = true;

// tidak bertanda 
unsigned int h = 5;


int main(){
    int a;
    float b;
    u_int16_t c;

    std::cout << sizeof(a) << " byte" << std::endl; 
    std::cout << sizeof(b) << " byte" << std::endl;
    std::cout << sizeof(c) << " byte" << std::endl;
    std::cout << std::numeric_limits<int>::max() << std::endl;
    return 0;
}