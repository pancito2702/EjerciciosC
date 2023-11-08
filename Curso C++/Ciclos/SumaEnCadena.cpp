

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	
	int num = 0;
	int suma = 0;
	cout<<"Ingrese numero: ";
	cin>>num;
	
	for (int i = 1; i <= num; i++) {
		suma += i;
	}
	
	cout<<"Resultado de la suma: "<<suma<<endl;
	
	getch();
	
	return 0;
}
