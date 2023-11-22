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
#include <string.h>
#define p printf 
#define s scanf



//===========================================================	
//STORAGE OF DATA ALTERNATIVE TO DATABASE
char itemName[100000][100];
int itemQuantity[100000];
int itemPrice[100000];
//STORAGE OF DATA ALTERNATIVE TO DATABASE



//===========================================================	
//PROMPTS ITEM QUANTITY FROM USER
int promptQuantity(){
		int n;
		p("quantity: ");
		s("%d",&n);
		return n;
}




//===========================================================
//STORES DATA IN THE ARRAY
int addToCart(int myCounter, char myItem[], int myQuantity, int myPrice){
	strcpy(itemName[myCounter], myItem);
			itemQuantity[myCounter] = myQuantity;
			itemPrice[myCounter] = myPrice;				
			myCounter++;
			return myCounter;
}



int iCounter;
//===========================================================	
//EXECUTE MENU FUNCTION
char choiceOrder;
void order(){
	menu();	
	}
	
	
	void text(){
	system("cls");
	p("\tO R D E R\n\n");
    p( "%-30s%s\n",  "[a] Roast Beef Pizza",  "P 674");
    p( "%-30s%s\n",  "[b] Hawaiian Delight Pizza",  "P 584");
    p( "%-30s%s\n",  "[c] Spinach Pizza",  "P 539");
    p( "%-30s%s\n",  "[d] Classic Cheese Pizza",  "P 449");
    p( "%-30s%s\n",  "[e] Carbonara",  "P 150");
    p( "%-30s%s\n",  "[f] Spaghetti",  "P 125");
    p( "%-30s%s\n",  "[g] Iced Tea",  "P 75");
    p( "%-30s%s\n",  "[h] Coke",  "P 80");
    p( "%-30s%s\n",  "[i] Lemon Tea",  "P 75");
    p( "%-30s%s\n",  "[j] Sprite",  "P 80");
    p( "%-30s%s\n\n",  "[k] Royal",  "P 80");
    p( "[1] BACK\t[0] DONE\n\n");
	}
	
	void menu(){
	system("cls");
	text();
//	p("\tO R D E R\n\n");
//    p( "%-30s%s\n",  "[a] Roast Beef Pizza",  "P 674");
//    p( "%-30s%s\n",  "[b] Hawaiian Delight Pizza",  "P 584");
//    p( "%-30s%s\n",  "[c] Spinach Pizza",  "P 539");
//    p( "%-30s%s\n",  "[d] Classic Cheese Pizza",  "P 449");
//    p( "%-30s%s\n",  "[e] Carbonara",  "P 150");
//    p( "%-30s%s\n",  "[f] Spaghetti",  "P 125");
//    p( "%-30s%s\n",  "[g] Iced Tea",  "P 75");
//    p( "%-30s%s\n",  "[h] Coke",  "P 80");
//    p( "%-30s%s\n",  "[i] Lemon Tea",  "P 75");
//    p( "%-30s%s\n",  "[j] Sprite",  "P 80");
//    p( "%-30s%s\n\n",  "[k] Royal",  "P 80");
//    p( "[1] BACK\t[0] DONE\n\n");
    s("%c",&choiceOrder);
    choiceOrder = tolower(choiceOrder);//convert uppercase to lowercase
    int quantity;
	switch(choiceOrder){
//------------------------------------------------------------
		case 'a':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Roast Beef Pizza",quantity,674*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case 'b':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Hawaiian Delight Pizza",quantity,584*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case 'c':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Spinach Pizza",quantity,539*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case 'd':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Classic Cheese Pizza",quantity,449*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case 'e':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Carbonara",quantity,150*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case 'f':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Spaghetti",quantity,125*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case 'g':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Iced Tea",quantity,80*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case 'h':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Coke",quantity,75*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case 'i':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Lemon Tea",quantity,75*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case 'j':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Sprite",quantity,80*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case 'k':
			quantity = promptQuantity();
			iCounter = addToCart(iCounter,"Royal",quantity,80*quantity);
			menu();
			return;
//------------------------------------------------------------			
		case '1':
			home();
			return;
//------------------------------------------------------------			
		case '0':
			resibo();
			return;
//------------------------------------------------------------			
		default:
			menu();
			return;
			
	}
}



//===========================================================	
//CUSTOMER AND CASHIER NAME INPUT FUNCTION
char customerName[100],cashierName[100];
void intro(){
		system("cls");
		p("ENTER CUSTOMER NAME: ");
		gets(customerName);
		p("ENTER CASHIER NAME: ");
		gets(cashierName);
}






//===========================================================	
//PRINT RECEIPT FUNCTION
void resibo(){
	system("cls");
					p("\t\tR E C I E P T\n\n\n");
					p("\t\tCUSTOMER: %s\n\t\tCASHIER: %s\n\n\n",customerName,cashierName);
		p("%-30s%-10s%-15s\n\n\n\n", "ITEM","QUANTITY","PRICE");
 for (int i = 0; i < iCounter; ++i) {
        p("%-30s%-10d%-15d\n\n", itemName[i],itemQuantity[i],itemPrice[i]);
    }
    
    int total = 0;
 for(int i = 0; i<iCounter;i++){
		total+=itemPrice[i];
}

p("\n\n\t\tTOTAL: P %d\n\n\n\n\n",total);
}





//===========================================================	
//HOME FUNCTION
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






//===========================================================	
//EXIT FUNCTION
void myExit(){
	system("cls");
    p("PROGRAM TERMINATED\n");
}
    
    
    
    

    
//===========================================================	
//MAIN FUNCTION
int main(){
	
      intro();
  	 home();
  	 
    return 0;
}