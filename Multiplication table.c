#include<stdio.h>
 int main(){
 	int table_number, i;
 	
 	printf("Enter a table number: ");
 	scanf("%d", &table_number);
 	
 	for(i = 1 ; i <= 10 ; i++){
 		printf("%d * %d = %d\n", table_number , i , table_number * i);
	 }
	 
	 return 0;
 }