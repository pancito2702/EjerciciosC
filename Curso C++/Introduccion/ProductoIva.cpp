/*2. Escribir un programa que de la entrada estandar 
lea el precio de un producto y muestra en la salida estandar 
el precio del producto al aplicarle el IVA*/


#include<iostream>



using namespace std;

int main() {
	float precioPro = 0;
	float iva = 0.14;
	float extra = 0;
	
	cout<<"Ingrese el precio del producto: ",cin>>precioPro;
	
	cout<<"\nPrecio del producto original: "<<precioPro<<endl;
	
	extra = precioPro * iva;
	
	cout<<"Precio del producto con iva: "<<precioPro+extra;
	
	
	
	
}

