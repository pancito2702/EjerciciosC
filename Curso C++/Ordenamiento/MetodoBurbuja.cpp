//Metodo burbuja

#include <iostream>
#include <conio.h>

using namespace std;


int main() {

    int arreglo[] = {4,1,2,3,5};
    int i,j,aux;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (arreglo[j] > arreglo[j+1]) {
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        }


    }
    
    cout<<"Orden ascendente: ";

    for (i = 0; i < 5; i++) {
        cout<<arreglo[i]<<" ";
    }
    
    cout<<"Orden descendente: ";
    for (i = 4; i >= 0; i--) {
        cout<<arreglo[i]<<" ";
    }
    
    getch();
    return 0;
}