/* Group assigment: File handling
               Brianna Balam
               Javier Can
               Damaris Dzul */
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;
int i ;
int	columnas = 3;
int	filas;
string	entrada;
string	**punteroMatriz;
string	titulo;
string	autor;
string anio;
string	buscar;
string NombredelArchivo ;
ofstream archivo ;



void peticionDatos(){
	cout<<"Cuantos libros debe ingresar? \n";
	getline(cin, entrada); 	
	filas = stoi(entrada); 	
	punteroMatriz = new string *[filas];
	
	for(int i=0; i<filas; i++){
		punteroMatriz[i] = new string[columnas];
		
		cout<<"\n\a\t ** Libro "<<i+1<<" **\n";
		cout<<"Titulo: ";
		getline(cin,titulo);
		
		cout<<"Autor: ";
		getline(cin,autor);
		
		cout<<"Año: ";
		getline(cin,anio);
		
		punteroMatriz[i][0] = titulo;
		punteroMatriz[i][1] = autor;
		punteroMatriz[i][2] = anio;
	}
}

void busquedaLibro(string **punteroMatriz){
	int counter = 0;
	
	cout <<"\n\a\t ** Ingrese el titulo del libro que deseas encontrar ** \n";
	getline(cin, buscar);
	
	for( i=0; i<filas; i++){
		 titulo = punteroMatriz[i][0];
		 autor = punteroMatriz[i][1];
		 anio = punteroMatriz[i][2];
		 		
		if (strcasecmp(titulo.c_str(), buscar.c_str()) == 0){
			counter++;
			cout << "\n\a Libro encontrado: " <<titulo<< " de " <<autor<< " publicado en " <<anio<< "\n\n" << endl;
		}
	}
	if (counter == 0){
		cout << "\n\a Libro no encontrado \n\n" << endl;
	}
}

void eliminarDatos(string **punteroMatriz){
	for(int i=0; i<filas; i++){
		delete[] punteroMatriz[i];
	}
	delete[] punteroMatriz;
}

void ImprimirDatos (){
	ofstream archivo ;
cout << "\n\a Guardando los datos encontrados... \n";
cout << "\n\a\t ** Digite el nombre del archivo ** \n";
getline (cin, NombredelArchivo);

archivo.open(NombredelArchivo.c_str(),ios:: out ); //abriendo archivo //


if (archivo.fail())
{
    cout <<"\n\a Archivo no encontrado \n" ;
    exit (1);

}
		
archivo<<titulo<< " de " <<autor<< "publicado en " <<anio<<endl ;


archivo.close (); // cerrar el archivo 


}

int main(){
	peticionDatos();
	busquedaLibro(punteroMatriz);
	ImprimirDatos();
	eliminarDatos(punteroMatriz);
	return 0;
}
