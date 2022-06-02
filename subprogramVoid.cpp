//program to demonstrate void functions

#include <iostream>

using namespace std;

void work(){
	cout<<"The void function has retrned!"
			"a void() \n";
}

void fun(){
	return work();
}

int main(){
	fun(); //callling the void function
	return 0;
}
