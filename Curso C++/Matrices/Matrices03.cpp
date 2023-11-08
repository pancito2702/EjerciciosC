#include<iostream>
#include<conio.h>


using namespace std;

int main() {
	
	
	int matriz[2][2];
	int nueva[2][2];
	
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout<<"Ingrese numero: ";
			cin>>matriz[i][j];
			
		}
	}
	
	
		
	cout<<"Matriz original: "<<endl;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout<<matriz[i][j]<<"  ";
			
		}
		cout<<"\n";
	}
	
	
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			 nueva[i][j] = matriz[i][j];
		}
	}
	
	cout<<"Matriz copiada: "<<endl;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout<<nueva[i][j]<<"  ";
			
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}

