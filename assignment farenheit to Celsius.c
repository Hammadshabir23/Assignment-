#include<stdio.h>

int main (){
float frnhit,clsis;
printf("Enter your temperature in frnhit: \n");
scanf("%f",&frnhit);

clsis = (frnhit - 32) * 5/9;

printf("your temperature of %2f farenheit is equals to the %2f celsius.\n ",frnhit,clsis);

return 0 ;



}