#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char cadena1[10];
    char cadena2[10];

    cout<<"Ingrese palabra: ";

    cin.getline(cadena1, 10, '\n');
    
    cout<<"Ingrese palabra: ";

    cin.getline(cadena2, 10, '\n');

    strupr(cadena1);
    strupr(cadena2);
    
    if (strcmp(cadena1, cadena2) == 0) {
        cout<<"Las palabras en mayuscula son iguales";
    } else {
        cout<<"Las palabras en mayuscula no son iguales";
    }



    return 0;
}