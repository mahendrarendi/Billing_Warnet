
#include <iostream>
using namespace std;

int main() {
    // Program Billing Warnet
    
    //deklarasi variabel
    char nama[10];
    int total_waktu;
    int jam, total_jam;
    int menit, total_menit;
    int detik, total_detik;
    
    cout<<"Aplikasi Billing warnet \n";
    cout<<"Terif per jam Rp. 5000 \n";
    
    //buat form untuk mengambil data pengguna
    cout<<"Nama pengguna : "; cin>>nama;
    cout<<"Waktu Penggunaan Warnet => \n";
    cout<<"Masukan Jam : "; cin>>jam;
    cout<<"Masukan menit: "; cin>>menit;
    cout<<"Masukan detik : "; cin>>detik;
    
    //logika program
    total_jam=jam*5000;
    total_menit=menit*5000/60;
    total_detik=detik*5000/360;
    
    //kalkulasi logika program
    cout<<"Anda harus bayar : Rp. ";
    total_waktu=total_jam+total_menit+total_detik;
    
    cout<<total_waktu<<endl<<endl;
   
   
   
    cout<<"develop @mahendrarendhi";
    
}
