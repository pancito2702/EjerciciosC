

#include <iostream>
#include <conio.h>

using namespace std;


struct info_direccion {
    char direccion[30];
    char ciudad[30];
    char provincia[30];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_emp;
    double salario;
}empleados[2];

int main() {
    for (int i = 0; i < 2; i++) {
        fflush(stdin); //Vacia el buffer y permite digitar los valores
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre, 20, '\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_emp.direccion, 30, '\n');
        cout<<"Digite su ciudad: ";
        cin.getline(empleados[i].dir_emp.ciudad, 30, '\n');
        cout<<"Digite su provincia: ";
        cin.getline(empleados[i].dir_emp.provincia, 30, '\n');
        cout<<"Digite su salario: ";
        cin>>empleados[i].salario;
        cout<<"\n";
    }

    //Imprimiendo los datos
    for (int i = 0; i < 2; i++) {
        
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_emp.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_emp.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_emp.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
    }


    getch();
    return 0;
}