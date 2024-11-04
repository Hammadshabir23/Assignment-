#include<stdio.h>
 int main(){
 	float income,tax;
 	
 printf("ENTER YOUR INCOME: ");
 scanf("%f", &income);
 
 if(income <= 250000){
 	tax = 00;
 }	
 else if( income <= 500000){
 	tax = (income - 250000) * 0.05;
 }
 else if(income < 1000000){
 	tax = 12500 + (income - 500000) * 0.10;
 }
 else{
 	tax = 37500 + (income - 1000000) * 0.15;
 }
 
 printf("TAX: RS. %.2f\n",tax);
 
 return 0;
  
 }