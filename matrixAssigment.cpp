/* Make a program to fill a matrix asking to the user the number of rows and colums.
Then print the matrix in the terminal.
---------------------------------------------------------------------------
Then print the transpose of the pmatrix 
A matrix transpose if the colum i was the row in the original matirx

1 2 3         1 4 7 
4 5 6  --->   2 5 8
7 8 9         3 6 9 
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int numeros [100][100], filas, columnas;
	
	//Creating the matrix
	cout<<"Digite el numero de filas"<<endl;
	cin>>filas;
	
	cout<<"Digite el numero de columnas"<<endl;
	cin>>columnas;	
	
	//storing the elements of each component
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
				cin>>numeros[i][j];
			}
		cout<<"\n";
		}
		
	//Printing the original matrix
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<numeros[i][j];
		}
	
	cout<<"\n";
	}
	
	cout<<"\n\n";
	
	//Printing the transpose matrix
	for(int i=0; i<columnas; i++){
		for(int j=0; j<filas; j++){
			cout<<numeros[j][i];
		}
		
	cout<<"\n";
	}
	
	return 0;
}
