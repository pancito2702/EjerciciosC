

#include<iostream>
#include<math.h>

using namespace std;


int main() {
	float cateto1,cateto2,hipotenusa;
	
	cout<<"Ingrese la medida del cateto 1: "<<endl; cin>>cateto1;
	cout<<"Ingrese la medida del cateto 2: "<<endl;	cin>>cateto2;
	

	
	hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));
	

	cout.precision(2);
	
	cout<<"La medida de la hipotenusa es igual a: "<<hipotenusa;
	
	
	
	
	
	
	
	
	
	return 0;
}
