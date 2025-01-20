#include <stdio.h>
#include <conio.h>
float remainingBalance(float amount) {
    float fed = amount * 0.195;       
    float serviceCharges = amount * 0.10; 
    float afterTaxBalance = amount - (fed + serviceCharges);
    return afterTaxBalance;
}

int main() {
    float amount, balance;


    printf("Enter the mobile recharge amount (in PKR): ");
    scanf("%f", &amount);


    balance = remainingBalance(amount);


    printf("After tax deductions, your remaining balance is: PKR %.2f\n", balance);

    return 0;
}
