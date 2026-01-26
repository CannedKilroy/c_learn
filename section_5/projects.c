
// gcc -Wall -Werror -std=c99 ./section_5/projects.c -o ./section_5/projects.out && ./section_5/projects.out

#include <stdio.h>

int main(void){

    // Calculating brokers commision from pg 106
    printf("Brokers commision\n");
    float value, commision;
    printf("Enter value of trade: ");
    scanf("%f", &value);
    if (value < 2500){
        commision = 30.00f + 0.017f*value;
    }
    else if (value < 6250.00f) {
        commision = 56.00f + 0.0066f*value;
    }
    else if (value < 20000.00f) {
        commision = 76.00f + 0.0034f*value;
    }
    else if (value < 50000.00f) {
        commision = 100.00f + 0.0022f*value;
    }
    else if (value < 500000.00f) {
        commision = 155.00f + 0.0011f*value;
    }
    else {
        commision = 255.00f + 0.0009*value;
    }
    printf("Commision: $%.2f\n\n", commision);

    // Printing a date in legal form pg 114
    // Contracts usually print like: Dated this ____ day of ___, 20__.

    int month, day, year;
    printf("Enter date (mm/dd/yy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("Dated this %d", day);
    switch (day) {
        case 1: case 21: case 31:
          printf("st");
          break;
        case 2: case 22: 
          printf("nd");
          break;
        case 3: case 23:
          printf("rd");
          break;
        default:
          printf("th");
          break;
    }
    printf(" day of ");

    switch(month) {
        case 1: printf("January\n\n"); break; // and so on
    }

    // Programming projects pg 120

    // Project 1
    int input;
    int digits = 0;
    printf("Enter a number: ");
    scanf("%d", &input);
    if (input<10){
        digits = 1;
    }
    else if (input < 100){
        digits = 2;
    }
    else if (input < 1000){
        digits = 3;
    }
    printf("The number %d has %d digits\n", input, digits);

    // Project 2
    printf("\n");
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);
    printf("Equivalent 12-hour time: %d:%d", hour%12, minute);
    printf("\n");

    // Project 3
    // meh

    // Project 4
    int wind;
    printf("Please enter a wind speed in knots: ");
    scanf("%d", &wind);
    if (wind < 1) { printf("Calm\n");}
    else if (wind < 3) { printf("Light Air");}
    // and so on

    // Project 5

    // Many more projects, no time



}