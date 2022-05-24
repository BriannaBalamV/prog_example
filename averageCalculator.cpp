/* calculate the first 3 notes of n students */
#include <iostream>

using namespace std;

int main (){
	int n, suma = 0, nota1, nota2, nota3;
	double promedio;
	
	cout<<"Enter the number of students: ";
	cin>>n;
	
	
	for(int i=0; i<n; i++){
		cout<<"student: "<<i+1<<endl;
		
		cout<<"Note1: ";
		cin>>nota1;
		
		cout<<"Note2: ";
		cin>>nota2;
		
		cout<<"Note3: ";
		cin>>nota3;


		suma = nota1 + nota2 + nota3;
		promedio = suma/3;
		
		cout<<"The average is: "<<promedio<<endl;
	}
	
}
