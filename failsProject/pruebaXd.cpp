#include <iostream>
#include <stdio.h>
#include <array>
#include<string.h>
#include<stdlib.h>

using namespace std;
//Declaration of the 2 arrays for the product's information
	//Product's names
	array<string, 15>productName = {
		"Dark chocolate brownie",
		"Chocolate cake",
		"Vainila cake",
		"Cheesecake",
		"Apple pie",
		"Blueberry muffins",
		"Chocolate fudge",
		"Red velvet cake",
		"Carrot cake",
		"Tiramisu cake",
		"Chocolate peanut butter cake",
		"Nutella strawberry cake",
		"Pistachio macron",
		"Rainbow cupcake",
		"Banana chocolate cupcake",		
	};
	
	//Product's prices
	array<double, 15>productPrice = {
		20.50,
		400, 
		400,
		350,
		250,
		15.50,
		10.50,
		450,
		380,
		450,
		480,
		450,
		20.50,
		18.50,
		18.50,			
	};
	
	double initialAmount = 1500.50; //Declaration of initial Amount
	float productTotal, cotizationTotal=0;
	float accountTotal = 0;
	int action, i, productQuantity, productCode, differentProducts; //Declaration of the int action that will be use for the switch-case function to store to store the action that the customer wants to perform 
	int amount, shoppingCart = 0; //La vdd no se como explicar este xd
	double total;
	int j;
	void manyProducts();
	int productSearch();
	void cotization();
	
	
int productSearch(){
	
	
	for(i=0; i<15; i++){
		
		
		if(i == productCode){
			
			cout<<"   "<<productCode<<"\t\t";
			cout<<productName[i]<<"\t\t\t";
			cout<<productQuantity<<"\t\t";
			cout<<productPrice[i]<<endl;
			
			cout<<"=======================================================================================" << endl;
		}
		
		
		
		if(i == productCode){
			
			productTotal= productQuantity * productPrice[i];
			
			cout<<" PRODUCT TOTAL                                                     "<<productTotal<<endl;
		}
		
	}
	
	accountTotal = productTotal + accountTotal;
					

}


int main(){	
	
	//Initialization of the menu
	cout<< "\n\a\t ****** Welcome to UPY bakery ****** \n"<<endl;
	cout<< "Our menu is: \n";
	for(int i=0; i<15; i++){					
		cout<<"\t CODE: "<<i<<"\t NAME: "<<productName[i]<<"\t PRICE: "<<productPrice[i]<<endl;				
	}
	
	
	do{
		
	cout<< "\n What do you want to do?"<<endl;
	cout<< " \a\t Press 1 for COTIZATION \n"<<"\a\t Press 2 for SALING \n"<<"\a\t Press 3 for EXIT \n\n";
	cin>>action;
	
	//Intialization of switch-case function
	switch (action){
		
		case 1:				
			
			cout<<"\n How many products do you want to quote? "<<endl;
			cin>>differentProducts;	
			
			for(j=0; j<differentProducts; j++){
			
	
				cout<<"\n Enter the code of the products that you want to quote: "<<endl;
				cin>>productCode;
				
				cout<<"\n How many pieces do you want? "<<endl;
				cin>>productQuantity;	 
				 
				 
				cout<<"=======================================================================================" << endl;
				cout<<"  CODE  "<<"             DESCRIPTION          "<<"        QUANTITY   "<<"      PRICE   "<<endl;
				cout<<"=======================================================================================" << endl;
				
				productSearch();
				
				cout<<"=======================================================================================" << endl;
			}
				
				cout<<"\n SUBTOTAL                                                          "<<accountTotal<<endl;
				
				cout<<"=======================================================================================" << endl;
						
	}
	
	/*switch (action){
			
		case 2:	

			
			}*/
			
	
	
	}while (action != 3);	
	
	return 0;
}
