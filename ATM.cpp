#include <iostream>

using namespace std;

int main(){
	float balance = 1000;
//	int menu;
	int action;
	int amount;
	int subAction;
	
	cout<< "Welcome to your favorite bank \n"<<endl;
	cout<< "Your current balance is: \n"<<balance<<endl;
	cout<< "What do you want to do? \n"<<endl;
	cout<< "For Deposit press 1, for Withdrawal press 2"<<endl;
	cin>>action;
	
	switch (action){
		
		case 1:
			cout<<"Enter the amount to be deposited:"<<endl;
			cin>>amount;
			
			cout<<"Successful operation :) \n"<<endl;
			cout<<"Your current balance is: \n"<<1000+amount<<endl;
			
//			cout<<"Do you want to do another action? \n"<<endl;
			
			return 0;
	}

	switch (action){
			
		case 2:
			cout<<"Enter the amount to be withdraw"<<endl;
			cin>>amount;
			
			if(amount<=1000){
				cout<<"Your remaining balance is: \n"<<1000-amount<<endl;
			}else{
				cout<<"Insufficient balance :( \n"<<endl;
			}
			return 0;
	}
	
}
