
/* GROUP ASSIGNMENT: 
Brianna Ayelen Balam Velasco
Jesús Javier Can Noh
Damaris Yuselin Dzul Uc	
Hacer un programa en C++ que rellene un array de 10 x 10
nnúmeros enteros aleatorios del 0 al 200, luego imprima
en pantalla y diga cual es el elemento mayor y cuantas
veces se repite.
[5] [5] [5] [5]
[1] [5] [9] [9]
[2] [3] [5] [5]
Se repite mas veces el numero: _5
El numero mayor es: _9
*/

#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std ;
int maxFrequency = 0;
int mostRepeated = 0 ;
int opcion = 0 ;




int  main () {
    int  w , z, y, i, j, max = 0, min = 10;
do
{
    

    
    
    cout << "numero de filas :\n";
    cin >> w;
    cout << "\n\n numero de columnas:\n ";
    cin >> z;
    cout << "rango de numeros\n";
    cin >> y;

    
    srand(time(0)); //Random number function//
    int matrix [w][z];

    for (  i = 0;  i <w; i++ ){
        cout<< "\n\n";
        for ( j = 0; j<z; j++) {
           int valor =  matrix [i][j] =  rand()%y; //random matrix //
            cout << "\t" << matrix [i][j];
            if (valor >  max) 
            {
                max = valor ;
                
            }
            if (valor < min)
            {
                 min = valor;
            }
            
        }
        cout << "\n\n";
        
    }
for(int i=0; i<w; i++){
		for(int j=0; j<z; j++){
			int frequency = 0;
			
			for(int m=0; m<w; m++){
				for(int n=0; n<z; n++){
					if(matrix[i][j] == matrix[m][n]){
						frequency++;
					}
				}
			}
			
			if(maxFrequency < frequency){
				maxFrequency = frequency;
				mostRepeated = matrix[i][j];
			}
			
		}
}
    cout << "el valor maximo es :"<< max << endl;
    cout << "el valor minimo es :"<< min<< endl;
    cout<<"The most repeated number is: "<<mostRepeated<<endl;
	cout<<"The frequency of the most repeated number is: "<<maxFrequency<<endl;
    cout<< "DESEA INGRESAR OTRA MATRIZ?\n";
    cout<< "\t SI = 1 \t No = 0\n";
    cin >> opcion;


} while (opcion != 0);
return 0;

}



