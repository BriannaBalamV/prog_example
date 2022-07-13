/* Puneros/Pointers
Un puntero es una variable que almacena la dirección de una memoreia de un objetos.
Sirven para:
-Asignar nuevos objetos en un array
-Pasar funciones a otras funciones
-Iterar los elements de matrices y estructuras de datos
*/
#include <iostream>

using namespace std;

int main(){
	/*int variable; //Crea un entero
	
	int * apuntador = &variable; //Crea un apuntador/pointer en la dirección de variable
	
	*apuntador = 20; //Se le asigna un valor a esa posicion de memoria	
	
	delete[] apuntador;//Depues de operar con puntos es necesario liberar la memoria
	
	apuntador = NULL; //el puntero ahora va a tener un valor de NULL*/
	
/*-----------------------------------------------------------------------------------*/	

	char *apuntador = NULL; //Se declara el puntero
	//Es recomendable iniciar el puntero en NULL, para detectar errores con facilidad
	
	char letra; //declaramos una variable
	
	apunador = &letra //le asignamos el apuntador a la dirección de memoria
	
	*apuntador = 'X'; //Se modifica y se usa la estructura del apuntador
	
	cout<<letra; //Muestra X por pantalla
}
