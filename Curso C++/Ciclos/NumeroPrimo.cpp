
#include<iostream>


using namespace std;

int main() {
	
	for (int i = 1; i <= 100; i++) {
		int j = 2;
		bool esPrimo = true;

		while (j < i && esPrimo != false) {
			int residuo = i % j;
			if (residuo == 0) {
				esPrimo = false;
				cout<<"El numero: "<<i<<" no es primo"<<endl;
			}
			j++;
		}
		if (esPrimo == true) {
			cout<<"El numero: "<<i<<" es primo"<<endl;
		}	
	}
	return 0; 
}

