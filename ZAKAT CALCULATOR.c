#include <stdio.h>
#include <conio.h>
float calculateZakat(float totalWealth, float goldRate, float silverRate) { 

    float nisabGold = 87.48 * goldRate;
    float nisabSilver = 612.36 * silverRate; 


    float nisabThreshold = (nisabGold < nisabSilver) ? nisabGold : nisabSilver;


    if (totalWealth >= nisabThreshold) {
        return totalWealth * 0.025; 
    } else {
        return 0.0; 
    }
}

int main() {
    float totalWealth, goldRate, silverRate, zakat;


    printf("Enter your total wealth (in PKR): ");
    scanf("%f", &totalWealth);


    printf("Enter the current rate of 1 gram of gold (in PKR): ");
    scanf("%f", &goldRate);


    printf("Enter the current rate of 1 gram of silver (in PKR): ");
    scanf("%f", &silverRate);

    zakat = calculateZakat(totalWealth, goldRate, silverRate);


    if (zakat > 0) {
        printf("Your Zakat is: PKR %.2f\n", zakat);
    } else {
        printf("Your total wealth is below the Nisab threshold. No Zakat is due.\n");
    }

    return 0;
}

