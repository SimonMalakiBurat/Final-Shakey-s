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
#include <stdbool.h>
#include <string.h>
#include <time.h>
#define p printf 
#define s scanf





 
int myMoney;//INITIAL BALANCE


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
void loading(){
	system("cls");
	for(int i = 0; i<10; i++){
    usleep(100000);  
    printf(".");
    fflush(stdout);
}
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

char choiceOrder;
void order(){
	menu();	
	}
	
	
	//==========================================================
	//DYNAMIC DISPLAY OF CURRENT BALANCE
	void top(){
		p("\tO R D E R");
		p("\t\033[1mBALANCE: %d\033[0m\n\n",myMoney);
	}
	
	
	void text(){
	top();
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
	
	
	
	//===========================================================	
//CHECK IF MONEY IS LESS THAN PRICE OF ITEM, IF MONEY IS GREATER THAN PRICE, SUBTRACT
bool checkMoney(int money, int price){
	bool again;
	if(money < price){//IF MONEY IS LESS THAN PRICE
		p("\033[1mINSUFFICIENT BALANCE\033[0m\n");
		again = true;
	}else{
		myMoney-=price;//SUBTRACT CURRENT MONEY TO PRICE
	}
	return again;
}

	//===========================================================	
//FOR PREVIEWING OF ORDERED ITEMS
void previewOrderList(){
		system("cls");/*clears terminal*/
		p("%-30s%-10s%-15s\n\n\n\n", "ITEM","QUANTITY","PRICE");
 for (int i = 0; i < iCounter; ++i) {/*iterate everything inside my arrays*/
        p("%-30s%-10d%-15d\n\n", itemName[i],itemQuantity[i],itemPrice[i]);
    }
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
			a:
			quantity = promptQuantity();/*assign a value to quantity variable*/
			if(checkMoney(myMoney, 674*quantity))goto a;//WILL GO TO ASSIGNED LABEL IF MONEY IS LESS THAN PRICE, BASTA MAG LOLOOP
			iCounter = addToCart(iCounter,"Roast Beef Pizza",quantity,674*quantity);/*assign a value to iCounter*/
			previewOrderList();//PARA LANG MAKITA YUNG MGA INORDER
			sleep(2);//DELAY LANG ITO PARA MAANGAS
			menu();/*recursion*/
			return;
			
//------------------------------------------------------------			
		case 'b':
			b:
			quantity = promptQuantity();
			if(checkMoney(myMoney, 584*quantity))goto b;
			iCounter = addToCart(iCounter,"Hawaiian Delight Pizza",quantity,584*quantity);
			previewOrderList();
			sleep(2);
			menu();
			return;
//------------------------------------------------------------			
		case 'c':
			c:
			quantity = promptQuantity();
			if(checkMoney(myMoney, 539*quantity))goto c;
			iCounter = addToCart(iCounter,"Spinach Pizza",quantity,539*quantity);
			previewOrderList();
			sleep(2);
			menu();
			return;
//------------------------------------------------------------			
		case 'd':
			d:
			quantity = promptQuantity();
			if(checkMoney(myMoney, 449*quantity))goto d;
			iCounter = addToCart(iCounter,"Classic Cheese Pizza",quantity,449*quantity);
			previewOrderList();
			sleep(2);
			menu();
			return;
//------------------------------------------------------------			
		case 'e':
			e:
			quantity = promptQuantity();
			if(checkMoney(myMoney, 150*quantity))goto e;
			iCounter = addToCart(iCounter,"Carbonara",quantity,150*quantity);
			previewOrderList();
			sleep(2);
			menu();
			return;
//------------------------------------------------------------			
		case 'f':
			f:
			quantity = promptQuantity();
			if(checkMoney(myMoney, 125*quantity))goto f;
			iCounter = addToCart(iCounter,"Spaghetti",quantity,125*quantity);
			previewOrderList();
			sleep(2);
			menu();
			return;
//------------------------------------------------------------			
		case 'g':
			g:
			quantity = promptQuantity();
			if(checkMoney(myMoney, 80*quantity))goto g;
			iCounter = addToCart(iCounter,"Iced Tea",quantity,80*quantity);
			previewOrderList();
			sleep(2);
			menu();
			return;
//------------------------------------------------------------			
		case 'h':
			h:
			quantity = promptQuantity();
			if(checkMoney(myMoney, 75*quantity))goto h;
			iCounter = addToCart(iCounter,"Coke",quantity,75*quantity);
			previewOrderList();
			sleep(2);
			menu();
			return;
//------------------------------------------------------------			
		case 'i':
			i:
			quantity = promptQuantity();
			if(checkMoney(myMoney, 75*quantity))goto i;
			iCounter = addToCart(iCounter,"Lemon Tea",quantity,75*quantity);
			previewOrderList();
			sleep(2);
			menu();
			return;
//------------------------------------------------------------			
		case 'j':
			j:
			quantity = promptQuantity();
			if(checkMoney(myMoney, 80*quantity))goto j;
			iCounter = addToCart(iCounter,"Sprite",quantity,80*quantity);
			previewOrderList();
			sleep(2);
			menu();
			return;
//------------------------------------------------------------			
		case 'k':
			k:
			quantity = promptQuantity();
			if(checkMoney(myMoney, 80*quantity))goto k;
			iCounter = addToCart(iCounter,"Royal",quantity,80*quantity);
			previewOrderList();
			sleep(2);
			menu();
			return;
//------------------------------------------------------------			
		case '1':/*if user input 1, will execute home function*/
			home();
			return;
//------------------------------------------------------------			
		case '0':
			if(iCounter > 0){//this will execute if array is NOT empty
			resibo();/*calls resbio funtion*/
			return;
			}else{/*execute block of code if counter equals to 0*///this will execute if array IS empty
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
		loading();
		system("cls");/*clears terminal*/
		p("ENTER CUSTOMER NAME: ");
		gets(customerName);/*prompts user for customer name and store it in a variable*/
		p("ENTER CASHIER NAME: ");
		gets(cashierName);/*prompts user for cashier name and store it in a variable*/
}






//===========================================================	
//PRINT RECEIPT FUNCTION
void resibo(){
					loading();
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


p("\n\n%30s  %d\n","CASH:",10000);
p("%30s  %d\n","AMOUNT DUE:",total);
p("%30s  %d\n","CHANGE:",10000-total);
}




//===========================================================	
//HOME FUNCTION
void home(){
	loading();
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
	loading();
	system("cls");/*clears terminal*/
    p("PROGRAM TERMINATED\n");
}
    
    

    

    
//===========================================================	
//MAIN FUNCTION
int main(){
	
	srand(time(NULL));//SA TIME NA KA BASED ANG SEED PARA RANDOM TALAGA
	myMoney = rand() % (10000 - 5000 + 1) + 5000;//GENERATE RANDOM NUMBER BETWEEN 5K AND 10K
	
      intro();
  	 home();
  	 
    return 0;;
}