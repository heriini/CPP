#include <iostream>
#include <cmath>

// Prototype fungsi
void header(void);
void opsi(void);
void proses_hitung(void);
void hitung_lagi(void);
double luas_persegi_panjang(double p, double l);
double luas_persegi(double s);
double luas_segitiga(double a, double t);
double luas_lingkaran(double r);

// Varibel input 
double a, b, hasil;
int jenis_bangun;
char konfirmasi;

#define phi 3.14

// Program utama
int main(){

    header();
    opsi();
    proses_hitung();
    hitung_lagi();
    

        while(konfirmasi == 'y'){
            opsi();
            proses_hitung();
            hitung_lagi();
            if(konfirmasi == 'n'){
                std::cout << "\nOkey, Terimakasih..." << std::endl;
            }
        } 
        if(konfirmasi == 'n'){
            std::cout << "\nOkey, Terimakasih..." << std::endl;
        }

    return 0;   
}

// Judul 
void header(void){
    std::cout << "\n *** KALKULATOR BANGUN DATAR *** " << std::endl;
}

// Opsi
void opsi(void){
    std::cout << "\nList Bangun Datar : \n\n";
    std::cout << "1. Persegi Panjang.\n2. Persegi.\n3. Segitiga.\n4. Lingkaran.\n5. Jajar Genjang.\n6. Trapesium.\n7. Belah Ketupat.\n8. Layang-layang.\n\n";
    std::cout << "Pilih Bangun Datar [1],[2],[3],[4],[5],[6],[7],[8] : ";
    std::cin >> jenis_bangun;
}

// Hitung luas persegi panjang
double luas_persegi_panjang(double p, double l){
    double luas;
    luas =  p*l;
    return luas;
}

// Hitung luas persegi
double luas_persegi(double s){
    double luas;
    luas = s*s;
    return luas;
}

// Hitung luas segitiga
double luas_segitiga(double a, double t){
    double luas;
    luas = a*t/2;
    return luas;
}
// Hitung luas lingkaran
double luas_lingkaran(double r){
    double luas;
    luas = phi*r*r;
    return luas;
}

// Perhitungan Utama
void proses_hitung(void){
    if(jenis_bangun == 1){
        std::cout << "\n*Persegi Panjang*" << std::endl;
        std::cout << "Panjang : ";
        std::cin >> a;
        std::cout << "Lebar : ";
        std::cin >> b;
        hasil = luas_persegi_panjang(a,b);
        std::cout << "Luas persegi panjang : " << hasil << std::endl;
    }
    else if(jenis_bangun == 2){
        std::cout << "\n*Persegi*" << std::endl;
        std::cout << "sisi : ";
        std::cin >> a;
        hasil =  luas_persegi(a);
        std::cout << "Luas persegi : " << hasil << std::endl;
    }
    else if(jenis_bangun == 3){
        std::cout << "\n*Segitiga*" << std::endl;
        std::cout << "Alas : ";
        std::cin >> a;
        std::cout << "Tinggi : ";
        std::cin >> b;
        hasil = luas_segitiga(a,b);
        std::cout << "Luas segitiga : " << hasil << std::endl;
    }
    else if(jenis_bangun == 4){
        std::cout << "\n*Lingkaran*" << std::endl;
        std::cout << "Jari-jari : ";
        std::cin >> a;
        hasil = luas_lingkaran(a);
        std::cout << "Luas lingkaran : " << hasil << std::endl;
    }
}

// Konfirmasi hitung lagi
void hitung_lagi(void){
    std::cout << "\nIngin menghitung lagi...? [y/n] : ";
    std::cin >> konfirmasi;
}