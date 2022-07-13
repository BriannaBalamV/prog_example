/* Ampliar el programa anterior para que sea un "array structs", de forma que se puedan tener los datos de 10 personas. Se debera pedir
al usuario las 10 personas y guardarlas, entonces debemos escoger entre 1 y 10 e imprimir su info. */

#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
	struct Persona{
		string nombre;
		int edad;
		string ciudad;
	};
	
	Persona gente[10]; 
	
	ofstream escribirFichero;
	escribirFichero.open("gente.dat");
	
	if(!escribirFichero.is_open()){
		cout << "Error al crear el archivo";
	}
	else{
		for(int i = 0; i < 10; i++){
			Persona persona = Persona();
			cout<<"\n\a\t ****** Persona "<<i+1<<" ********\n";
			cout << "\n Nombre: ";  
			getline(cin, persona.nombre);
			cout << "\n Edad: ";
			cin >> persona.edad;
			cout << "\n Ciudad de residencia: ";
			cin >> persona.ciudad;
			gente[i] = persona;
			escribirFichero <<gente[i].nombre<<endl<<gente[i].edad<<endl<<gente[i].ciudad<<endl<<endl;
			cin.ignore();
		}
		escribirFichero.close();
		for(int i = 0; i < 10; i++){
			cout<<gente[i].nombre<<" "<<gente[i].edad<<" "<<gente[i].ciudad<<endl;
		}
		cout<<endl;
	}
	
	ifstream leerFichero;
	string linea;
	leerFichero.open("gente.dat");
	if(!leerFichero.is_open()){
		cout <<"\n No se pudo abrir el fichero \n";
	}
	else{
		for(int i = 0; i < 10; i++){
			getline(leerFichero, linea);
			gente[i].nombre = linea;
			getline(leerFichero, linea);
			gente[i].edad = stoi(linea);
			getline(leerFichero, linea);
			gente[i].ciudad = linea;
			getline(leerFichero, linea);	
		}
		leerFichero.close();
		
		int buscarPersona;
		cout << "Escribe el numero de la persona que deseas buscar: ";
		cin >> buscarPersona;
		cout << gente[buscarPersona - 1].nombre << " " << gente[buscarPersona - 1].edad << " " << gente[buscarPersona - 1].ciudad << endl;
		
		for(int i = 0; i < 10; i++){
			cout<<gente[i].nombre <<" "<<gente[i].edad <<" "<<gente[i].ciudad<<endl;
		}
	}
	return 0;
}
