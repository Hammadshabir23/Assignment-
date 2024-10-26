#include<stdio.h>
   float calculatesimpleinterest(float principle,float rate,float time){
   	return(principle * rate * time)/100;
   }
   
   int main(){
   	float principle,rate,time;
   	
   	printf("ENTER PRINCIPLE AMOUNT: ");
   	scanf("%f",&principle);
   	
   	printf("ENTER INTEREST RATE (in %): ");
   	scanf("%f",&rate);
   	
   	printf("ENTER TIME PERIOD (in years): ");
   	scanf("%f",&time);
   	
   	 float simpleInterest = calculatesimpleinterest(principle,rate,time);
   	 float totalAmount    = principle + simpleInterest;
   	 
   	printf("principle Amount: $%.2f\n",principle);
   	printf("interest rate: $%.2f\n",rate);
   	printf("time period: $%.2f\n",time);
   	printf("simple interest: $%.2f\n",simpleInterest);
   	printf("total amount: $%.2f\n",totalAmount);
   	
   	return 0;
   	
   }