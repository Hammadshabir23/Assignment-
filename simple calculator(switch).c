#include<stdio.h>

int main(){
    char operator;
    int num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0){
                printf("Error: Division by zero\n");
                return 1;   // Exit with an error code
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;   // Exit with an error code
    }

    printf("%d %c %d = %d\n", num1, operator, num2, result);

    return 0;
}