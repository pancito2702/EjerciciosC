


#include<iostream>


using namespace std;

int main() {
	int num1, num2;
	
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>num2;
	
	if (num1 == num2) {
		cout<<"Los numeros son iguales"<<endl;
	} else if (num1 > num2) {
		cout<<"El numero: "<<num1<<" es mayor";
	} else {
		cout<<"El numero: "<<num2<<" es mayor";
	}
	
	
	
	
	
	return 0;
}



