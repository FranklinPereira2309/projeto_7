#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, sair = 1, matricula;
    float media, soma, nota[4] = {};


    while(sair == 1) {
    cout << "Digite a matrícula do aluno (8 digitos): ";
    cin >> matricula;
    soma = 0;
    media = 0;

    for(i = 0 ; i < 3 ; i++) {
        cout << "Digite a nota " << i +1 << " ";
        cin >> nota[i];
        soma += nota[i];
    }
    media = soma / i;
    nota[3] = media;
   
    system("cls");

    cout << "Matricula\t" << "Nota1\t" << "Nota2\t" << "Nota3\t" << "Media" << endl;
    cout << "==============================================" << endl;
    cout << matricula << "\t";
    for(i = 0 ; i < 4 ; i++) {
        cout << fixed << setprecision(2) << nota[i] << "\t";
    }

    cout << endl;
        
    cout << "Deseja continuar 1 - Sair 0? ";
    cin >> sair;

    }


}