#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    char vet[31] = {"ABCDEFGHIJLMNOPQRSTUVZWYZ"};
    int numero, indice;

    cout << "Digite um número inteiro(): ";
    cin >> numero;

    for(int i = 0 ; i < numero ; i++) {
       for(int j = 0; j <= i ; j++) {
            if(indice == 25) {
                indice = 0;
            }
            cout << vet[indice] ;
            indice +=1;              
            
       }
        cout << endl;
       
    }
}