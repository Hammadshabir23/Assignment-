#include<stdio.h>
float calculateFare(int class, float distance){
    float fare;
   if(class = 1){
   	 fare = distance * 5;  // Economy
   } else if(class = 2){
   	 fare = distance * 10; // Business
   } else if(class = 3){
   	 fare = distance * 15; // First
   } else{
   	 fare = 0;   // Invalid class
   }
     return fare;
}


int main(){
    int class;
    float distance;

    printf("Enter class (1=Economy, 2=Business, 3=First): ");
    scanf("%d", &class);

    printf("Enter distance: ");
    scanf("%f", &distance);

    float fare = calculateFare(class, distance);

    if(fare != 0){
	  printf("Fare: %.0f PKR\n", fare);
    } else{
      printf("Invalid class\n");
    }
      return 0;
}
