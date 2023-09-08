#include <iostream>

using namespace std;

int main() {
    int numero = 0, soma = 0, sair = 1;


    while(sair == 1) {
        cout << "Digite um número inteiro para verificar se é Número Perfeito: " ;
        cin >> numero;
        soma = 0;
        for(int i = 1 ; i < numero ; ++i) {
            if(numero % i == 0) {
                soma += i;
            }
            
        }
        if(soma == numero) {
            cout << soma << " - É um número perfeito! " << endl;
            
        }else {
            cout << soma << " - Não é um número perfeito! " << endl;

        }
        cout << "Deseja sair (1 - Continuar / 0 - SAIR)";
        cin >> sair;
    }
}
