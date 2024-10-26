#include<stdio.h>
  int main(){
  	float num1,num2,num3;
  	
  	printf("ENTER FIRST NUMBER:");
  	scanf("%f",&num1);
  	
  	printf("ENETER SECOND NUMBER:");
  	scanf("%f",&num2);
  	
  	printf("ENTER THIRD NUMBER:");
  	scanf("%f",&num3);
  	
  	if(num1 >= num2 && num1 >= num3){
  		printf("%2f is the largest number.\n",num1);
	  }
	  else if(num2 >= num1 && num2 >= num3){
	  	printf("%2f is the largest number.\n",num2);
	  }
  	 else{
  	 	printf("%2f is the largest number.\n",num3);
	   }
	   
	  return 0;
	
  }