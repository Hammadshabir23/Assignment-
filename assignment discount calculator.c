#include<stdio.h>
 float calculatediscount(float amount){
 	if(amount > 5000){
 		return amount * 0.20;
	 }
	else if(amount >= 3000 && amount <= 5000){
		return amount * 0.10;
	} 
	else{
		return 0;
	}
 }
 
    int main(){
    	float totalamount;
    	
    	printf("ENETER TOTAL SHOPPING AMOUNT:");
    	scanf("%f",&totalamount);
    	
    	float discount =calculatediscount(totalamount);
    	float finalamount =totalamount - discount;
    	
    	
    	printf("TOTAL AMOUNT: $%2f\n",totalamount);
    	printf("DISCOUNT: $%2f\n",discount);
    	printf("FINAL AMOUNT: $%2f\n",finalamount);
    	
    	return 0;
	}