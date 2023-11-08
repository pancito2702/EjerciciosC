
#include<iostream>

using namespace std;

int main() {
	
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0; 	
	cout<<"Ingrese el numero: "<<endl;
	cin>>a;
	
	
	cout<<"Ingrese el numero: "<<endl;
	cin>>b;
	
	
	cout<<"Ingrese el numero: "<<endl;
	cin>>c;
	
	cout<<"Ingrese el numero: "<<endl;
	cin>>d;
	
	if (d == a || d == b || d == c) {
		cout<<"El numero coincide con alguno de los anteriores";
	} else {
		cout<<"El numero no coincide con alguno de los anteriores";
	}
	
	
	
	return 0;
}
