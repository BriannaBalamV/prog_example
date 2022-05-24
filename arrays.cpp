#include <iostream>

using namespace std;

int main(){
/*
//arrays 
 int array0[0];
 
 //array specific size
 int array1[10];
 
 int n = 10;
 int array2[n];
 
 //initialize arrays with specific values 
 int array[6] = {0,1,2,3,4,5};
 
*/

	int array[5]; //declaring array size (5 lugares)
	array[0]=5; // va a tener un valor de 5 el lugar 0 "5,_,_,_,_"
	array[2]=-10;// el lugar 2 va a tener un valor de -10  "_,-10,_,_,_"

	array[3 / 2]= 2;
	array[3] = array[0]; //"5,2,-10,5,_"

	cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3];
	

}

