
#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	
	char vocales[] = {'a','e','i','o','u'};
	char letras[] = {'f','g','h','i','j'};
	
	char nuevo[9];
	
	for (int i = 0; i < 5; i++) {
		nuevo[i] = vocales[i];
	}
		
	for (int i = 5; i < 10; i++) {
		nuevo[i] = letras[i-5];
	
	}
	
	for(int i = 0; i < 10; i++) {
		cout<<nuevo[i]<<endl;
		
	}

	getch();
	return 0;
}
