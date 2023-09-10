#include <iostream>

using namespace std;

int main() {
    float divisao, i = 1;
    
    int numero = 10, comparar;

    cout << "Digite um número inteiro: ";
    cin >> numero;
        
        
    while(i <= numero)
    {
        divisao = numero / i;
        comparar = divisao;
        
        
        if(divisao == comparar) {
            
            cout << "O número " << numero << " é divisivel por " << divisao << endl;
        }

        i++;
    }
}