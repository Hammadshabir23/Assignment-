#include<stdio.h>
    // Function to calculate the income tax
float calculateIncometax(float salary){
    if(salary < 600000){
	   return 0;
    } else if(salary < 1200000){
	   return salary * 0.025;
    } else if(salary < 2400000){
	   return salary * 0.125;
    } else if(salary < 3600000){
	   return salary * 0.20;
    } else{
	   return salary * 0.30;
    }
}

int main(){
    float salary, tax;

     // Get input from user 
    printf("Enter your annual salary: ");
    scanf("%f", &salary);

     // Calculate income tax
    tax = calculateIncometax(salary);

     // Display the result
    printf("Your income tax is: %.0f PKR\n", tax);
    printf("Your net income is: %.0f PKR\n", salary - tax);

     return 0;
}
