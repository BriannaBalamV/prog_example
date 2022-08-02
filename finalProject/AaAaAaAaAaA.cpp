#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

using namespace std;

struct productData{
	string name[100];
	float price;
	int code;	
}products[100];

int i, j, read, registerQuantity, adminChoice, adminOption, mainChoice, clientChoice, productQuantity, productCode, differentProducts, repeat, paymentMethod, paymentAmount, secondChance;
float productTotal, accountTotal=0, iva, grandTotal=0, change, initialAmount = 1500.75, afterCashout, balance;
ofstream ticket;
ofstream quotation;

int mainMenu();
int clientMode();
void dataPetition();
int adminMode();
int cotization();
int productSearch();
int salingTicket();
int saling ();
int payment();
int cashout();


	
int mainMenu(){
	
	cout<< "\n\a\t ****** Welcome to Besties Shop ****** \n"<<endl;
	cout<<" Press 1 to Admin Mode"<<endl;
	cout<<" Press 2 to Client Mode \n"<<endl;
	
	cout<<" What do you want to do?"<<endl;
	cin>>mainChoice;
	
	if(mainChoice == 1){
		
		system ("cls");
		
		adminMode();
		
	}else if(mainChoice == 2){
		
		system ("cls");
		
		clientMode();
		
	}
}	

void dataPetition(){

	FILE* fichero;
	
	fichero = fopen("products.dat", "wt");
	if(fichero == NULL){
		printf("We cannot found the file \n");
	}else{
		cout<<" How many items do you want to enter:"<<endl;
		cin>>registerQuantity;
		
		cout<<"\n Enter the following data:"<<endl;
		
		for(i=0; i<registerQuantity; i++){
			
			cout<<"\n\a\t ****** Product "<<i+1<<" ********\n";
			
			cout<<" Code: "<<i+1<<endl;
			fprintf(fichero, "CODE: %d \n", i+1);
			
			puts("\n Product name (for spaces use the underscore): \n");
			scanf("%s", &products[i].name);
			fprintf(fichero, "NAME: %s \n", products[i].name);
			
			puts("\n Price: \n");
			scanf("%f", &products[i].price);
			getchar();
			fprintf(fichero, "PRICE: %f \n\n", products[i].price);		

		}
	}	
	fclose(fichero);
}

int adminMode(){
	
		cout<<"\n\t////////////////////////ADMIN MODE///////////////////////////////////"<<endl;
		
		cout<<"\n Press 1 to Enter items"<<endl;
		cout<<" Press 2 to Show list of products"<<endl;
		cout<<" Press 3 to Switch to Client Mode"<<endl;
		cout<<" Press 4 to Exit \n"<<endl;
		
		cout<<" What do you want to do?"<<endl;
		cin>>adminChoice;
		
		if(adminChoice == 1){
			
			system ("cls");
			
			dataPetition();
				
		}else if(adminChoice == 2){
			
			system ("cls");
			
			cout << "\n Currently there are "<< i<< " products\n";
			
			if(i>0){
				
				system ("cls");
				
				cout<<"\n The products that are in the list are: \n"<<endl;
			
				for(i=0; i<registerQuantity; i++){
					
					cout<<"\n\a\t ****** Product "<<i+1<<" ********\n";
					cout<<" Code: "<<i+1<<endl;
					printf(" Name: %s \n", products[i].name);
					cout<<" Price: "<<products[i].price<<endl;
				}
										
			}else if(i==0){
					
				cout<<"\n Please return to Admin Menu in order to regiser products"<<endl;
			}
	
								
		}else if(adminChoice == 3){
			
			system ("cls");
			
			clientMode();
			
		}else if(adminChoice == 4){
			
			return 0;
			
		}
		
		cout<<"\n Press 1 to Return to Admin Menu"<<endl;
		cout<<" Press 2 to Return to Main Menu"<<endl;
		cout<<" Press 3 to Switch to Client Mode"<<endl;
		cout<<" Press 4 to Exit \n"<<endl;
		
		cout<<" What do you want to do?"<<endl;
		cin>>adminOption;
		
		if(adminOption == 1){
			
			system ("cls");
			
			return adminMode();
			
		}else if(adminOption == 2){
			
			system ("cls");
			
			return mainMenu();
			
		}else if(adminOption == 3){
			
			system ("cls");
			
			clientMode();
			
		}else if(adminOption == 4){
			
			return 0;
			
		}
		
}

int productSearch(){
		
	
	FILE* quotation;
	
	quotation = fopen("quotation.dat", "wt");


	for(i=0; i<registerQuantity; i++){
			
		if(i+1 == productCode){ 
			
			cout<<"  "<<i+1<<"\t\t";
			fprintf(quotation, "CODE: %d ", i+1);
				
			printf(" %s \t\t\t", products[i].name);
			fprintf(quotation, " DESCRIPTION: %s ", products[i].name);
		
			cout<<productQuantity<<"\t\t\t";
			fprintf(quotation, " QUANTITY: %d ", productQuantity);
				
			cout<<products[i].price<<endl;
			fprintf(quotation, " PRICE: %f ", products[i].price);
				
			
			cout<<"=======================================================================================" << endl;
		}
		
		if(i+1 == productCode){
				
			productTotal= productQuantity*products[i].price;
				
			cout<<" PRODUCT TOTAL                                                       \t"<<productTotal<<endl;
			fprintf(quotation, " PRODUCT TOTAL: %f \n", productTotal);
		}
		
	}
		
	fclose(quotation);
	
	accountTotal = productTotal+accountTotal ; 
}



int saling(){
	
	cout <<"\n\t///////////////////////////////////////////////////////////////////////////////////\n"<<endl;
	
	cout<<"\t\t\t\t\t SUBOTOTAL:  "<<accountTotal<<endl;
	
	iva = accountTotal*0.16;
	cout<<"\t\t\t\t\t IVA: "<<iva<<endl;
	
	grandTotal = accountTotal+iva;
	cout<<"\t\t\t\t\t GRAND TOTAL: "<<grandTotal<<endl;
	
	cout <<"\n\t///////////////////////////////////////////////////////////////////////////////////\n"<<endl;
	
	cout<<"\n How would you like to pay?"<<endl;
	cout<<" Press 1 for CASH"<<endl;
	cout<<" Press 2 for CREDIT CARD"<<endl;
	cout<<" Press 3 for DEBIT CARD"<<endl;
	cin>>paymentMethod;
	
	if(paymentMethod == 1){
		
		cout<<"\n Enter the amount you are paying with:"<<endl;
			cin>>paymentAmount;
			
			if(paymentAmount < grandTotal){
				
				cout<<"\n Insufficient amount"<<endl;
				
				cout<<"\n Do you want to try again?"<<endl;	
				cout<<" Press 1 for YES"<<endl;
				cout<<" Press 2 for NO"<<endl;
				cin>>secondChance;
				
				if(secondChance == 1){
					
					saling();
					
				}else if(secondChance == 2){
					
					return 0;
				}	
				
				
			}else if(paymentAmount > grandTotal){
				
				change = paymentAmount - grandTotal;
				
				cout<<"\n Your change is "<<change;				
				cout<<"\n Wait a moment, we are printing your ticket \n"<<endl;
				
			}else if(paymentAmount > grandTotal){
				
				cout<<"\n Wait a moment, we are printing your ticket \n"<<endl;
				
			}
			
	}else if(paymentMethod == 2){
		
		cout<<"\n Succesfull payment"<<endl;
		cout<<"Wait a moment, we are printing your ticket \n"<<endl;
		
	}else if(paymentMethod == 3){
		
		cout<<"\n Succesfull payment"<<endl;
		cout<<"Wait a moment, we are printing your ticket \n"<<endl;
		
	}
	
}


int salingTicket(){
	
	ofstream ticket;
	ticket.open("ticket.txt", ios::out);
	
	cout<<"=======================================================================================" << endl;
	
	cout<<"\t\t\t\t\t SALING \t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t      BESTIES SHOP \t\t\t\t\t"<<endl;
	cout<<"\t\t\t Brianna Balam \t Javier Can \t Damaris Dzul \t"<<endl;
	
	cout<<"\n=======================================================================================" << endl;
	
	cout<<"\n \t\t\t\t SUBTOTAL:   "<<accountTotal<<endl;
	ticket<<"\n SUBTOTAL: "<<accountTotal;
	
	
	cout<<"=======================================================================================" << endl;
	
	cout<<"\n \t\t\t\t IVA:    "<<iva;
	ticket<<"\n IVA: "<<iva;
	
	cout<<"\n \t\t\t\t GRAND TOTAL:    "<<grandTotal;
	ticket<<"\n GRAND TOTAL: "<<grandTotal;
		
	
	ticket.close();
            
    cout<<"\n=======================================================================================" << endl;
	
	
}


int clientMode(){
	
	cout <<"\n\t////////////////////////WELCOME TO BESTIES SHOP///////////////////////////////////\n"<<endl;
	
	cout<<"Our list of articles is: \n";
	for(i=0; i<registerQuantity; i++){
					
		cout<<"\n\a\t\t\t ****** Product "<<i+1<<" ********\n";
		cout<<"\n\t\t\t\t Code: "<<i+1<<endl;
		printf("\t\t\t\t Name: %s \n", products[i].name);
		cout<<"\t\t\t\t Price: "<<products[i].price<<endl;
	}
	
	cout <<"\n\t///////////////////////////////////////////////////////////////////////////////////\n"<<endl;
	
	cout<<"\n Press 1 for Quotation"<<endl;		
	cout<<" Press 2 to Exit \n"<<endl;
	cout<<" *To make a sale first you have to make a quotation"<<endl;
	
	cout<<" What do you want to do?"<<endl;
	cin>>clientChoice;
	
	if(clientChoice == 1){
		
		cotization();		
	
	}else{return 0 ;}
	
}

int cotization(){
	
	cout<<"\n How many products do you want to quote? "<<endl;
	cin>>differentProducts;	
			
	for(j=0; j<differentProducts; j++){
			
		cout<<"\n Enter the code of the products that you want to quote: "<<endl;
		cin>>productCode;
			
		cout<<"\n How many pieces do you want? "<<endl;
		cin>>productQuantity;
			
		cout<<"=======================================================================================" << endl;
		cout<<"  CODE  "<<"\t DESCRIPTION \t\t"<<"\t QUANTITY \t"<<"\t PRICE \t"<<endl;
		cout<<"=======================================================================================" << endl;
        	
				
        productSearch();
            
        cout<<"=======================================================================================" << endl;
    }
        
	cout<<"\n          \t\t\t\t\t\t\t SUBTOTAL:   "<<accountTotal<<endl;
	cout<<"\n      \t\t\t\t\t\t *SUBTOTAL amount is without IVA"<<endl;
           
    cout<<"\n=======================================================================================" << endl;
            
	cout << "\n Do you want to add more products to your quotation?"<<endl;
			
	cout<<"\n Press 1 for Add more products"<<endl;
	cout<<" Press 2 for Saling"<<endl;
	cout<<" Press 3 for Exit"<<endl;
	cin >> repeat;
			
	switch (repeat){
			
		
		case 1:
				
		return cotization ();
		break;
				
		case 2 :
				
		saling();
		salingTicket();
		break;
				
			
		default :
		break;
	}
	
	cashout();
			
}


int cashout(){
	
	balance = initialAmount+grandTotal;
	afterCashout = balance-grandTotal;
	
	cout<<"\n\n\t////////////////////////ADMIN MODE///////////////////////////////////"<<endl;
	
	cout<<"\n The Initial Amount was "<<initialAmount<<endl;
	cout<<" The amount by now is "<<balance<<endl;
	
	cout <<"\n\t------------------------ CASHOUT ------------------------------------\n"<<endl;
	
	cout<<"\n The amount after the cashout is: "<<afterCashout<<endl;
}

	

int main(){
	
	mainMenu();
	
	return EXIT_SUCCESS;
}
