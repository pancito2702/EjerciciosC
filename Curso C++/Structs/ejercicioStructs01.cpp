
#include<iostream>
#include<conio.h>


using namespace std;

struct corredor{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}corredor1;



int main() {
    cout<<"Digite el nombre del corredor: ";
    cin.getline(corredor1.nombre, 20, '\n');
    cout<<"Digite la edad del corredor: ";
    cin>>corredor1.edad;
    fflush(stdin);
    cout<<"Digite el sexo del corredor M/F: ";
    cin.getline(corredor1.sexo, 10, '\n');
    cout<<"Digite el club del corredor: ";
    cin.getline(corredor1.club, 30, '\n');

    cout<<"\nNombre del corredor: "<<corredor1.nombre<<endl;
    cout<<"Edad del corredor: "<<corredor1.edad<<endl;
    cout<<"Sexo del corredor: "<<corredor1.sexo<<endl;
    cout<<"Club del corredor: "<<corredor1.club<<endl;

    if (corredor1.edad <= 18) {
        cout<<"Categoria Juvenil"<<endl;
    } else if (corredor1.edad <= 40) {
         cout<<"Categoria Señor"<<endl;
    } else if (corredor1.edad > 40) {
        cout<<"Categoria Veterano"<<endl;
    }

    return 0;
}