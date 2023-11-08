
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int aprobadosTodos = 0;
	int aprobadosUnico = 0;
	int aprobadosUltimo = 0;
	float nota = 0;
	float notaDos = 0;
	float notaFinal = 0;
	
	for(int alumno = 1; alumno <= 5; alumno++) {
		cout<<"Alumno #"<<alumno<<endl;
		cout<<"Ingrese la nota del 1 examen: "<<endl;
		cin>>nota;
		cout<<"Ingrese la nota del 2 exmaen: "<<endl;
		cin>>notaDos;
		cout<<"Ingrese la nota del 3 examen: "<<endl;
		cin>>notaFinal;
		if ( nota >= 70 && notaDos >= 70 && notaFinal >= 70) {
			aprobadosTodos++;
		}  
		if ( notaFinal >= 70 && notaDos < 70 && nota < 70) {
			aprobadosUltimo++;
		}
		if (nota >= 70 || notaDos >= 70 || notaFinal >= 70 ) {
			aprobadosUnico++;
		} 
	}
	cout<<"Total de alumnos que aprobaron todos los examenes: "<<aprobadosTodos<<endl;
	cout<<"Total de alumnos que aprobaron al menos un examen: "<<aprobadosUnico<<endl;
	cout<<"Total de alumnos que aprobaron unicamente el ultimo examen: "<<aprobadosUltimo<<endl;
	getch();
	
}
