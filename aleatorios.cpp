#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   int i, numeroAleatorio, palpite;

   cout << "Digite um valor de 0 ao máximo: " << endl;
   

    for(i=1 ; i<=10 ; i++){
        unsigned seed = time(0);
        srand(seed);
        numeroAleatorio = 1+rand()%100;
        cout<< "Adivinhe qual o número: " << endl;
        cin >> palpite;

        if(palpite == numeroAleatorio) {
            cout << "Correto - " << numeroAleatorio << endl ;
        }else if(palpite < numeroAleatorio) {
            cout << "Palpite abaixo - " << numeroAleatorio << endl;
        }else if(palpite > numeroAleatorio) {
            cout << "Palpite acima - " << numeroAleatorio << endl;
        }
    }
}