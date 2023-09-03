#include <iostream>
#include <cmath>
using namespace std;

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int aux, conte, range = 100, div;

    for(aux = 2 ; aux <= range ; aux++){
        div = 0;

        for(conte = 2 ; conte <= sqrt(aux) ; conte++) {
            if(aux % conte == 0) {
                div++;

            }

        }

        if(!div) {

            cout<< aux << " ";
        }
    }

    cout << endl;

    return 0;
}