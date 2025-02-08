#include<stdio.h>
  float calculate(float num1,float num2,char operator){
   switch (operator){
   
   case'+':
   	return num1 + num2;
   case'-':
   	return num1 - num2;
   case'*':
   	return num1 * num2;
   case'/':
    if(num2 != 0){
       return num1 / num2;
	}
	else{
	 printf("ERROR: DIVISION BY ZERO\n");
	}
	default:
     printf("ERROR: INVALID OPERATOR\n");
     return 0;
    }
} 

    int main(){
    	float num1,num2;
    	char operator;
    	
    	printf("ENTER FIRST NUMBER: ");
    	scanf("%f",&num1);
    	
    	printf("ENTER OPERATOR(+,-,*,/):\n");
    	scanf("%c",&operator);
    	
    	printf("ENTER SECOND NUMBER:");
    	scanf("%f",&num2);
    	
    	float result = calculate(num1,num2,operator);
    	printf("Result: %2f\n",result);
    	
    	
    	return 0;
	}