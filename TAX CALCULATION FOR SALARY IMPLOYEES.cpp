#include <stdio.h>
#include <conio.h>
float calculateIncomeTax(float salary) {
    float tax = 0.0;

    if (salary <= 600000) {
        tax = 0.0; 
    } else if (salary <= 1200000) {
        tax = (salary - 600000) * 0.025; 
    } else if (salary <= 2400000) {
        tax = (600000 * 0.025) + ((salary - 1200000) * 0.125); 
    } else if (salary <= 3600000) {
        tax = (600000 * 0.025) + (1200000 * 0.125) + ((salary - 2400000) * 0.20); 
    } else {
        tax = (600000 * 0.025) + (1200000 * 0.125) + (1200000 * 0.20) + ((salary - 3600000) * 0.30); 
    }

    return tax;
}

int main() {
    float salary, tax;


    printf("Enter your annual salary (in PKR): ");
    scanf("%f", &salary);


    tax = calculateIncomeTax(salary);


    printf("Your calculated income tax is: PKR %.2f\n", tax);

    return 0;
}
