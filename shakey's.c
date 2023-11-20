 //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS 
  //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS 
   //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS 
    //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS 
     //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS 
      //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS 
       //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS 
        //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS //SHAKEYS 
        /*
		RAFAEL UMLAS
		GIDEON LIMOS
		CHRISTIAN ORBON
		JUSTIN BAILON
		ANDREI SIMON
		*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <stdbool.h>
#define p printf 
#define s scanf


int MyMoney = 10000;


//DYNAMIC ARRAYS FOR STORAGE OF DATA and ALTERNATIVE TO DATABASE
int itemNameSize;
int itemQuantitySize;
int itemPriceSize;

char** itemName;
int* itemQuantity;
int* itemPrice;
//DYNAMIC ARRAYS FOR STORAGE OF DATA and ALTERNATIVE TO DATABASE





int i = 0;
char choiceOrder;
void order(){
	menu();	
	}
	
	

	
	
bool lowMoney(int n){
	bool mahirap = true;
	if(MyMoney < n){
			system("cls");
			 p("NOT ENOUGH MONEY......\n");
			sleep(2);
			mahirap = true;
			}else{
			mahirap = false;
			}
		return mahirap;	
}
	
	
	
	

int toPay = 0;
void menu(){
		do{
		
	system("cls");
	p("\tO R D E R\n\n");
    p("[a] Roast Beef Pizza - P674\n");
    p("[b] Hawaiian Delight Pizza - P584\n");
    p("[c] Spinach Pizza - P539\n");
    p("[d] Classic Cheese Pizza - P449\n");
    p("[e] Carbonara - P150\n");
    p("[f] Spaghetti - P125\n");
    p("[g] Iced Tea - P75\n");
    p("[h] Coke - P80\n");
    p("[i] Lemon Tea - P75\n");
    p("[j] Sprite - P80\n");
    p("[k] Royal - P80\n\n");
    p("[1] BACK\t[0] DONE\n\n");
    s("%c",&choiceOrder);
    choiceOrder = tolower(choiceOrder);//convert uppercase to lowercase
    int quantity;
	switch(choiceOrder){
		case 'a':
			p("quantity: ");
			s("%d",&quantity);
			toPay+=674*quantity;
			if(lowMoney(toPay)){
			menu();
			return;
			}
			itemName[i] = "Roast Beef Pizza";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 674*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
		case 'b':
			p("quantity: ");
			s("%d",&quantity);
			itemName[i] = "Hawaiian Delight Pizza";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 584*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
			break;
		case 'c':
			p("quantity: ");
			s("%d",&quantity);
			itemName[i] = "Spinach Pizza";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 539*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
			break;
		case 'd':
			p("quantity: ");
			s("%d",&quantity);
			itemName[i] = "Classic Cheese Pizza";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 449*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
			break;
		case 'e':
			p("quantity: ");
			s("%d",&quantity);
			itemName[i] = "Carbonara";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 150*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
			break;
		case 'f':
			p("quantity: ");
			s("%d",&quantity);
			itemName[i] = "Spaghetti";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 125*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
			break;
		case 'g':
			p("quantity: ");
			s("%d",&quantity);
			itemName[i] = "Iced Tea";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 80*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
			break;
		case 'h':
			p("quantity: ");
			s("%d",&quantity);
			itemName[i] = "Coke";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 75*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
			break;
		case 'i':
			p("quantity: ");
			s("%d",&quantity);
			itemName[i] = "Lemon Tea";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 75*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
			break;
		case 'j':
			p("quantity: ");
			s("%d",&quantity);
			itemName[i] = "Sprite";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 80*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
			break;
		case 'k':
			p("quantity: ");
			s("%d",&quantity);
			itemName[i] = "Royal";
			itemNameSize++;
			itemQuantity[i] = quantity;
			itemQuantitySize++;
			itemPrice[i] = 80*quantity;
			itemPriceSize++;
			i++;
			menu();
			return;
			break;
		case '1':
			home();
			return;
			break;
		case '0':
			resibo();
			return;
			break;
		default:
			break;
			
	}
	}while(choiceOrder != '1' && choiceOrder != '0');	
}



char customerName[100],cashierName[100];
void intro(){
		system("cls");
		p("ENTER CUSTOMER NAME: ");
		gets(customerName);
		p("ENTER CASHIER NAME: ");
		gets(cashierName);
}






void resibo(){
	system("cls");
					p("\t\tR E C I E P T\n\n\n");
					p("\t\tCUSTOMER: %s\n\t\tCASHIER: %s\n\n\n",customerName,cashierName);
		p("%-30s%-10s%-15s\n\n\n\n", "ITEM","QUANTITY","PRICE");
 for (int i = 0; i < itemNameSize; ++i) {
        p("%-30s%-10d%-15d\n\n", itemName[i],itemQuantity[i],itemPrice[i]);
    }
    
    int total = 0;
 for(int i = 0; i<itemPriceSize;i++){
		total+=itemPrice[i];
}
		p("\n\n\t\tTOTAL: P%d\n",total);
}







void home(){
	system("cls");
    p("\tS H A K E Y ' S\n\n");
    p("[1] EXIT\t[0] ORDER\n\n");
    char choice;
    s("%c",&choice);
    choice = tolower(choice);//convert uppercase to lowercase
    switch(choice){
    case '0':
    	order();
    	return;
    	break;
    case '1':
    	myExit();
    	return;
    	break;
    default:
    	home();
    	return;
	}
}





void myExit(){
	system("cls");
    p("PROGRAM TERMINATED\n");
}
    
    
    
    
    
int main(){
//DYNAMIC ARRAYS FOR STORAGE OF DATA and ALTERNATIVE TO DATABASE
 itemNameSize = 0;
 itemQuantitySize = 0;
 itemPriceSize = 0;
 
 itemName = (char**)malloc(itemNameSize * sizeof(char*));
 itemQuantity = (int*)calloc(itemQuantitySize, sizeof(int));
 itemPrice = (int*)calloc(itemPriceSize, sizeof(int));
//DYNAMIC ARRAYS FOR STORAGE OF DATA and ALTERNATIVE TO DATABASE
	intro();
    home();
    	
    
		free(itemQuantity);
		free(itemPrice);
 		free(itemName);
 	return 0;
}