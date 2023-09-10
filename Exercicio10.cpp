#include <iostream>

using namespace std;

int main() {
    int numero, anterior = 0, penultimo = 1, soma = 0, sequencia = 0;

    cout << "Digite um número inteiro: ";
    cin >> numero;
    
    cout << anterior << " " << penultimo << " ";

    for(int i = 0 ; i < numero ; i++) {

        soma = anterior + penultimo;
            
        sequencia = penultimo;
        anterior = sequencia;
        penultimo = soma;

        cout << penultimo << " " ;

    }
    
    cout << endl;
}