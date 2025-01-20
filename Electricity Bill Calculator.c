#include <stdio.h>
#include <conio.h>
float calculateBill(int units) {
    float bill = 0.0;

    if (units >= 1 && units <= 100) {
        bill = units * 18;  
    } else if (units >= 101 && units <= 200) {
        bill = units * 22;  
    } else if (units >= 201 && units <= 300) {
        bill = units * 26;  
    } else if (units >= 301 && units <= 700) {
        bill = units * 30;  
    } else if (units > 700) {
        bill = units * 35;  
    } else {
        printf("Invalid number of units.\n");
        return -1.0;  
    }

    return bill;
}

int main() {
    int units;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float bill = calculateBill(units);

    if (bill != -1.0) {
        printf("The total bill for %d units is %.2f PKR.\n", units, bill);
    }

    return 0;
}
