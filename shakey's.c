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






	
	
	
	

int quantityKo(){
		int n;
		p("quantity: ");
		s("%d",&n);
		return n;
}
	



int i = 0;
char choiceOrder;
void order(){
	menu();	
	}


int addCart(int counter, char item[], int quantity, int price){
		itemName[i] = item;
		itemQuantity[i] = quantity;
		itemPrice[i] = price;
		itemNameSize++;
		itemQuantitySize++;
		itemPriceSize++;
		counter++;
		return counter;
}





	

void menu(){
		do{
		
	system("cls");
	p("\t\tM E N U\n\n");
    p("[a] Roast Beef Pizza\t\tP674\n");
    p("[b] Hawaiian Delight Pizza\tP584\n");
    p("[c] Spinach Pizza\t\tP539\n");
    p("[d] Classic Cheese Pizza\tP449\n");
    p("[e] Carbonara\t\t\tP150\n");
    p("[f] Spaghetti\t\t\tP125\n");
    p("[g] Iced Tea\t\t\tP75\n");
    p("[h] Coke\t\t\tP80\n");
    p("[i] Lemon Tea\t\t\tP75\n");
    p("[j] Sprite\t\t\tP80\n");
    p("[k] Royal\t\t\tP80\n\n");
    p("[1] BACK\t[0] DONE\n\n");
    s("%c",&choiceOrder);
    choiceOrder = tolower(choiceOrder);//convert uppercase to lowercase
    int quantity;
	switch(choiceOrder){
		case 'a':
			quantity = quantityKo();
//			itemName[i] = "Roast Beef Pizza";
//			itemQuantity[i] = quantity;
//			itemPrice[i] = 674*quantity;
			i += addCart(i,"Roast Beef Pizza",quantity,674*quantity);
//			itemNameSize++;
//			itemQuantitySize++;
//			itemPriceSize++;
//			i++;
			menu();
			return;
		case 'b':
			quantity = quantityKo();
			i += addCart(i,"Hawaiian Delight Pizza",quantity,584*quantity);
//			itemName[i] = "Hawaiian Delight Pizza";
//			itemNameSize++;
//			itemQuantity[i] = quantity;
//			itemQuantitySize++;
//			itemPrice[i] = 584*quantity;
//			itemPriceSize++;
//			i++;
			menu();
			return;
			break;
		case 'c':
			quantity = quantityKo();
			i += addCart(i,"Spinach Pizza",quantity,539*quantity);
//			itemName[i] = "Spinach Pizza";
//			itemNameSize++;
//			itemQuantity[i] = quantity;
//			itemQuantitySize++;
//			itemPrice[i] = 539*quantity;
//			itemPriceSize++;
//			i++;
			menu();
			return;
			break;
		case 'd':
			quantity = quantityKo();
			i += addCart(i,"Classic Cheese Pizza",quantity,449*quantity);
//			itemName[i] = "Classic Cheese Pizza";
//			itemNameSize++;
//			itemQuantity[i] = quantity;
//			itemQuantitySize++;
//			itemPrice[i] = 449*quantity;
//			itemPriceSize++;
//			i++;
			menu();
			return;
			break;
		case 'e':
			quantity = quantityKo();
			i += addCart(i,"Carbonara",quantity,150*quantity);
//			itemName[i] = "Carbonara";
//			itemNameSize++;
//			itemQuantity[i] = quantity;
//			itemQuantitySize++;
//			itemPrice[i] = 150*quantity;
//			itemPriceSize++;
//			i++;
			menu();
			return;
			break;
		case 'f':
			quantity = quantityKo();
			i += addCart(i,"Spaghetti",quantity,125*quantity);
//			itemName[i] = "Spaghetti";
//			itemNameSize++;
//			itemQuantity[i] = quantity;
//			itemQuantitySize++;
//			itemPrice[i] = 125*quantity;
//			itemPriceSize++;
//			i++;
			menu();
			return;
			break;
		case 'g':
			quantity = quantityKo();
			i += addCart(i,"Iced Tea",quantity,80*quantity);
//			itemName[i] = "Iced Tea";
//			itemNameSize++;
//			itemQuantity[i] = quantity;
//			itemQuantitySize++;
//			itemPrice[i] = 80*quantity;
//			itemPriceSize++;
//			i++;
			menu();
			return;
			break;
		case 'h':
			quantity = quantityKo();
			i += addCart(i,"Coke",quantity,75*quantity);
//			itemName[i] = "Coke";
//			itemNameSize++;
//			itemQuantity[i] = quantity;
//			itemQuantitySize++;
//			itemPrice[i] = 75*quantity;
//			itemPriceSize++;
//			i++;
			menu();
			return;
			break;
		case 'i':
			quantity = quantityKo();
			i += addCart(i,"Lemon Tea",quantity,75*quantity);
//			itemName[i] = "Lemon Tea";
//			itemNameSize++;
//			itemQuantity[i] = quantity;
//			itemQuantitySize++;
//			itemPrice[i] = 75*quantity;
//			itemPriceSize++;
//			i++;
			menu();
			return;
			break;
		case 'j':
			quantity = quantityKo();
			i += addCart(i,"Sprite",quantity,80*quantity);
//			itemName[i] = "Sprite";
//			itemNameSize++;
//			itemQuantity[i] = quantity;
//			itemQuantitySize++;
//			itemPrice[i] = 80*quantity;
//			itemPriceSize++;
//			i++;
			menu();
			return;
			break;
		case 'k':
			quantity = quantityKo();
			i += addCart(i,"Royal",quantity,80*quantity);
//			itemName[i] = "Royal";
//			itemNameSize++;
//			itemQuantity[i] = quantity;
//			itemQuantitySize++;
//			itemPrice[i] = 80*quantity;
//			itemPriceSize++;
//			i++;
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