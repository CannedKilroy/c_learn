// gcc -Wall -Werror -std=c99 ./section_2/exercises.c -o ./section_2/exercises.out && ./section_2/exercises.out
// pg 58
#include <stdio.h>

int main(void){
    // Question 1
    printf("hello, world\n");
    // return 0

    // There is no return statement
    // I did not get a warning from the compiler

    // Question 2
    printf("Parkinson's Law: \nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");

    // The statements are the printf statements
    // The directives are the include <stdio.h>
    // THe output:
    // Parkison's Law:
    // Work expands so as to fill the time
    // available for its completion.
    // Check: This is correct

    // Question 3:
    float height = 3;
    float length = 3;
    float width  = 3;
    printf("The weight of a box with the dimensions given is: %f\n", ((height*length*width)+165)/166);
    // (Already did this)

    // Question 4:
    int x,y,z;
    float a,b,c;
    printf("X: %d Y: %d Z: %d\n", x, y, z);
    printf("a: %f b: %f c: %f\n", a, b, c);

    // run without Wall / Werror
    // I just get random numbers, i imagine random data in memory from this process
    // Isnt this a security issue if you dont free old variables


}