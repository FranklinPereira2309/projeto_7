#include <iostream>

using namespace std;

int main() {
    int numero, anterior = 0, penultimo = 1, soma = 0, auxiliar = 0;

    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    cout << anterior << " " << penultimo << " ";

    for(int i = 0 ; i < numero ; i++) {

        soma = anterior + penultimo;
            
        auxiliar = penultimo;
        anterior = auxiliar;
        penultimo = soma;

        cout << penultimo << " " ;

    }
    
    cout << endl;
}