#include <iostream>
using namespace std;

/*int main() {
int kode = 0;
while (kode!=3) {
 //input angka ngga akan berenti kalau bukan angka 3 yang diinput
        cout << "input no rahasia: ";
        cin >> kode;
    }*/
    
    
int main () {
int kode = 0;
    cout << "Input bilangan kelipatan 7: ";
    cin >> kode;

    while (kode % 7 != 0) {
    cout << "Input bilangan kelipatan 7: ";
    cin >> kode;
    
    }   
    
/* int main () {
 int  i = 1;
 while (i <= 10) {
 cout << i << endl;
 i++;
    }*/
    
return 0;
}