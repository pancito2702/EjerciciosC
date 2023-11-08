#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    int sumador = 0;

    //Suma de dobles for 
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
                sumador += i;
                sumador += j;
                cout<<sumador<<endl;
        }
    }


    return 0;
}