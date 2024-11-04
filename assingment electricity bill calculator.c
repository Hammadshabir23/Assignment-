#include<stdio.h>
   int main(){
   	int units;
   	
   	printf("ENTER UNITS: ");
   	scanf("%d",&units);
   	
   	if(units <= 100){
   	printf("NO CHARGE: ");
}
    else if(units >= 101 && units <= 200){
    printf("5 RUPEES PER UNIT AND TOTAL AMOUNT IS %d",units*5);	
}
	else if(units >= 201 && units < 300){
	printf("8 RUPEES PER UNIT AND TOTAL AMOUNT IS %d",units*8);	
}
    else if(units >= 300){
    printf("10 RUPEES PER UNIT AND TOTAL AMOUNT IS %d",units*10);	
}

	
    return 0;	
	
 }