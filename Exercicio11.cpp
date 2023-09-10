#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    
    string valor, aux;
    int numero = 0, compare = 0;
    
      cout << "Digite um número: " ;
    getline(cin, valor);

    for(int i = 0 ; i < valor.length() ; i++) {
        aux = valor.at(i);
        numero += pow(stoi(aux),3);
    }

    compare = stoi(valor);

    if(compare == numero) {
        cout << "Número Amstrong!" << endl;
    }else {
        cout << "Não é número Amstrong!" << endl;
    }
 
    

}