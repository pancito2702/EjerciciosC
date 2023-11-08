

#include <iostream>

using namespace std;



int main() {
	int num;
	
	
	cout<<"Ingrese el numero: "<<endl; cin>>num;
	
	if (num == 0) {
		cout<<"El numero es: "<<num;
	} else {
		if (num > 0) {
		cout<<"El numero: "<<num<<" es positivo";
		} else {
		cout<<"El numero: "<<num<<" es negativo";
		}
	
	}

	return 0;
}
