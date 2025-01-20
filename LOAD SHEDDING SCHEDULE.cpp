#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showLoadSheddingSchedule(char city[]) {
    int hours, i;
    char *timeSlots[] = {
        "12:00 AM - 2:00 AM", "2:00 AM - 4:00 AM", "4:00 AM - 6:00 AM",
        "6:00 AM - 8:00 AM", "8:00 AM - 10:00 AM", "10:00 AM - 12:00 PM",
        "12:00 PM - 2:00 PM", "2:00 PM - 4:00 PM", "4:00 PM - 6:00 PM",
        "6:00 PM - 8:00 PM", "8:00 PM - 10:00 PM", "10:00 PM - 12:00 AM"
    };


    srand(time(0));
    hours = rand() % 4 + 1; 

    printf("Load Shedding Schedule for %s:\n", city);
    for (i = 0; i < hours; i++) {
        int randomSlot = rand() % 12; 
        printf("- %s\n", timeSlots[randomSlot]);
    }
}

int main() {
    char city[50];


    printf("Enter your city name: ");
    scanf("%s",&city);
    showLoadSheddingSchedule(city);

    return 0;
