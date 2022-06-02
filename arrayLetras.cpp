/* Relice in programa que defina los vectores de chars y despues almcene el contenido de ambos vectores en un nuevo vector,
situando en primer lugar los elementos los elementos del primer vector seguido por los elementos del segundo vector.

Muestre el contenido del nuevo vector en la salida estandar */
#include <iostream>
#include <stdio.h>
//#include<conio.h>

using namespace std;

int main(){
	char letras1[] = {'a','b','c','d','e','f'};
	char letras2[] = {'g','h','i','j','k','l'};
	char letras3[12] ;
	
	//Copying the elements of letras1 and letras2 almacenandolas en letras3
		for(int i=0; i<6; i++){
			letras3[i] = letras1[i];
		}
		
		for(int i=6; i<12; i++){
			letras3[i] = letras2[i-6];
		}
		
	//showing letras3 array
		for(int i=0; i<12; i++){
			cout<<letras3[i]<<endl;
		}
	//getch();
	return 0;
}
