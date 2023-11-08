#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int arreglo[] = {3,2,1,5,4};
    int i,j,aux,min;

    for (i = 0; i < 5; i++) {
        min = i;
        for (j = i+1; j < 5; j++) {
            if (arreglo[j] < arreglo[min]) {
                min = j;
            }      
        }
        aux = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = aux;
    }

    cout<<"Orden ascendente: ";

    for (i = 0; i < 5; i++) {
        cout<<arreglo[i]<<" ";
    }


    cout<<"Orden Descendente: ";

    for (i = 4; i >= 0; i--) {
        cout<<arreglo[i]<<" ";
    }
    getch();
    return 0;
}