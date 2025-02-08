#include<stdio.h>
float internetPackagecost(int GB, int choice){
   float cost;
    if(choice == 1){
       cost = GB * 100;    // zong
	} else if(choice == 2){ 
	   cost = GB * 120;   // jazz
    } else if(choice == 3){
	   cost = GB * 90;   // telenor
    } else{
	   cost = 0;  // invalid 
    }
      return cost;
}


int main(){
int GB, choice;

printf("Enter GB that you want: ");
scanf("%d", &GB);

printf("Select network:\n");
printf("1. Zong\n");
printf("2. Jazz\n");
printf("3. Telenor\n");
scanf("%d", &choice);

float cost = internetPackagecost(GB, choice);

  if(cost != 0){
     printf("Internet package cost: %.0f PKR\n", cost);
   } else{
    printf("Invalid choice\n");
   }
     return 0;
}