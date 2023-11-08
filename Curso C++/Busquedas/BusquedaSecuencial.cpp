#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int arreglo[] = {3,4,2,1,5};
    int i, dato;
    char band = 'F';

    i = 0;
    dato = 4;

    while ( (band == 'F') && (i < 5) ) {
        if (arreglo[i] == dato) {
            band = 'V';
        }
        i++;
    }

    if (band == 'F') {
        cout<<"El numero no se ha encontrado";
    } else if (band == 'V') {
        cout<<"El numero se ha encontrado en la posicion: "<<i-1;
    }



    getch();
    return 0;
}