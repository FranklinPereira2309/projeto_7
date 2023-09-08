#include <iostream>

using namespace std;

int main() {
    int numero, i, j;
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    
    for(i = 1 ; i <= numero ; i++) {
        cout << " * ";
        for(j = 1 ; j <= numero -1;  j++ ) {
            cout << " * ";
        }
        cout << "\n";
    }
    cout << endl;
    
    
    for (int i = 1; i <= numero; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << " * ";            
        }
        cout << endl;
    }

    cout << endl;

    for (i = 0; i < numero; i++) {
            for(j = 0 ;  j < numero ; j++ ) {     
                if(i == 0 || i == numero -1) {
                    cout << " * ";          
                        
                
                }else if(j == 0 || j == numero -1) {
                cout << " * ";
                }else {
                cout << "   ";
                }
            }
            
            cout << endl;    
    }
}
        
    

       
    
        
        
    
   
