#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char nombre[10];

    cout<<"Digite su nombre: ";
    cin.getline(nombre, 10, '\n');

    strupr(nombre);

    if (nombre[0] == 'A') {
        strlwr(nombre);
        cout<<"Su nombre empieza con la letra A por lo que se convertira a minuscula: "<<nombre;
    } else {
        cout<<"Su nombre no cambia a minuscula: "<<nombre;
    }


    return 0;
}