#include<stdio.h>
void max();

int main(){
	max();
}

 void max(){
 	int num1 , num2;
 	
 	printf("Enter Number 1: ");
 	scanf("%d", &num1);
 	printf("Enter Number 2: ");
 	scanf("%d", &num2);
 	
 	if(num1 > num2){
 		printf("%d is larger number.\n", num1);
	 }
	 else{
	 	printf("%d is larger number.\n", num2);	 	
	 }
	 
 }