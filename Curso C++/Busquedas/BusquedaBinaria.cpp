
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

    int arreglo[] = {1,2,3,4,5};

    int inf,sup,mitad,dato;

    char band = 'F';

    dato = 5;

    //Algoritmo de la busqueda binaria
    inf = 0;
    sup = 5;

    while (inf <= sup) {
        mitad = (inf+sup) / 2;

        if (arreglo[mitad] == dato) {
            band ='V';
            break;
        }

        if (arreglo[mitad] > dato) {
            sup = mitad;
            mitad = (inf + sup) /2;
        }

         if (arreglo[mitad] < dato) {
            inf = mitad;
            mitad = (inf + sup) /2;
        }

    }

    if (band =='V') {
        cout<<"El numero ha sido encontrado en la posicion: "<<mitad;
    } else {
        cout<<"El numero no se ha encontrado";
    }




    getch();
    return 0;
}