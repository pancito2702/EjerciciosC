
#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int num = 0;
	
	cout<<"Digite un numero: ";
	cin>>num;
	
	for(int i = 2; num > 1; i++) {
		while(num % i == 0) {
			cout<<i<<" ";
			num /= i;
		}
	}
	
	system("pause");
	return 0;
}
