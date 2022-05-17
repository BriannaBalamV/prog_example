#include <iostream>
#include <stdio.h>

using namespace std;
int main (){
	int time;
	printf ("What time it is? \n");
    scanf ("%d", &time);
    
	if (time >=00&&time <= 11){
		printf ("Good morning \n");
	} 
	
	if (time ==12){
		printf("It's noon and you're dumb xd");
	} 
	
	if (time >= 13 && time <=18){

		printf("Good evening\n");
	}
		
	
	if (time >=19 && time <=23){
		printf("Good night \n");
	}
	
	if (time == 24 || time==00){
	printf("It's midnight, are u ok? \n");
	}
}
