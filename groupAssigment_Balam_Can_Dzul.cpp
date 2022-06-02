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
#include <ctime>
#include <cstdlib>

using namespace std;

int matrix [10][10];


void random_number(){
	srand(time(0)); //random number function
	
	for(int i=0; i<10;i++){
		for(int j=0; j<10; j++){
			matrix[i][j] = (rand()%200)+1;
		}
	}
	
	for(int i=0; i<10; i++){
		cout<<"\n\n";
		for(int j=0; j<10; j++){
			cout<<matrix[i][j]<<"\t";
		}
	}
	cout<<"\n\n";
}

void find_max(){
	int max = -1;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(matrix[i][j] > max){
				max = matrix[i][j];
			}
		}
	}
	cout<<"The number with the maximum value in the matrix is: "<<max<<endl;
}

void find_min(){
	int min= 200;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(matrix[i][j] < min){
				min = matrix[i][j];
			}
		}
	}
	cout<<"The number with the minimum value in the matriz is: "<<min<<"\n\n";
}

void most_repeated(){
	int maxFrequency = 0;
	int mostRepeated = 0;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			int frequency = 0;
			
			for(int m=0; m<10; m++){
				for(int n=0; n<10; n++){
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
	cout<<"The most repeated number is: "<<mostRepeated<<endl;
	cout<<"The frequency of the most repeated number is: "<<maxFrequency<<endl;
	
}

int main(){
	random_number();
	find_max();
	find_min();
	most_repeated();
	
	return 0;
}

