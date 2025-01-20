#include <stdio.h>
#include <conio.h>
float convertCurrency(float amount, char currencyType) {
    float exchangeRate;
    if (currencyType == 'U' || currencyType == 'u') { 
        printf("Enter the exchange rate for 1 USD to PKR: ");
        scanf("%f", &exchangeRate);
    } else if (currencyType == 'S' || currencyType == 's') { 
        printf("Enter the exchange rate for 1 SAR to PKR: ");
        scanf("%f", &exchangeRate);
    } else if (currencyType == 'A' || currencyType == 'a') {
        printf("Enter the exchange rate for 1 AED to PKR: ");
        scanf("%f", &exchangeRate);
    } else {
        printf("Invalid currency type.\n");
        return -1; 
    }

    return amount * exchangeRate;
}

int main() {
    float amount, convertedAmount;
    char currencyType;


    printf("Enter the amount to convert: ");
    scanf("%f", &amount);

    printf("Enter the currency type (U for USD, S for SAR, A for AED): ");
    scanf(" %c", &currencyType);


    convertedAmount = convertCurrency(amount, currencyType);

    if (convertedAmount != -1) { 
        printf("Converted amount in PKR: %.2f\n", convertedAmount);
    }

    return 0;
}
