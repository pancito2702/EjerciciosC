
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct alumno{
    char nombre[20];
    int edad;
    float promedio;
}alumnos[3];


int main() {

    float mayor = 0;
    char nombre[20];
    int edad;
    float promedio;
    
    for (int i = 0; i < 3; i++) {
        fflush(stdin);
        cout<<"Ingrese nombre del alumno: ";
        cin.getline(alumnos[i].nombre, 20, '\n');
        cout<<"Ingrese edad: ";
        cin>>alumnos[i].edad;
        cout<<"Ingrese promedio: ";
        cin>>alumnos[i].promedio;

        if (alumnos[i].promedio > mayor) {
            mayor = alumnos[i].promedio;
            strcpy(nombre, alumnos[i].nombre);
            edad = alumnos[i].edad;
            promedio = alumnos[i].promedio;
        }
    }

    cout<<"Datos del alumnos con el mejor promedio: "<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Promedio: "<<promedio<<endl;

    getch();
    return 0;
}