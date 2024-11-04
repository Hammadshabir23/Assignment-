#include<stdio.h>
 int main(){
 	int income;
 	char existing_loan, overdue;
 	
 	printf("ENTER MONTHLY INCOME: ");
 	scanf("%d", &income);
 	
 	if(income < 30000){
 	  printf("NOT ELIGIBLE. INCOME MUST BELOW 30000.\n ");
 }  else{
 	 printf("EXISTING LOAN? (Y/N): ");
 	 scanf("%s", &existing_loan);
 	 
 	 if(existing_loan == 'Y' || existing_loan == 'y'){
 	  printf("OVERDUE PAYMENTS? (Y/N): ");
 	  scanf("%s", &overdue);
 	  
 	  if(overdue == 'Y' || overdue == 'y'){
 	  	printf("NOT ELIGIBLE. DU TO OVERDUE PAYMENTS.\n ");
	} else{
		printf("ELIGIBLE FOR LOAN.\n ");
	}
 } else{
 	 printf("ELIGIBLE FOR LOAN.\n ");
  }
 }
   return 0;
   
}
 
 
   
