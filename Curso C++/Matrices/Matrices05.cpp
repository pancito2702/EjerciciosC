

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	
	int matriz[3][3];
	int matriz2[3][3];
	
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<"Ingrese numero: ";
			cin>>matriz[i][j];
		}
	}
	
	cout<<"Matriz Original"<<endl;	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			matriz2[i][j] = matriz[j][i];
		}
		
	}
	
	
	cout<<"Matriz Transpuesta: "<<endl;	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}
