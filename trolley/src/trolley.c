//Εργασία 0 Η Άσκηση με το trolley

#include<stdio.h>

int main(){  //Συνάρτηση main
long long int l,r,left, right;  // Δήλωση μεταβλητών

while(1){
//Ζήτησε και διάβασε το πρώτο κόστος
	printf("Please enter the cost of going left: \n");
	l=scanf("%lld",&left);
//Έλεγχος για το πρώτο κόστος
	if(l==EOF){
		printf("Terminating. \n");
		return 0;
	}
	else if (l!=1){
		printf("No right cost provided. \n");
		return 1;
	}	
			
//Ζήτησε και διάβασε το δεύτερο κόστος
        printf("Please enter the cost of going right: \n");
	r=scanf("%lld",&right);
//Έλεγχος για το δεύτερο κόστος
	if(r==EOF ){
               printf("Terminating.\n");
	       return 0;
	}
	else if (r!=1){
                printf("No right cost provided. \n");
return 1;
        }

// Τυπώνω την απόφαση με το μικρότερο κόστος
	if(left<=right)
                printf("Go left. \n");
        else
                printf("Go right. \n");
}
	}
                                  
