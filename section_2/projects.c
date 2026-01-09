// pg 59 c projects
// gcc -Wall -Werror ./section_2/projects.c -o ./section_2/projects.out && ./section_2/projects.out


#include <stdio.h>

// Macro Constants
#define PI 3.14159f
#define SPHERE_SCALAR PI*(4.0f/3.0f)
// Note the floats again. Int would be truncated and therefore 0

int main(void){
    // Program 1
    printf("---------------------------------\n");
    printf("       *\n");
    printf("      *\n");
    printf("     *\n");
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");
    printf("---------------------------------\n");

    // Program 2
    float r = 10;
    printf("SPHERE_SCALAR: %f\n", SPHERE_SCALAR);
    printf("Volume: %f of Sphere with Radius: %.2f\n", SPHERE_SCALAR*r*r*r, r);

    // Program 3
    float radius;
    printf("Please enter a Radius\n");
    scanf("%f",&radius);
    printf("Volume: %f of Sphere with Radius: %.2f\n", SPHERE_SCALAR*radius*radius*radius, radius);

    // Program 4
    float dollar_n_cents;
    printf("Enter an amount: $");
    scanf("%f", &dollar_n_cents);
    printf("With tax added: $%.2f\n", dollar_n_cents*1.05f);

    // Program 5
    // Is there a way to creater a template polynomial first and get user input after?
    float x;
    printf("Please enter a value for x: ");
    scanf("%f", &x);
    printf("Polynomial Value: %f\n", 3*x*x*x*x*x + 2*x*x*x*x -5*x*x*x -x*x +7*x -6);

    // Program 6
    // Factor x from for the terms with x
    // x(3x^4 +2x^3 -5x^2 -x +7)
    // Repeat. Results in less multiplications
    float x2;
    
    return 0;

}