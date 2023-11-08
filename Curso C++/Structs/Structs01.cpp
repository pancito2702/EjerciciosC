
#include <iostream>
#include <conio.h>

using namespace std;

struct persona {
    char nombre[20];
    int edad;
}

persona1 = {"Alejandro", 20},
persona2 = {"Ruperto", 15};

int main() {
    cout<<"Nombre 1: "<<persona1.nombre<<" Edad 1: "<<persona1.edad<<endl;
    cout<<"Nombre 2: "<<persona2.nombre<<" Edad 2: "<<persona2.edad<<endl;


    getch();
    return 0;
}