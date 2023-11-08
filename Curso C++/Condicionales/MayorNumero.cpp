

#include<iostream>;

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	
	cout<<"Introduzca el numero a: ";
	cin>>a;
	cout<<"Introduza el numero b: ";
	cin>>b;
	if (a > b) {
		cout<<"El numero: " <<a<< " es mayor que: "<<b;
	}
	if (b > a) {
		cout<<"El numero: " <<b<< " es mayor que: "<<a;
	}
	
	return 0;
}
