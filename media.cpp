#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // #define COL  4
    // #define LIN  10

    int i = 0, j, sair = 1, matricula[10], conte = 0;
    float media, soma, nota[10][4] = {};
    

    while(sair == 1) {
        soma = 0;
        media = 0;
        cout << "Digite a matrícula do aluno (8 digitos): ";
        cin >> matricula[i];
        
        for(j = 0 ; j < 3 ; j++) {
            cout << "Digite a nota " << i +1 << " de " << j +1 << ": ";
            cin >> nota[i][j];
            soma += nota[i][j];

        }
        media = soma / j;
        nota[i][3] = media;
        ++i;
        cout << "Deseja continuar 1 - Sair 0? ";               
        cin >> sair;

        if(sair == 0) {
            conte = i;
        }
    }
   
    
    

    for(i = 0 ; i < conte ; i++) {
        cout << endl;
        cout << "Matricula\t" << "Nota1\t" << "Nota2\t" << "Nota3\t" << "Media" << endl;
        cout << "==============================================" << endl;
        cout << matricula[i] << "\t";
        for(j = 0 ; j < 4 ; j++) {
            cout << fixed << setprecision(2) << nota[i][j] << "\t";

        }
        cout << endl;
    }

    
        

    


}