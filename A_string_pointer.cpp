/* Ejercicio para resolver el problema de la clase anterior (Matriz Dinámica)

Sentencia: Dado un stirng llamado "A string". Imprimir en la linea la letra del indice 0, el puntero ("Posición) y
la letra t, deshaciendo puntero a puntero.

Luego en otra linea imprimir el puntero (la dirección en memoria) y las letras "r" y "g" del string (usando un puntero).
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	char str[] = "A string";
	char *pc = str; //se declara el puntero y se le asigna el valor de la matriz
	
	cout<<str[0]<<' '<<*pc<<' '<<pc[3]<<"\n"; // se imprime la letra en la primera posición, la letra en la primera posicion del puntero, la letra teecera posicion
	
	pc+=2;//saltamos de 2 en 2 posiciones en el string
	cout<<*pc<<' '<<pc[2]<<' '<<pc[5];
	
}
