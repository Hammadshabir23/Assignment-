#include<stdio.h>
#include<conio.h>

void main() 
{
    float num1, num2, result;
    char operator;
	printf("|=============================== BASIC CALCULATOR ================================|\n");
	printf("|\t\t\t\t ===== ==========\n|\n");
    printf("|\tEnter the first number: ");
    scanf("%f", &num1);
    printf("|\tEnter the second number: ");
    scanf("%f", &num2);
    printf("|\tEnter the operator (+, -, *, /): ");
    scanf(" %c", &operator); 
    if (operator == '+') 
	{
        result = num1 + num2;
        printf("|\n");
        printf("|\tResult: %.0f\n", result);
    } 
    else if (operator == '-') 
	{
        result = num1 - num2;
        printf("|\n");
        printf("|\tResult: %.0f\n", result);
    } 
    else if (operator == '*') 
	{
        result = num1 * num2;
        printf("|\n");
        printf("|\tResult: %.0f\n", result);
    } 
    else if (operator == '/') 
	{
    	printf("|\n");
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } 
		else {
        	printf("|\tError! There is no number which is divisible by 0\n");
		}
    }
    
    else {
    	printf("|\n");
        printf("|\tInvalid operator!\n");
    }
	printf("|\n");
	printf("|=================================================================================|");
}