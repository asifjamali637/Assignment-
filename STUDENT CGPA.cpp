#include <stdio.h>
#include <conio.h>
float calculateGPA(int marks) {
    if (marks >= 85) {
        return 4.0;
    } else if (marks >= 80) {
        return 3.7;
    } else if (marks >= 75) {
        return 3.3;
    } else if (marks >= 70) {
        return 3.0;
    } else if (marks >= 65) {
        return 2.7;
    } else if (marks >= 60) {
        return 2.3;
    } else {
        return 0.0; 
    }
}

int main() {
    int marks;
    float gpa;


    printf("Enter the marks (out of 100): ");
    scanf("%d", &marks);

    gpa = calculateGPA(marks);
    if (gpa == 0.0 && marks < 60) {
        printf("You have failed. Your GPA is: %.1f\n", gpa);
    } else {
        printf("Your GPA is: %.1f\n", gpa);
    }

    return 0;
}
