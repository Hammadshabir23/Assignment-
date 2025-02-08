#include<stdio.h>
float calculateBill(int units){
    float bill ;
    
    if(units <= 100){
        bill = units * 18;
    } else{
        if(units <= 200){
		   bill = units * 22;
        }else{
            if(units <= 300){
                bill = units * 26;
            }else{
            	if(units <= 700){
				bill = units * 30;
				}else{
	            	if(units > 700){
					bill = units * 35;
				}
            }
        }
    }
}
     return bill;
}
 void main(){
 	int units;
    printf("Enter the units consumed: ");
    scanf("%d", &units);
	float bill = calculateBill(units);
	printf("Bill = Rs %.0f\n", bill);   
}