#include <iostream>
using namespace std;

int main() {
    int t, l;
    cout << "Input tinggi: "; cin >> t;
    cout << "Input lebar: "; cin >> l; cout << endl;
    char pagar = '#';
    for(int i = 1; i <= t; i++){
        for (int j = 1; j <= l; j++){
            cout << pagar;
        }
        cout << endl;
        
    }
    return 0;
}
