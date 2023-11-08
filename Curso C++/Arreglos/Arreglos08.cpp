
#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	
	int arreglo[5];
	int nuevo[5];
	
	for(int i = 0; i < 5; i++) {
		cout<<"Ingrese numero: ";
		cin>>arreglo[i];		
	}
	
	for(int i = 0; i < 5; i++) {
		nuevo[i] = 2 * arreglo[i];		
	}
	cout<<"Arreglo Multiplicado por Dos: "<<endl;
	for(int i = 0; i < 5; i++) {
		cout<<nuevo[i]<<endl;		
	}
	
	
	

}
