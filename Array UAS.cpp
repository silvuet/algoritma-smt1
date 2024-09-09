#include <iostream>
using namespace std;

int main () {
    
    /*string nama [3] ;
    
    for (int i=0; i<3; i++){
        cout << "Input nama : ";
        cin >> nama [i];
        }
        
    for (int i=0; i<3; i++){
         cout << nama [i]<< endl;
         
    }
         
    for (int i=0; i<3; i++){
         cout << nama [i]<< endl;
    }*/          
    
    string bhs [10];
    for (int i=0;i<10;i++){
        cout << "input bhs : ";
        cin >> bhs [i];
        }
        
    cout << "daftar bhs : " <<endl;
    for (int i=0; i<10; i ++){
    cout << bhs [i]<< endl;
    }
    return 0; 
}