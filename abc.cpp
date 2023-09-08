#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    char vet[50] = {"ABCDEFGHIJLMNOPQRSTUVZWYZ"};
    int numero, indice;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    for(int i = 0 ; i < numero ; i++) {
       for(int j = 0; j <= i ; j++) {

            if(i > 1) {
                indice = i + j+1;
                
            }else {
                indice = i + j;
            }
           
            cout << vet[indice] ;
            
       }
        cout << endl;
       
    }
}