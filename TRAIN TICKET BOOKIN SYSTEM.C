#include <stdio.h>
#include <conio.h>

float calculateTrainFare(char class[], float distance){
    float fare = 0.0;


    if (class[0] == 'E' || class[0] == 'e') {
        fare = distance * 5; // Economy Class
    } else if (class[0] == 'B' || class[0] == 'b') {
        fare = distance * 10; // Business Class
    } else if (class[0] == 'F' || class[0] == 'f') {
        fare = distance * 15; // First Class
    } else {
        printf("Invalid class type.\n");
    }

    return fare;
}

int main() {
    char class[20];
    float distance;

    printf("Enter class (Economy, Business, First): ");
    scanf("%s", class);
    printf("Enter distance (km): ");
    scanf("%f", &distance);

    float fare = calculateTrainFare(class, distance);
    if (fare > 0) {
        printf("Fare = %.2f PKR\n", fare);
    }
    
    getch();
    return 0;
}
