#include<stdio.h>
 int main(){
 	int num , count = 0;
 	
 	printf("Enter an integer: ");
 	scanf("%d", &num);
 	
 	for(; num > 0 ; num /= 10){
 		count++;
	}
	
	printf("Number of digits is %d\n", count);
	
	return 0;
 }
