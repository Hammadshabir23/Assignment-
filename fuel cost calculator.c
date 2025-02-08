#include<stdio.h>
 // Function to calculate fuel cost
float calculateFuelCost(float distance, float fuelaverage, float fuelPrice){
    float fuelconsumption = distance / fuelaverage;
    float fuelcost = fuelconsumption * fuelPrice;
    return fuelcost;
}

int main(){
	float distance, fuelaverage, fuelprice, fuelcost;
	
	// GET INPUT FROM USER
	printf("Enter total trip distance (in kilometers): ");
	scanf("%f", &distance);
	printf("Enter vehicle fuel consumption (km/liter): ");
	scanf("%f", &fuelaverage);
	printf("Enter current price of fuel per liter: ");
	scanf("%f", &fuelprice);
	
	// CALCULATE FUEL COST
	fuelcost = calculateFuelCost(distance, fuelaverage, fuelprice);
	
	// DISPLAY THE RESULT
	printf("Fuel cost for the trip: PKR %.2f\n", fuelcost);
	
	return 0;
}