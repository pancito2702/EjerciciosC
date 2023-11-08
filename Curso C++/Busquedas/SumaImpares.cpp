
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int num = 0;
	int suma = 0;
	cout<<"Ingrese numero: "<<endl;
	cin>>num;
	
	
	for (int i = 1; i <= 2*num-1; i+=2) {
		suma += i;
	}
	
	cout<<"Total de la suma: "<<suma<<endl;
	
	
	getch();
	
	return 0;
}
