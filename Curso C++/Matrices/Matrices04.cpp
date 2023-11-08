	

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	
	srand(time(NULL));
	int a;
	int b;
	
	cout<<"Ingrese numero de filas: ";
	cin>>a;
	cout<<"Ingrese numero de columnas: ";
	cin>>b;
	
	
	int matriz[a][b];
	int nueva[a][b];
	
	
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			matriz[i][j] = rand();  
			
		}
	}
	
	
		
	cout<<"Matriz original: "<<endl;
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			cout<<matriz[i][j]<<"  ";
			
		}
		cout<<"\n";
	}
	
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			nueva[i][j] = matriz[i][j];  
			
		}
	}

	
	cout<<"Matriz copiadal: "<<endl;
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			cout<<nueva[i][j]<<"  ";
			
		}
		cout<<"\n";
	}
	
	system("pause");
	return 0;
}

