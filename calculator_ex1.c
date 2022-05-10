#include<stdio.h> //libraries
#include <math.h>

float firstNumber; //variable del primer numero
float secondNumber; //variable del segundo numero
float suma;
float resta;
float multiplication;
float division;


int main (){ //main function
	printf("Introduzca el valor del primer numero \n");
	scanf ("%f", &firstNumber);
	
	printf("Introduzca el valor del segundo numero \n");
	scanf ("%f", &secondNumber);
	
	
	suma = firstNumber + secondNumber; //operacion de suma
	printf("El resultado de la suma es: %f \n", suma);
	
	resta = firstNumber - secondNumber; //operacion de resta
	printf("El resultado de la resta es: %f \n", resta);
	
	multiplication = firstNumber * secondNumber; //operacion de multipicacion
	printf("El resultado de la multiplicacion es: %f \n", multiplication);
	
	division = firstNumber / secondNumber; //operacion de division
	printf("El resultado de la division es: %f \n", division);
	
	
	return 0;
}
