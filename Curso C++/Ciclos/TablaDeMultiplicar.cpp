

#include<iostream>
#include<conio.h>


using namespace std;

int main() {
	int num = 0;
	int resultado = 0;

	
	do{
		cout<<"Ingrese un numero: "<<endl;
		cin>>num;
		if ( (num  < 1) || (num > 10) ) {
			cout<<"Numero Incorrecto"<<endl;
		}
	} while( (num  < 1) || (num > 10) );  
	cout<<"Tabla de multiplicar del: "<<num<<endl;
	for (int i = 1; i <= 99; i++) {
		cout<<num<<" x "<<i<<"="<<num * i<<endl;
	}
	getch();
	
	
	
	
	return 0;
}
