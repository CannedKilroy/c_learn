// pg 59 c projects
// gcc -Wall -Werror ./section_2/projects.c -o ./section_2/projects.out && ./section_2/projects.out


#include <stdio.h>

// Macro Constants
#define PI 3.14159f
#define SPHERE_SCALAR PI*(4.0f/3.0f)
// Note the floats again. Int would be truncated and therefore 0

void display(int num_20s, int num_10s, int num_5s, int num_1s) {
    printf(
        "$20 bills: %d\n"
        "$10 bills: %d\n"
        "$5 bills: %d\n"
        "$1 bills: %d\n"
        "\n",
        num_20s,
        num_10s,
        num_5s,
        num_1s
    );

}

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
    //float x2;
    float x1;
    printf("Please Enter a value for x: ");
    scanf("%f", &x1);
    printf("Polynomial Value: %f\n",((((3*x+2)*x-5)*x-1)*x+7)*x-6);

    // Program 7
    int amount;
    printf("Please enter an interger amount: \n");
    printf("I will calculate the numer of 20's, 10's, 5's, 1's needed\n");

    
    scanf("%d", &amount);
    int og_amount = amount;
    int num_20s = 0;
    int num_10s = 0;
    int num_5s = 0;
    int num_1s = 0;

    // We now need to figure out how to break the amount into the bills
    // We can use the fact that C truncates the decimals when doing
    // int division
   
    num_20s = amount / 20; 
    amount = amount - num_20s*20;

    num_10s = amount / 10;
    amount = amount - num_10s*10;

    num_5s = amount / 5;
    amount = amount - num_5s*5;
    

    // If there are any ones left over
    printf("DEbug amount: %d\n", amount);
    printf("Debug og amount: %d\n", og_amount);
    num_1s = amount;
    display(num_20s, num_10s, num_5s, num_1s);    
    

    // Program 8
    // Redo with loop
    float monthly_payment;
    float loan_amount;
    float interest_rate; // %
    
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    // Convert to decimal and monthly
    float monthly_interest = (interest_rate / 100) / 12;
    printf("Monthly interest: %f", monthly_interest);


    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float first_remainder;
    first_remainder = (loan_amount * (1+monthly_interest)) - monthly_payment;

    float second_remainder;
    second_remainder = (first_remainder * (1+monthly_interest)) - monthly_payment;

    float third_remainder;
    third_remainder = (second_remainder * (1+monthly_interest)) - monthly_payment;

    printf("Balance remaining after first payment: $%.2f\n", first_remainder);
    printf("Balance remaining after second payment: $%.2f\n", second_remainder);
    printf("Balance remaining after third payment: $%.2f\n", third_remainder);
    
    return 0;

}

