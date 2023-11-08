#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char palabra[] = "hola";

    strupr(palabra);

    cout<<"Palabra en mayuscula: "<<palabra;



    getch();
    return 0;
}