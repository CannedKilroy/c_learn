// Name:
// Date:
// Etc
// Start: gcc -Wall -Werror -std=c99 ./section_2/celc.c -o section_2/celc.out && ./section_2/celc.out

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)
// Note these are floats. If it were ints then it would be 0 

int main(void){
    float user_temp, celsius_result;
    printf("Please enter your fahrenheit temp\n");
    scanf("%f", &user_temp);
    celsius_result = (user_temp - FREEZING_PT) * SCALE_FACTOR;
    printf("The celsius result: %.2f\n", celsius_result);

    return 0;
}