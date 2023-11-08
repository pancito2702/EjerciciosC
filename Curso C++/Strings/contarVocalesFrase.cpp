#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char cad[50];
    int contadorA = 0;
    int contadorE = 0;
    int contadorI = 0;
    int contadorO = 0;
    int contadorU = 0;
    cout<<"Ingrese cadena: ";
    cin.getline(cad, 50, '\n');

    int numCara = strlen(cad);

    strlwr(cad);
    for (int i = 0; i < numCara; i++) {
        if (cad[i] == 'a') {
            contadorA++;
        }
        if (cad[i] == 'e') {
            contadorE++;
        }
        if (cad[i] == 'i') {
            contadorI++;
        }
        if (cad[i] == 'o') {
            contadorO++;
        }
        if (cad[i] == 'u') {
            contadorU++;
        }
    }

    
    cout<<"Total de vocales a en la cadena: "<<contadorA<<endl;
    cout<<"Total de vocales e en la cadena: "<<contadorE<<endl;
    cout<<"Total de vocales i en la cadena: "<<contadorI<<endl;
    cout<<"Total de vocales o en la cadena: "<<contadorO<<endl;
    cout<<"Total de vocales u en la cadena: "<<contadorU<<endl;
    return 0;
}