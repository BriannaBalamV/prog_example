/* 
Realize a program that return a sum from a squence of integers using th gauss formula to sum n numbers
Ask the user enter the value of n
n(n+1)/(2) 1+2+3+4+5+6+7+n = */
#include <iostream>
#include <stdio.h>

using namespace std;

int gaussSum(int n){
	if(n>1){
		return n+ gaussSum(n-1);
	}else{
		return 1;
	}
}

int main(){
	int number, result;
		cout<<"Enter the number of elements: ";
	cin>>number;
	
	result = gaussSum(number);
	cout<<"The sum of "<<number<<" elements sequence is equal to "<<result<<endl;
	
	return 0;
}
