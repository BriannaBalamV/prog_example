#include <iostream>
#include <stdio.h>

using namespace std;

int function(int valor){
	valor = valor + 10; //se le suma 10
	return valor; 
}

int functionPunteros(int* valor){
	*valor = *valor + 10; // se le suma 10 a la posicion de memoria
	return *valor;
}

int main(){
	int numero = 10;
	cout<<"Antes de function: "<<numero<<"\n"; //imprime 10
	
	function(numero); //pasar variable numero por a function
	cout<<"Despues de function: "<<numero<<"\n";// imprime 10
	
	cout<<"Antes de functionPunteros: "<<numero<<"\n"; // imprime 10
	
	functionPunteros(&numero); //se envia la direccion de memoria y la funcion resuelve la referencia
	cout<<"Despues de funcionPuntero: "<<numero<<"\n"; //imprime 20
	
	system("pause");
	
	return 0;
	
}
