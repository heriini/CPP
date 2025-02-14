#include <iostream>
#include <fstream>
#include <string>

int main(){
    
    std::ifstream myFile;
    std::string output, buffer;
    bool isData = false;
    int no;
    std::string nama;

    myFile.open("data.txt");
    while(!isData){
        std::getline(myFile,buffer);
        output.append("\n" + buffer);
        if(buffer == "data"){
            isData = true;
        }
    }


    std::cout << output << std::endl;

    std::getline(myFile,buffer);
    while (!myFile.eof()){
        myFile >> no;
        myFile >> nama;

        std::cout << no << " " << nama << std::endl;
    }
    
    return 0;
}
