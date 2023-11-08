#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int arreglo[] = {4,2,3,1,5};
    int i, pos, aux;

    for (i = 0; i < 5; i++) {
        pos = i;
        aux = arreglo[i];

        while ( (pos > 0) && (arreglo[pos-1] > aux) ) {
            arreglo[pos] = arreglo[pos-1];
            pos--;
        }
        arreglo[pos] = aux;
    }


    cout<<"Orden ascendente: ";

    for (i = 0; i < 5; i++) {
        cout<<arreglo[i]<<" ";
    }

    cout<<"Orden descendente: ";

    
    for (i = 4; i >= 0; i--) {
        cout<<arreglo[i]<<" ";
    }

    return 0;
}