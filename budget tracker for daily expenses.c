#include<stdio.h>
 int main(){
 	int spending, budget, total = 0;
 	
 	 printf("=============== BUDGET TRACKER FOR DAILY EXPENSES ===============\n\n");
 	 
 	 // input for daily budget limit 
 	  printf("ENTER DAILY BUDGET LIMIT FOR DAY: ");
 	   scanf("%d", &budget);
 	 
 	for (int i = 0 ; i < 7 ; i++){
 	 	printf("ENTER SPENDING FOR DAY %d: ",i + 1);
 	 	 scanf("%d", &spending);
 	      total += spending;
 	 
 	        if(spending > budget){
 	       	 printf("DAY %d: OVERSPENT\n",i + 1);
 	 }
}
	  
	        //  calculate average spending     
	           printf("\nTOTAL SPENDING: %d\n",total);
	            printf("AVERAGE SPENDING: %f\n",(float)total / 7);
	        
	        
	               return 0;
 }