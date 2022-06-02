//Functions in C

#include<iostream>
#include <stdio.h>

using namespace std;

//función para encontrar el valor maximo entre 2 numeros
int max(int x, int y){ 
	if (x>y){
		return x;
	}else{
		return y;
	}
}

//main function that doesn't recieve any parameter and returns an integer
int main(){
	int a = 10, b = 20, c = 60;
	
		//calling the function
		int m = max(a,b);
		
		//printing the max value
		printf("The maximun value is %d\n", m);
		
		return 0;
}
