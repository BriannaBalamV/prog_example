/* Realice un programa que solicite de la entrada estandar de un n�mero entero del 1 al 10 y muestre en la salida su tabla de multiplicar */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int num;
	do{
		cout<<"Digite un numero: "; cin>>num;//variable "cin" es como scanf 
	}while((num<1)||(num>10));// || significan "or" (las 2 barras)
	
	for(int i=1; i<=20; i++){
		cout<<num<<"*"<<i<<"="<<num*i<<endl; //imprime el n�mero (el escaneado), el signo *, el for (el n�mero ingresado aumentado en 1), el signo =, la operaci�n matem�tica (multiplicaci�n)
	}
	
	cout<<"\n\n";
	system ("pause");
	
	return 0;
}
