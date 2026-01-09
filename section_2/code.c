/*
Name: code.c
Purpose: section 2
Auther: me
Start: gcc -Wall -Werror -std=c99 ./section_2/code.c -o section_2/code.out && ./section_2/code.out
*/

# include <stdio.h>

int main(void) // Entry point
{
    printf("----------------------------------------\n");
    printf("To be or not to be. That is the question\n");

    printf("To be or not to be. ");
    printf("That is the question \n");
    printf("----------------------------------------\n");

    // Note how these print the same thing since
    // printf does not return till str end or \n

    float profit;
    profit = 255.5f;
    // Note the f suffix. This is since profit = 255.5 is a double by default
    // printf("%d\n", profit); // This is wrong. Specified int but profit is float
    printf("%.2f\n", profit); // Print float with 2 degree precision
    printf("----------------------------------------\n");

    int height, width, length;
    int volume;
    int weight;

    // Note how the f suffix isnt needed with ints.
    // They are ints just with declerations
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166; // Add 165 to round up

    printf("Computing the Dimensional Weight of a Box\n");
    printf("With Height: %d Length: %d Width: %d \n", height, length, width);
    printf("Volume: %d\n", volume);
    printf("Weight: %d\n", weight);
    printf("Note how since volume and weight are ints, the decimals are truncated\n");
    // printf("%zu\n", sizeof(volume));

    // Compute Dimensional Weight of a box with user inputs
    int hei, wid, len;
    printf("Please enter the height: \n");
    scanf("%d", &hei);
    printf("Please enter the width: \n");
    scanf("%d", &wid);
    printf("Please enter the length: \n");
    scanf("%d", &len);

    printf("Volume based off of user inputs: %d\n", hei*wid*len);
    printf("Weight based off of user inputs: %d\n", ((hei*wid*len)+165)/166);

    return 0;
}