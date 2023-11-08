
#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	
	int matriz[3][3] =  {{1,2,3}, {4,5,6}, {7,8,9}};
	int matriz2[3][3] =  {{1,2,5}, {4,5,6}, {7,8,9}};
	
	cout<<"Mostrando las 2 matrices"<<endl;
	
	cout<<"Matriz 1"<<endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<matriz[i][j] << " ";
		}
		cout<<"\n";
	}
	
	
	cout<<"Matriz 2"<<endl;	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<matriz2[i][j] << " ";
		}
		cout<<"\n";
	}
	
	cout<<"La suma de las dos matrices es: "<<endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<matriz[i][j] + matriz2[i][j] << " ";
		}
		cout<<"\n";
	}
	
	
	
	
	
	
	getch();
	return 0;
}
