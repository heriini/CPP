#include <iostream>
#include <string>

int getOption();

int main(){
    
    int pilihan = getOption();
    char is_continue;

    enum option {CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while (pilihan != FINISH){
        
        switch (pilihan){
            case CREATE:
                std::cout << "Menambah data barang" << std::endl;
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

int getOption(){
    int input;
    std::system("clear");
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
    return input;
}
