#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {
    char cad[10];
    char cad2[10];
    int num;
    float num2;
    float resul;

    cout<<"Ingrese cadena 1: ";
    cin.getline(cad, 10, '\n');
    
    cout<<"Ingrese cadena 2: ";
    cin.getline(cad2, 10, '\n');

    num = atoi(cad);
    num2 = atof(cad2);

    resul = num + num2;

    cout<<"Resultado de la suma de cadenas: "<<resul;
    return 0;
}