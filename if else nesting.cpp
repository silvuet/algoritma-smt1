#include<iostream>
using namespace std;

int main () {
   int a;
   cout << "Input angka: " ;
   cin >> a;
   if (a != 0) {
   if (a > 0 ) {
   cout << "POSITIF" << endl ;
   }
   else { 
   cout << "NEGATIF" << endl ;
   }
   } else {
   cout<< "BILANGAN 0" << endl ;
   }
    return 0;
}