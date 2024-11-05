//Εργασία 0 Η Άσκηση με το trolley

#include<stdio.h>

int main(){  //Συνάρτηση main
long int l,r,left, right;  // Δήλωση μεταβλητών

while(1){
//Έλεγχος για το πρώτο κόστος
		printf("Please enter the cost of going left: \n");
	if((l=scanf("%ld",&left)) !=1 || l==EOF){
		printf("Terminating.\n");
return 0;	
	}		
//Έλεγχος για το δεύτερο κόστος
        	printf("Please enter the cost of going right: \n");
	if((r=scanf("%ld",&right)) !=1 || r==EOF ){
                printf("No right cost provided. \n");
return 1;
        }

// Τυπώνω την απόφαση με το μικρότερο κόστος
	if(left<=right)
                printf("Go left. \n");
        else
                printf("Go right.\n");
}
	}
                                  
