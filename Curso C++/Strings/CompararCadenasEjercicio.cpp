
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char palabra1[10];
    char palabra2[10];

    cout<<"Ingrese una palabra: ";

    cin.getline(palabra1, 10, '\n');

    cout<<"Ingrese otra palabra: ";

    cin.getline(palabra2, 10, '\n');

    if (strcmp(palabra1, palabra2) == 0) {
        cout<<"Ambas palabras son iguales";
    }

    if (strcmp(palabra1, palabra2) < 0) {
        cout<<palabra1<<" se encuentra antes en el alfabeto";
    } else if (strcmp(palabra2, palabra1) < 0) {
        cout<<palabra2<< " se encuentra antes en el alfabeto";
    }






    return 0;
}
