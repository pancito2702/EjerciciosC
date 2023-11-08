

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int num = 0;
	int intentos = 0;
	int numMagico=1+rand()%(101-1);

	
	do {
	  cout<<"Ingrese el numero en rango[1-100]: "<<endl;
	  cin>>num;
	  if (num > 100 || num < 1) {
	  	cout<<"Numero no permitido"<<endl;
	  } else {
	  	if (num > numMagico) {
	  		cout<<"El numero magico es menor"<<endl;
	  	}
	  	if (num < numMagico) {
	  		cout<<"El numero magico es mayor"<<endl;
	  	}
	  	intentos++;
	  }
	} while (num != numMagico);
	
	cout<<"Numero magico: "<<numMagico<<endl;
	cout<<"Total de intentos: "<<intentos;
	cout<<"\n";
	system("pause");
}
