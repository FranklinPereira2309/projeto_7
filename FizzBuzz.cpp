#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
    double  resultadoPorTres, resultadoPorCinco;
    float dividePorTres = 3, dividePorCinco = 5;
    int numero = 1, auxPorTres, auxPorCinco;

   

    
    
    do {
            resultadoPorTres = numero / dividePorTres;
            auxPorTres = resultadoPorTres;
            resultadoPorCinco = numero / dividePorCinco;
            auxPorCinco = resultadoPorCinco;

            if(auxPorTres == resultadoPorTres && auxPorCinco == resultadoPorCinco) {
                cout << "FrizzBuzz - " << numero << endl;

            }else if(auxPorTres == resultadoPorTres) {
                cout << "Frizz - " << numero << endl;
            }else if(auxPorCinco == resultadoPorCinco){
                cout << "Buzz - " << numero << endl;
            }

            

            numero++;
    } while(numero >= 1 && numero <= 100);
      

} 