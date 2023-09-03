#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numeroDigitado, numero, numeroInvertido = 0, digito;

    cout << "Digite um número inteiro: ";
    cin >> numeroDigitado;

    numero = numeroDigitado;

    while (numero != 0)
    {
        digito = numero % 10;
        numeroInvertido = (numeroInvertido * 10) + digito;
        numero /= 10; 
    }

    if(numeroDigitado == numeroInvertido) {
        cout << "palindromo\n";
    }else {
        cout << "não é palindromo\n";
    }
    
    cout << digito << endl;
    cout << numeroInvertido << endl;

}