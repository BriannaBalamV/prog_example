/* Multidimensional arrays*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
		//Declare de matix
	
	int x[3][3][4] = { 
	{ {0,1,2,3},       {4,5,6,7},    {8,9,10,11} },
	{ {12,13,14,15}, {16,17,18,19}, {20,21,22,23} },
	{ {24,25,26,27}, {28,29,30,31}, {32,33,34,35} }
	};
	
	//Print each element of the matrix
	
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				for(int k=0; k<4; k++){
					cout<<"Elementos en x ["<<i<<"]["<<j<<"]["<<k<<"] = "<<x[i][j][k]<<endl;
				}
			}
		}
}
