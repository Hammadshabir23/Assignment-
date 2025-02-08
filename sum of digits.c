#include<stdio.h>
 int main(){
  int i, digit, sum=0;
  
  printf("Enter a digit: ");
  scanf("%d", &digit);
  
  for(i = 1 ; i <= digit ; i++){
  	printf("%d", i);
    sum += i;
  }
  
  printf("\nSum of digits is %d", sum);
  
 }