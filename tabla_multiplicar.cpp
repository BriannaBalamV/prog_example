/* Realice un programa que solicite de la entrada estandar de un número entero del 1 al 10 y muestre en la salida su tabla de multiplicar */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	int num;
	do{
		cout<<"Digite un numero: "; cin>>num;//variable "cin" es como scanf 
	}while((num<1)||(num>10));// || significan "or" (las 2 barras)
	
	for(int i=1; i<=20; i++){
		cout<<num<<"*"<<i<<"="<<num*i<<endl; //imprime el número (el escaneado), el signo *, el for (el número ingresado aumentado en 1), el signo =, la operación matemática (multiplicación)
	}
	
	cout<<"\n\n";
	system ("pause");
	
	return 0;
}
