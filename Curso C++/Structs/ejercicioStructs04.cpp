
#include<iostream>
#include<conio.h>

using namespace std;




struct atleta{
    char nombre[20];
    char pais[20];
    int numero_medallas;
};




int main() {
    int cantidad = 0;
    int mayor;
    int posMayor;
    cout<<"Ingrese cantidad de atletas: ";
    cin>>cantidad;
    struct atleta atletas[cantidad];

    for (int i = 0; i < cantidad; i++) {
        fflush(stdin);
        cout<<"Ingrese nombre del atleta: "<<endl;
        cin.getline(atletas[i].nombre, 20, '\n');
        cout<<"Ingrese pais del atleta: "<<endl;
        cin.getline(atletas[i].pais, 20, '\n');
        cout<<"Ingrese cantidad de medallas del atleta: "<<endl;
        cin>>atletas[i].numero_medallas;

        if (atletas[i].numero_medallas > mayor) {
            mayor = atletas[i].numero_medallas;
            posMayor = i;
        }
    }

    cout<<"Datos del atleta: "<<endl;
    cout<<"Nombre: "<<atletas[posMayor].nombre<<endl;
    cout<<"Pais: "<<atletas[posMayor].pais;
    return 0;
}