
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char cadena[] = "Hola que tal ";
    char nombre[20];
    char final[50];

    cout<<"Ingrese su nombre: ";
    cin.getline(nombre, 20, '\n');
    strcpy(final, cadena);
    strcat(final, nombre);

    cout<<final;
    

    return 0;
}