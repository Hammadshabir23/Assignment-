#include<stdio.h>
  int main(){
 	int number_steps,total_steps = 0;
 	 int i;
 	  float average_steps;
 	
 	   printf("==================== DIGITAL STEP COUNTER =====================\n\n");
 	
 	// input for steps per hour 
 	for(i = 0 ; i < 24 ; i++ ){
     printf("ENTER STEPS FOR HOUR %d ",i+1);
	  scanf("%d", &number_steps);
	    total_steps += number_steps;  	
}   

     // calculate average steps
     average_steps = total_steps / 24;
      printf("\nTOTAL STEPS: %d\n", total_steps);
       printf("AVERAGE STEPS PER HOUR: %f\n", average_steps);
	   
	   
	   return 0;      
    

 }