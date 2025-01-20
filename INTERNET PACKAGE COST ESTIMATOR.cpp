#include <stdio.h>
#include <string.h>
float internetPackageCost(int GB, char network[]) {
    float cost = 0.0;

    if (strcmp(network, "Zong") == 0 || strcmp(network, "zong") == 0) {
        cost = GB * 100.0; 
    } else if (strcmp(network, "Jazz") == 0 || strcmp(network, "jazz") == 0) {
        cost = GB * 120.0;
    } else if (strcmp(network, "Telenor") == 0 || strcmp(network, "telenor") == 0) {
        cost = GB * 90.0; 
    } else {
        printf("Invalid network. Please enter Zong, Jazz, or Telenor.\n");
        return -1;
    }

    return cost;
}

int main() {
    int GB;
    char network[20];
    float cost;

    printf("Enter the number of GBs you want: ");
    scanf("%d", &GB);

    printf("Enter the network (Zong, Jazz, Telenor): ");
    scanf("%s", network);


    cost = internetPackageCost(GB, network);

    if (cost != -1) { 
        printf("The cost of %d GB on %s network is: PKR %.2f\n", GB, network, cost);
    }

    return 0;
}
