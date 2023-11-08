
#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	
	float mayor = 0;
    float promedio = 0;
    float menor = 9999999999;
    float temperatura = 0;

	
	for (int i = 0; i < 24; i = i + 4 ) {
		cout<<"Ingrse la tempetarua numero: "<<i<<" del dia: "<<endl;
		cin>>temperatura;
		if (temperatura > mayor) {
			mayor = temperatura;
		}
		if (temperatura < menor) {
			menor = temperatura;
		}
		promedio += temperatura;
	}
	
	promedio /= 6;
	 
	cout<<"Temperatura Mayor: "<<mayor<<endl;
	cout<<"Temperatura Menor: "<<menor<<endl;
	cout<<"Promedio de Temperaturas: "<<promedio<<endl;
	getch();
	return 0;

}
	
	


