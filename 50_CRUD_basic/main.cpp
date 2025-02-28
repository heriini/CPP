#include <iostream>
#include <fstream>
#include <string>
#include <limits>

struct Mahasiswa{
    int primaryKey;
    std::string NIM;
    std::string nama;
    std::string jurusan;
};

int getOption();
void checkData(std::fstream &data);

void writeData(std::fstream &data, int posisi, Mahasiswa &inputMahasiswa){
    data.seekp((posisi - 1)* sizeof(Mahasiswa), std::ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}


int getDataSize(std::fstream &data){

    int start, end;

    data.seekg(0, std::ios::beg);
    start = data.tellg();
    data.seekg(0, std::ios::end);
    end =  data.tellg();
    return (end-start)/sizeof(Mahasiswa);

}

Mahasiswa readData(std::fstream &data, int posisi){

    Mahasiswa readMahasiswa;
    data.seekg((posisi-1)*sizeof(Mahasiswa),std::ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(Mahasiswa));
    return readMahasiswa;

}

void addDataMahasiswa(std::fstream &data){

    Mahasiswa inputMahasiswa, lastMahasiswa;

    int size = getDataSize(data);

    std::cout << "ukuran data : " << size << std::endl;

    if(size == 0){
        inputMahasiswa.primaryKey = 1;
    }else{
        lastMahasiswa = readData(data,size);
        std::cout << "premary key = " << lastMahasiswa.primaryKey << std::endl;
        inputMahasiswa.primaryKey = lastMahasiswa.primaryKey + 1;
    }
    
    readData(data, size);

    // inputMahasiswa.primaryKey = 1;
    std::cout << "Nama    : ";
    std::getline(std::cin, inputMahasiswa.nama);
    std::cout << "NIM     : ";
    std::getline(std::cin, inputMahasiswa.NIM);
    std::cout << "Jurusan : ";
    std::getline(std::cin, inputMahasiswa.jurusan);

    writeData(data,size+1,inputMahasiswa);
}

int main(){
    
    std::fstream data;

    checkData(data);
    
    int pilihan = getOption();
    char is_continue;

    enum option {CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while (pilihan != FINISH){
        
        switch (pilihan){
            case CREATE:
                std::cout << "Menambah data barang" << std::endl;
                addDataMahasiswa(data);
                break;
            case READ:
                std::cout << "Menampilkan data barang" << std::endl;
                break;
            case UPDATE:
                std::cout << "Mengubah data barang" << std::endl;
                break;
            case DELETE:
                std::cout << "Menghapus data barang" << std::endl;
                break;
            default:
                break;  
        }

        label_continue:

        std::cout << "Lanjutkan? (y/n) : " ;
        std::cin >> is_continue;
        
            if ((is_continue == 'y') || (is_continue == 'Y')){
                pilihan = getOption();
            }
            else if ((is_continue == 'n') || (is_continue == 'N')){
                break;
            }
            else {
                goto label_continue;
            }
    }
    
    std::cout << "Program berakhir..." << std::endl;
    
    return 0;
}

void checkData(std::fstream &data){
    data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);
    if(data.is_open()){
        std::cout << "dasabase ditemukan!" << std::endl;
    } else {
        std::cout << "database tidak ditemukan, membuat database baru." << std::endl;
        data.close();
        data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    }
}


int getOption(){
    int input;
    // std::system("clear");
    std::cout << "\n* Program CRUD Sederhana *" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "1. Tambah data barang." << std::endl;
    std::cout << "2. Tampilkan data barang." << std::endl;
    std::cout << "3. Ubah data barang." << std::endl;
    std::cout << "4. Hapus data barang." << std::endl;
    std::cout << "5. Selesai." << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << "Pilih [1 - 5]: ";
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return input;
}
