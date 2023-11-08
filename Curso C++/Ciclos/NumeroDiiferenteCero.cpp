


#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	
	int num = 0;
	int contador = 0;
	do {
	  cout<<"Ingrese un numero: "<<endl;
	  cin>>num;
	  if (num > 0) {

	  	contador++;
	  }
	} while (num != 0);
	

	cout<<"Numeros mayores que cero leidos: "<<contador;
	getch();
	return 0;
}




