#include<stdio.h>
   int main(){
   	int percentage;
   	
    printf("ENTER YOUR PERCENTAGE: ");
   	scanf("%d",&percentage);
   	
   	 if(percentage >= 50){
   	 	if(percentage > 80){
   	 	printf("YOU ARE ELIGIBLE FOR ADMISSION AND ALSO FOR SCHOLARSHIP: ");		
	}  
	 else{
	 printf("YOU ARE ELIGIBLE FOR ADMISSION BUT NOT FOR SCHOLARSHIP: ");	
	 }
}
	 
     return 0;
	   	
}