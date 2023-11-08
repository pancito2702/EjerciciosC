
#include<iostream>


using namespace std;


int main() {
	
	
	int num = 0;
	int factorial = 1;
	
	cout<<"Ingrese num: ";
	cin>>num;
	
	for (int i = num; i >= 1; i--) {
		factorial *= i;
		
	}
	
	cout<<"Factorial de: "<<num<<" = "<<factorial;
	
	
	
	return 0;
}
