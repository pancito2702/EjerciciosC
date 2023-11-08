#include<iostream>
#include<conio.h>


using namespace std;

int main() {
	
	
	int matriz[3][3] = { {1,2,3}, {4,5,6}, {7,8,9}};
	
	cout<<"Matriz completa: ";
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout<<matriz[i][j]<<"---";
			
		}
		cout<<"\n";
	}
	

	
	
	cout<<"Diagonal principal: ";
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(i == j) {
				cout<<matriz[i][j]<<endl;	
			}
		}
	
	}
	
	
	
	getch();
	return 0;
}

