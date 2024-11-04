#include<stdio.h>
 int main(){
 	int age;
 	char serious_illness;
 	
 	printf("ENTER YOU AGE: ");
 	scanf("%d", &age);
 	
 	if(age < 18){
 		printf("NOT ELIGIBLE. YOU MUST BE 18 YEARS OLD.\n ");
	 } 
	  else if(age > 45){
	  	printf("HAD ANY SERIOUS ILLNESS? (Y/N): ");
	  	scanf("%s", &serious_illness);
	  if(serious_illness == 'Y' || serious_illness == 'y')
	   printf("NOT ELIGIBLE. DUE TO SERIOUS ILLNESS.\n ");	
	 else{
	 	printf("ELIGIBLE.\n ");
	}
}   else{
	 	printf("ELIGIBLE FOR HEALTH INSURANCE.\n ");
	}
	
	return 0;
		  
 }