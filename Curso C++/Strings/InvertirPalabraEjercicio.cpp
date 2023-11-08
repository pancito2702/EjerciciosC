
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char cadena[20];
    char cadena2[20];
    cout<<"Ingrese palabra: "<<endl;

    cin.getline(cadena, 20, '\n');

    strcpy(cadena2, cadena);
    strrev(cadena2);


    if (strcmp(cadena, cadena2) == 0) {
        cout<<"La palabra es polindroma"<<endl;
        cout<<cadena<<" es igual a: "<<cadena2;
    } else {
        cout<<"La palabra no es polindroma"<<endl;
        cout<<cadena<<" es diferente a: "<<cadena2;
    }

    return 0;
}