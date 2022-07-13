/* Crear una structura que almacene los siguientes dattos de una persona:
-Nombre
-Edad
-Cuidad de residencia

Pedir al usuario esos datos de una persona y guardarlos en un fichero llamado "gente.dat". Cerrar el ficehro, volverlo a
 abrir para lectura y mostrar los datos que se habían guardado */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <iostream>


using namespace std;
int main(){

	struct datos{
		char nombre[21];
		int edad;
		char ciudad[21];
		} persona[10];
		
	FILE* fichero;
	int i, numero=0;
	
	fichero = fopen("gente.dat", "wt");
	if(fichero == NULL){
		printf("No se pudo encontrar el archivo. \n");
	} else{
		cout<<"Ingrese los siguientes datos: \n";
		
		for(i=0; i<10; i++){
			
			cout<<"\n\a\t ****** Persona "<<i+1<<" ********\n";
		
			puts("\n Nombre: ");
			gets(persona[i].nombre);
			fprintf(fichero, "%s \n", persona[i].nombre);
			
			puts("\n Edad: ");
			scanf("%d", &persona[i].edad);
			getchar();
			fprintf(fichero, "%d \n", persona[i].edad);
			
			puts("\n Ciudad de residencia: ");
			gets(persona[i].ciudad);
			//fputs(persona[i].ciudad, fichero);	
			fprintf(fichero, "%s \n", persona[i].ciudad);	
		}
					
	}
			fclose(fichero);
			
		//Leer o accesar datos
		
			fichero =fopen("gente.dat", "rt");//Reading the file
			if(fichero == NULL){
				printf("No se pudo abrir el archivo \n");
			} else {
				do{
					puts("\n \n Escriba el numero del fichero a leer: \n""(Para salir, digite 0).");
					scanf("%d", &numero);
					
					for(i=0; i<numero; i++){ //Mostrar los datos de la persona ubicada por su numero
						if(i==(numero-1)){
							cout<<"Nombre: "<<persona[i].nombre<<endl<<"Edad: "<<persona[i].edad<<endl<<"Ciudad de residencia: "<<persona[i].ciudad <<endl;
							getchar();
						}
					}
				} while(numero !=0);
				
				fclose(fichero);				
			}
		return 0;
	
	fichero = fopen("gente.dat", "rt");
	if (fichero == NULL){
		printf("\n No se pudeo abrir el archivo. \n");
	}else{
		while(!feof(fichero)){ //mientras exista el fichero se va realizar lo que hay en el while
			fgets(persona[i].nombre, 60, fichero);			
			puts(persona[i].nombre);
			
			fscanf(fichero, "%d", &persona[i].edad);
			getchar();
			printf("%d", persona[i].edad);
			
			fgets(persona[i].ciudad, 60, fichero);
			puts(persona[i].ciudad);			
		}
		fclose(fichero);
	}
	return 0;
}

/* Ampliar el programa anterior para que sea un "array structs", de forma que se puedan tener los datos de 10 personas. Se debera pedir
al usuario las 10 personas y guardarlas, entonces debemos escoger entre 1 y 10 e imprimir su info. */
