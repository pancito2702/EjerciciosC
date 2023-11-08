

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	
	int num = 0;
	int par = 0;
	int sumaPares = 0;
	int sumaImpar = 0;
	
	int sumaTotal = 0;
	
	cout<<"Ingrese num: ";
	cin>>num;
	
	for (int i = 1; i <= num; i++) {
		if (i % 2 ==0) {
			par = i * -1;
			sumaPares += par;
		} else {
			sumaImpar += i;
		}
		
	}
	sumaTotal = sumaPares + sumaImpar;

	cout<<"Suma: "<<sumaTotal<<endl;
	
	
	return 0;
}
