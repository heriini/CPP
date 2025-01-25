#include <iostream>

// Prototype fungsi
void header(void);
void opsi(void);
void proses_hitung(void);
void hitung_lagi(void);
double luas_persegi_panjang(double *p, double *l);
double luas_persegi(double *s);
double luas_segitiga(double *a, double *t);
double luas_lingkaran(double *r);
double luas_jajar_genjang(double a, double t);
double luas_trapesium(double *s1, double *s2, double *t);
double luas_belah_ketupat(double *d1, double *d2);
double luas_layang_layang(double *p, double *q);

// Varibel input 
double a, b, c, hasil;
int jenis_bangun;
char konfirmasi;

#define phi 3.14

// Program utama
int main(){

    header();
        std::cout << "alamat a : " << &a << std::endl;
        std::cout << "alamat b : " << &b << std::endl;
        std::cout << "alamat c : " << &c << std::endl << std::endl;
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
double luas_persegi_panjang(double *p, double *l){
    double luas;
    luas =  (*p)*(*l);
        std::cout << "alamat p : " << p << std::endl;
        std::cout << "alamat l : " << l << std::endl << std::endl;
    return luas;
}

// Hitung luas persegi
double luas_persegi(double *s){
    double luas;
    luas = (*s)*(*s);
    std::cout << "alamat s : " << s << std::endl << std::endl;
    return luas;
}

// Hitung luas segitiga
double luas_segitiga(double *a, double *t){
    double luas;
    luas = (*a)*(*t)/2;
        std::cout << "alamat a : " << a << std::endl;
        std::cout << "alamat t : " << t << std::endl << std::endl;
    return luas;
}
// Hitung luas lingkaran
double luas_lingkaran(double *r){
    double luas;
    luas = phi*(*r)*(*r);
        std::cout << "alamat r : " << r << std::endl << std::endl;
    return luas;
}

// Hitung luas jajar genjang
double luas_jajar_genjang(double *a, double *t){
    double luas;
    luas = (*a)*(*t);
        std::cout << "alamat a : " << a << std::endl;
        std::cout << "alamat t : " << t << std::endl << std::endl;
    return luas;
}

// Hitung luas trapesium
double luas_trapesium(double *s1, double *s2, double *t){
    double luas;
    luas = ((*s1)+(*s2))*(*t)/2;
        std::cout << "alamat s1 : " << s1 << std::endl;
        std::cout << "alamat s2 : " << s2 << std::endl;
        std::cout << "alamat t  : " << t << std::endl << std::endl;
    return luas;
}

// Hitung luas belah ketupat
double luas_belah_ketupat(double *d1, double *d2){
    double luas;
    luas = (*d1)*(*d2)/2;
        std::cout << "alamat d1 : " << d1 << std::endl;
        std::cout << "alamat d2 : " << d2 << std::endl << std::endl;
    return luas;
}

// Hitung luas layang-layang
double luas_layang_layang(double *p, double *q){
    double luas;
    luas = (*p)*(*q)/2;
        std::cout << "alamat p : " << p << std::endl;
        std::cout << "alamat q : " << q << std::endl << std::endl; 
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
        hasil = luas_persegi_panjang(&a,&b);
        std::cout << "Luas persegi panjang : " << hasil << " cm²" << std::endl;
    }
    else if(jenis_bangun == 2){
        std::cout << "\n*Persegi*" << std::endl;
        std::cout << "sisi : ";
        std::cin >> a;
        hasil =  luas_persegi(&a);
        std::cout << "Luas persegi : " << hasil << " cm²" << std::endl;
    }
    else if(jenis_bangun == 3){
        std::cout << "\n*Segitiga*" << std::endl;
        std::cout << "Alas : ";
        std::cin >> a;
        std::cout << "Tinggi : ";
        std::cin >> b;
        hasil = luas_segitiga(&a,&b);
        std::cout << "Luas segitiga : " << hasil << " cm²" << std::endl;
    }
    else if(jenis_bangun == 4){
        std::cout << "\n*Lingkaran*" << std::endl;
        std::cout << "Jari-jari : ";
        std::cin >> a;
        hasil = luas_lingkaran(&a);
        std::cout << "Luas lingkaran : " << hasil << " cm²"<< std::endl;
    }
    else if(jenis_bangun == 5){
        std::cout << "\n*Jajar Genjang*" << std::endl;
        std::cout << "Alas : ";
        std::cin >> a;
        std::cout << "Tinggi : ";
        std::cin >> b;
        hasil = luas_jajar_genjang(&a,&b);
        std::cout << "Luas jajar genjang : " << hasil << " cm²" << std::endl;
    }
    else if(jenis_bangun == 6){
        std::cout << "\n*Trapesium*" << std::endl;
        std::cout << "Sisi 1 : ";
        std::cin >> a;
        std::cout << "Sisi 2 : ";
        std::cin >> b;
        std::cout << "Tinggi : ";
        std::cin >> c;
        hasil = luas_trapesium(&a,&b,&c);
        std::cout << "Luas trapesium : " << hasil << " cm²" << std::endl;
    }
    else if(jenis_bangun == 7){
        std::cout << "\n*Belah Ketupat*" << std::endl;
        std::cout << "Diagonal 1 : ";
        std::cin >> a;
        std::cout << "Diagonal 2 : ";
        std::cin >> b;
        hasil = luas_belah_ketupat(&a,&b);
        std::cout << "Luas belah ketupat : " << hasil << " cm²"<< std::endl;
    }
    else if(jenis_bangun == 8){
        std::cout << "\n*Layang-Layang*" << std::endl;
        std::cout << "Diagonal p : ";
        std::cin >> a;
        std::cout << "Diagonal q : ";
        std::cin >> b;
        hasil = luas_layang_layang(&a,&b);
        std::cout << "Luas belah layang-layang : " << hasil << " cm²"<< std::endl;
    }

}

// Konfirmasi hitung lagi
void hitung_lagi(void){
    std::cout << "\nIngin menghitung lagi...? [y/n] : ";
    std::cin >> konfirmasi;
}