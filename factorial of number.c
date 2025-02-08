#include<stdio.h>
   int factorial(int n){
   	int fact = 1;
   	for(int i = 1 ; i <= n ; i++){
   		fact *= i;
	   }
	   
	   return fact;
}
   int main(){
   	int num;
   	
   	printf("Enter a integer: ");
   	scanf("%d", &num);
   	
   	if(num < 0){
   		printf("Error: Factorial is not defined for negative numbers.\n ");
	} else{
	   int result = factorial(num);
	   printf("Factorial of %d is %d\n", num , result);
	}
	
	return 0;
}