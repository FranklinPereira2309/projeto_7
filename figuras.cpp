#include <iostream>

using namespace std;

int main() {
    int numero, i, j;
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    
    for(i = 0 ; i < numero -1 ; i++) {
        cout << " * ";
        for(j = 0 ; j < numero -1 ;  j++ ) {
            cout << " * ";
        }
        cout << "\n";
    }
    cout << endl;
    
   
}