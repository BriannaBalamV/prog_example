/* Examen

Brianna Ayelen Balam Velasco

Escribir un programa que permita visuaizar el triangulo de pascal.
Este problema se debe resolver utilizando un arreglo de una sola dimensión utilizando una función recursiva
*/

#include <iostream>
#include <iomanip>


using namespace std;

int n,r, potencia;
int opcion = 0;

int factorial(int n){  //calcular el factorial recursivo: n!= n(n-1)
    if(n==1 || n==0){ //El resultado del factorial de 1 y 0 es igual a 1
        return 1;
    }else{
        return n * factorial(n-1); //Cuando sea mayor a 1 se ejecuta n!= n(n-1)
    }
}

int coeficiente(int n, int r){ /*obtener el coeficiente binomial  (_n_)= _____n!______
                                                                  ( k )   (n-k)!(k)!   */
    if(r==1){
        return n; //si r es igual 1 regresa el valor de n
    }else{
        if(n==r){
            return 1; //si n y r tienen el mismo valor regresa 1
        }else{
            return factorial(n) / (factorial(r) * factorial(n - r)); // realiza la operacion de coeficiente binomial
        }
    }
}

//Funcion principal para imprimir el triángulo de pascal
int main(){
	
	do{
		cout<<"Digite el numero de pontencias que desea imprimir: ";
		cin>>potencia;
		cout<<"\n";
		
		for(int i=0; i<=potencia; i++){ //fila en la que se esta
		
			for(int k=potencia-i; k>0; k--){ //espeaciado para que parezca una pirámide
					cout<<" ";
				}				
			for(int j=0; j<=i; j++){ //recorrido a través de los elementos de cada fila
			    
				cout<<coeficiente(i, j) << " "; //impresión del triángulo			    
		    }
		     cout << "\n\n";
		}
	    
	cout<< "Desea realizar otra potencia\n"; //bucle de programa para ejecutarlo n cantidad de veces 
	cout<< "\t Si = 1 \t No = 0\n";
	cin >> opcion;

 }while (opcion != 0);
	return 0;
  
}



