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
	strcpy(itemName[myCounter], myItem);//insert data into item array
			itemQuantity[myCounter] = myQuantity;//insert data into quantity array
			itemPrice[myCounter] = myPrice;	//insert data into price array			
			myCounter++;/*increment everytime menu function is looped, 
			used in condition of loop in resibo function*/
			return myCounter;
}



int iCounter = 0;
//===========================================================	
//EXECUTE MENU FUNCTION
char choiceOrder;
void order(){
	menu();	
	}
	
	
	
	
	void text(){
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
	system("cls");/*clears terminal*/
	text();/*call text function*/
    s("%c",&choiceOrder);
    choiceOrder = tolower(choiceOrder);//convert uppercase to lowercase
    int quantity;
	switch(choiceOrder){
//------------------------------------------------------------
		case 'a':
			quantity = promptQuantity();/*assign a value to quantity variable*/
			iCounter = addToCart(iCounter,"Roast Beef Pizza",quantity,674*quantity);/*assign a value to iCounter*/
			menu();/*recursion*/
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
		case '1':/*if user input 1, will execute home function*/
			home();
			return;
//------------------------------------------------------------			
		case '0':
			if(iCounter > 0){
			resibo();/*if user input 0, will execute resibo function*/
			return;
			}else{
			system("cls");
			char choice;
        	p("YOU DID NOT ORDER ANYTHING...\n\n");
        	p("ORDER AGAIN? (Y/N)\n\n");
        	s(" %c",&choice);
        	choice = tolower(choice);//convert uppercase to lowercase
        	switch(choice){
        	case 'y':
        		menu();
        		return;
        	case 'n':
        		myExit();
        		return;
			}
			}
			
//------------------------------------------------------------			
		default:
			menu();/*if user input not match in any cases, recursion*/
			return;
			
	}
}



//===========================================================	
//CUSTOMER AND CASHIER NAME INPUT FUNCTION
char customerName[100],cashierName[100];
void intro(){
		system("cls");/*clears terminal*/
		p("ENTER CUSTOMER NAME: ");
		gets(customerName);/*prompts user for customer name and store it in a variable*/
		p("ENTER CASHIER NAME: ");
		gets(cashierName);/*prompts user for cashier name and store it in a variable*/
}






//===========================================================	
//PRINT RECEIPT FUNCTION
void resibo(){
					system("cls");/*clears terminal*/
					p("\t\tR E C I E P T\n\n\n");
					p("\t\tCUSTOMER: %s\n\t\tCASHIER: %s\n\n\n",customerName,cashierName);
		p("%-30s%-10s%-15s\n\n\n\n", "ITEM","QUANTITY","PRICE");
 for (int i = 0; i < iCounter; ++i) {/*iterate everything inside my arrays*/
        p("%-30s%-10d%-15d\n\n", itemName[i],itemQuantity[i],itemPrice[i]);
    }
    
    int total = 0;
 for(int i = 0; i<iCounter;i++){/*iterate everthing inside itemPrice array add it's value to total variable*/
		total+=itemPrice[i];
}

p("\n\n\t\tTOTAL: P %d\n\n\n\n\n",total);
}




//===========================================================	
//HOME FUNCTION
void home(){
	//EMPTY THE ARRAY AND RESET COUNTER IF HOME FUNCTION IS CALLED
	for(int i = 0; i<iCounter;i++){
		strcpy(itemName[i], "");  
		itemQuantity[i] = 0;
		itemPrice[i] = 0;
		}
	iCounter = 0;
	//EMPTY THE ARRAY AND RESET COUNTER IF HOME FUNCTION IS CALLED
	
	system("cls");/*clears terminal*/
    p("\tS H A K E Y ' S\n\n");
    p("[1] EXIT\t[0] ORDER\n\n");
    char choice;
    s("%c",&choice);
    choice = tolower(choice);//convert uppercase to lowercase
    switch(choice){
    case '0':
    	order();/*execute order function*/
    	return;
    	break;
    case '1':
    	myExit();/*terminates the program*/
    	return;
    	break;
    default:
    	home();/*recursion*/
    	return;
	}
}






//===========================================================	
//EXIT FUNCTION
void myExit(){
	system("cls");/*clears terminal*/
    p("PROGRAM TERMINATED\n");
}
    
    
    
    

    
//===========================================================	
//MAIN FUNCTION
int main(){
	
      intro();
  	 home();
  	 
    return 0;
}