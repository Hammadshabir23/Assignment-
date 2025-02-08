#include<stdio.h>

float remainingbalance(float amount){
    float deduction = amount * 0.295;  // 19.5% + 10%
    return amount - deduction;
}

int main(){
    float amount;
    printf("Enter mobile balance amount: ");
    scanf("%f", &amount);
    printf("Remaining balance: %.0f\n", remainingbalance(amount));
    return 0;
}
