

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	
	int suma = 0;
	int cuadrado = 0;
	
	for (int i = 1; i <= 10; i++) {
		cuadrado = i * i;
		suma += cuadrado;
		cout<<"Resultado de la suma de cuadrados: "<<suma<<endl;
	}

	getch();
	
	return 0;
}
