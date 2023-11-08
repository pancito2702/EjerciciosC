
#include<iostream>
#include<conio.h>

using namespace std;




struct empleado{
    char nombre[20];
    float salario;
};




int main() {

    int cantidad = 0;
    int posMayor;
    int posMenor;
    int mayor = 0;
    int menor = 999999999;
    cout<<"Ingrese cantidad de empleados: ";
    cin>>cantidad;
    struct empleado empleados[cantidad];

    for (int i = 0; i < cantidad; i++) {
        fflush(stdin);
        cout<<"Ingrese nombre del empleado: ";
        cin.getline(empleados[i].nombre, 20, '\n');
        cout<<"Ingrese salario del empleado: ";
        cin>>empleados[i].salario;

        if (empleados[i].salario > mayor) {
            mayor = empleados[i].salario;
            posMayor = i;
        }

        if (empleados[i].salario < menor) {
            menor = empleados[i].salario;
            posMenor = i;
        }
    }

    cout<<"Datos del empleado con mayor salario: "<<endl;
    cout<<"Nombre: "<<empleados[posMayor].nombre<<endl;
    cout<<"Salario: "<<empleados[posMayor].salario<<endl;

    cout<<"Datos del empleado con menor salario: "<<endl;
    cout<<"Nombre: "<<empleados[posMenor].nombre<<endl;
    cout<<"Salario: "<<empleados[posMenor].salario<<endl;


    return 0;
}