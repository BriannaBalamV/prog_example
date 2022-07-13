/* Con el programa visto en clase; completar el programa de la librería, para acceder a un libro, con tituto y autor;
 y guardar la información en un fichero (puede ser .dat o .txt). Mostrar la información del libro seleccionado en la terminal. */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <iostream>


using namespace std;
int main(){

	struct datos{
		char titulo[21];
		int anio;
		char autor[21];
		} libros[10];
		
	FILE* fichero;
	int i, numero=0;
	
	fichero = fopen("libros.dat", "wt");
	if(fichero == NULL){
		printf("No se pudo encontrar el archivo. \n");
	} else{
		cout<<"Ingrese los siguientes datos: \n";
		
		for(i=0; i<10; i++){
			
			cout<<"\n\a\t ****** Libro "<<i+1<<" ********\n";
		
			puts("\n Titulo: ");
			gets(libros[i].titulo);
			fprintf(fichero, "%s \n", libros[i].titulo);
			
			puts("\n Año de publicacion: ");
			scanf("%d", &libros[i].anio);
			getchar();
			fprintf(fichero, "%d \n", libros[i].anio);
			
			puts("\n Autor: ");
			gets(libros[i].autor);	
			fprintf(fichero, "%s \n", libros[i].autor);	
		}
					
	}
			fclose(fichero);
			
		//Leer o accesar datos
		
			fichero =fopen("libros.dat", "rt");//Reading the file
			if(fichero == NULL){
				printf("No se pudo abrir el archivo \n");
			} else {
				do{
					puts("\n \n Digite el numero del libro que desea encontrar: \n""(Para salir, digite 0).");
					scanf("%d", &numero);
					
					for(i=0; i<numero; i++){ //Mostrar los datos de la persona ubicada por su numero
						if(i==(numero-1)){
							cout<<"Nombre: "<<libros[i].titulo<<endl<<"Edad: "<<libros[i].anio<<endl<<"Ciudad de residencia: "<<libros[i].autor<<endl;
							getchar();
						}
					}
				} while(numero !=0);
				
				fclose(fichero);				
			}
		return 0;
	
	fichero = fopen("libros.dat", "rt");
	if (fichero == NULL){
		printf("\n No se pudeo abrir el archivo. \n");
	}else{
		while(!feof(fichero)){ //mientras exista el fichero se va realizar lo que hay en el while
			fgets(libros[i].titulo, 60, fichero);			
			puts(libros[i].titulo);
			
			fscanf(fichero, "%d", &libros[i].anio);
			getchar();
			printf("%d", libros[i].anio);
			
			fgets(libros[i].autor, 60, fichero);
			puts(libros[i].autor);			
		}
		fclose(fichero);
	}
	return 0;
}
