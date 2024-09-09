#include<iostream>
using namespace std;

int main () {
   int usia;
   cout << "Masukkan usia " ;
   cin >> usia;
   if (usia <= 23) {
   cout << "SELAMAT KAMU MEMENUHI SYARAT SELEKSI!" << endl ;
   cout << "Semangat." ;
   }
   else {
   cout << "MAAF KAMU TIDAK MEMENUHI SYARAT SELEKSI." << endl ;
   cout << "Jangan bersedih, bisa dicoba kembali dilain waktu." ;
   }
    return 0;
}