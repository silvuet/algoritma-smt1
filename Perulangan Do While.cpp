#include <iostream>
using namespace std ;

//DO WHILE
    /*int main () {
        int i = 0;
        do {
            cout << "iya"<<endl;
            i++;
        }
        while (i<10);
    }*/
    int main () {
        int p ;
        int l ;
        char ulang;
        do{
        cout<<"input panjang: ";
        cin>>p;
        cout<<"input lebar: ";
        cin>>l;
        int luas = p*l;
        cout<<"luas: "<<luas<<endl;
        cout<<"ulangi? (y/n) : ";cin>>ulang;
        }
        while (ulang == 'y');
     }   