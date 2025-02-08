#include<stdio.h>
float convertcurrency(float amount, char currencytype, float exchangerate){
 if(currencytype == 'U' || currencytype == 'u' || currencytype == 'S' || currencytype == 's' || currencytype == 'A' || currencytype == 'a'){
    return amount * exchangerate;
   } else{
    return 0;
   }
}

int main(){
float amount, exchangerate;
char currencytype;

printf("Enter amount: ");
scanf("%f", &amount);

printf("Enter currency type (U for USD, S for SAR, A for AED): ");
scanf(" %c", &currencytype);

printf("Enter exchange rate: ");
scanf("%f", &exchangerate);

float convertedamount = convertcurrency(amount, currencytype, exchangerate);

 if(convertedamount != 0){
   printf("%.0f %c = %.0f PKR\n", amount, currencytype, convertedamount);
  } else{
    printf("Invalid currency type\n");
 }
   return 0;
}