/* Linear Search, Buscar una variable dentro de un array*/
#include <stdio.h>
#include "findElement.h"

int main (){
	int arr[] = {3,8,3,4,7,9};//declaración de un array
	int n = 6; // número de elementos en el array
	int key = 8; //número que vamos a buscar
	
	findElement(arr, key, n);
}
