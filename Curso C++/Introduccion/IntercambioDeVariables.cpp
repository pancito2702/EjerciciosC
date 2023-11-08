
#include<iostream>

using namespace std;

int main() {
	int a,b,temp = 0;
	cout<<"Ingrese el valor de a: "<<endl; cin>>a;
	cout<<"Ingrese el valor de b: "<<endl; cin>>b;
	temp = a;
	a = b;
	b = temp;
	cout<<"Nuevo valor de a intercambiado con b: "<<a<<endl;
	cout<<"Nuevo valor de b intercambiado con a: "<<b<<endl;
	
	
	
	return 0;
}
