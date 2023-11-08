
#include<iostream>
#include<conio.h>

using namespace std;


int main() {
	
	int num = 0;
	int x = 0;
	int y = 1;
	int z = 1;
	
	cout<<"Ingrese numero: "<<endl;
	cin>>num;
	cout<<"1 ";
	for (int i = 1; i < num; i++) {
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z;	
	}
	
	
	getch();
	
	
	return 0;
}
