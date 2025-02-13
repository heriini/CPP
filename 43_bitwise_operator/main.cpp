/** Bitwise Operator
 * 
 * &  = bitwise AND
 * |  = bitwise OR
 * ^  = bitwise XOR
 * ~  = bitwise NOT
 * >> = bitwise SHR (shift right)
 * << = bitwise SHL (shift left)
 * 
 */


#include <iostream>
#include <string>
#include <bitset>

// fungsi cetak judul
void judul(std::string namaOperator){
    std::cout <<"\n" << namaOperator << std::endl;
}

// fungsi cetak nilai biner
void printBinary(unsigned short val, std::string nama){
    std::cout << nama << " = " << std::bitset<8>(val) << std::endl;
}

// fungsi cetak nilai biner ke desimal
void binerTodecimal(unsigned short binanryVal){
    std::cout << std::bitset<8>(binanryVal) << " = " << binanryVal << std::endl;
}

int main(){
    
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    // AND
    judul("& - bitwise AND");
    c = a & b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    binerTodecimal(c);

    // OR
    judul("| - bitwise OR");
    c = a | b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    binerTodecimal(c);

    //XOR
    judul("^ - bitwise XOR");
    c = a ^ b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    binerTodecimal(c);

    // NOT
    judul("~ - bitwise NOT");
    c =  ~a;
    printBinary(a,"a");
    printBinary(c,"c");
    binerTodecimal(c);
    c = ~b;
    printBinary(a,"b");
    printBinary(c,"c");
    binerTodecimal(c);

    // Shift Right
    judul(">> - bitwise SHR");
    c = a >> 2;
    printBinary(a,"a");
    printBinary(c,"c");
    binerTodecimal(c);
    c = b >> 1;
    printBinary(b,"b");
    printBinary(c,"c");
    binerTodecimal(c);

    // Shift Left
    judul("<< - bitwise SHL");
    c = a << 2;
    printBinary(a,"a");
    printBinary(c,"c");
    binerTodecimal(c);
    c = b << 1;
    printBinary(b,"b");
    printBinary(c,"c");
    binerTodecimal(c);

    return 0;
}
