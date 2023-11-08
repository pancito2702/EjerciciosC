#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int arreglo[10];
    int i, j, aux;

    for (i = 0; i < 10; i++) {
        cout<<"Ingrese numero: "<<endl;
        cin>>arreglo[i];
    }   

    cout<<"Arreglo original: ";
    for (i = 0; i < 10; i++) {
        cout<<arreglo[i]<<" ";
    }


    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10-i; j++) {
            if (arreglo[j] > arreglo[j+1]) {
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        } 
    }
    cout<<"\n";
    cout<<"Arreglo Ordenado Ascendentemente: ";
    for (i = 0; i < 10; i++) {
        cout<<arreglo[i]<<" ";
    }




    return 0;
}