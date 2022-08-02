#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <iostream>

using namespace std;

struct productData{
	string name[100];
	float price;
	int code;	
}products[100];

int i, j, read, registerQuantity, adminChoice, adminOption, mainChoice, clientChoice, productQuantity, productCode, differentProducts, repeat;
float productTotal, accountTotal=0, iva, grandTotal=0;

int mainMenu();
int clientMode();
void dataPetition();
int adminMode();
int cotization();
int productSearch();
int saling ();



	
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
			
			puts("\n Product name (for spaces use the underscore): \n");
			//read = getline(&products[i].name,stdin);
			scanf("%s", &products[i].name);//
			fprintf(fichero, "%s \n", products[i].name);
			
			puts("\n Price: \n");
			scanf("%f", &products[i].price);
			getchar();
			fprintf(fichero, "%f \n\n", products[i].price);		

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
		
	
	for(i=0; i<registerQuantity; i++){
		
		if(i+1 == productCode){ 
		
			cout<<"  "<<i+1<<"\t\t";
			printf(" %s \t\t\t", products[i].name);
			cout<<productQuantity<<"\t\t\t";
			cout<<products[i].price<<endl;
			
			cout<<"=======================================================================================" << endl;
		}
		
		if(i+1 == productCode){
			
			productTotal= productQuantity *products[i].price;
			
			cout<<" PRODUCT TOTAL                                                       \t"<<productTotal<<endl;
		}
		
	}
	
	accountTotal = productTotal+accountTotal ; 
}

int saling (){
	
	cout<<"\n=======================================================================================" << endl;
	
	cout<<"\n          \t\t\t\t\t\t\t SUBTOTAL:   "<<accountTotal<<endl;
	
	cout<<"=======================================================================================" << endl;
	
	iva = accountTotal*0.16;
	cout<<"\n      \t\t\t\t\t\t\t\t IVA:    "<<iva;
	
	grandTotal = accountTotal+iva;
	cout<<"\n  \t\t\t\t\t\t\t GRAND TOTAL:    "<<grandTotal;
            
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
			
			switch (repeat)
			{
			case 1:
				
				return cotization ();
				break;
				
			case 2 :
				
				saling();
				break;
			
			default :
				break;
			}
			
		}

int main(){
	
	mainMenu();
	
	return EXIT_SUCCESS;
}
