#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	
	string * titulo = NULL; //se inicializa el puntero en NULL
	string* autores = NULL; //se inicializa el puntero en NULL
	
	int size; //inicializar la variable
	
	cout<<"¿Cuantos libros desea ingresar? \n";
	
	string entrada; // se decalara la variable de entrada
	
	getline(cin, entrada);//se asigna el valor ingresado
	
	size = stoi(entrada); //transformar la entrada "string" a "entero"
	
	//Declarar un arreglo del tamaño ingresado para los titulos
	titulo = new string [size];
	
	//Declarar un arreglo del tamaño ingresado para los autores
	autores = new string[size];
	
	cout<<"\n Ingrese la siguiente informacón de los libros: \n";
	for(int i=0; i<size; i++){
		cout<<"\n**** Libro"<<i+1<<"****\n";
		cout<<"\n Titulo: \n";
		getline(cin, titulo[i]);
		
		cout<<"Autores: \n";
		getline(cin, autores[i]);
	}
	
	
	//Liberar memoria de ambos punteros
	
	delete[] titulo;
	delete[] autores;
	
	titulo = NULL;
	autores = NULL;
	
	system("pause");
	
	return 0;
}
