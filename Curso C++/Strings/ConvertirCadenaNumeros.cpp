#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {
    char cad[] = "123";
    int numero;
    char cad2[] = "123.45";
    float numero2;

    numero = atoi(cad);

    numero2 = atof(cad2);

    cout<<numero<<" "<<cad2;


    return 0;
}