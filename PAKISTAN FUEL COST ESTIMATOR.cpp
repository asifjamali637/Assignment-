#include <stdio.h>
#include <conio.h>
float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {

    float fuelRequired = distance / fuelAverage;

    float fuelCost = fuelRequired * fuelPrice;

    return fuelCost;
}

int main() {
    float distance, fuelAverage, fuelPrice;

    // Get input from user
    printf("Enter the total trip distance (in kilometers): ");
    scanf("%f", &distance);

    printf("Enter the vehicle's fuel consumption (in km/liter): ");
    scanf("%f", &fuelAverage);

    printf("Enter the current per liter fuel price (in PKR): ");
    scanf("%f", &fuelPrice);


    float cost = calculateFuelCost(distance, fuelAverage, fuelPrice);


    printf("The total cost of the road trip is %.2f PKR.\n", cost);

    return 0;
}
