#include<stdio.h>
float calculateZakat(float totalwealth, int choice) {
    float goldratepergram;
    float silverratepergram;
    float nisab;

    if(choice == 1){     // for Gold
        printf("Enter gold rate per gram (PKR): ");
        scanf("%f", &goldratepergram);
        nisab = 87.48 * goldratepergram;
    } else if(choice == 2){    // for Silver
        printf("Enter silver rate per gram (PKR): ");
        scanf("%f", &silverratepergram);
        nisab = 612.36 * silverratepergram;
    } else{
        printf("Invalid choice.\n");  
		return 1;  
    }

    if(totalwealth >= nisab) {
        return 0.025 * totalwealth;
    } else {
        return 0;
    }
}

int main() {
    int choice;
    float totalwealth;

    printf("Calculate Zakat based on:\n");
    printf("1. Gold\n");
    printf("2. Silver\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    printf("Enter total wealth (PKR): ");
    scanf("%f", &totalwealth);

    float zakat = calculateZakat(totalwealth, choice);

    if(zakat == -1){
        return 1;        // Exit with an error code
    }
     if(zakat > 0){
        printf("Zakat payable: %.0f PKR\n", zakat);
    } else {
        printf("No Zakat payable.\n");
    }
      return 0;
}