// gcc -Wall -Werror -std=c99 ./section_6/projects.c -o ./section_6/projects.out && ./section_6/projects.out

#include <stdio.h>

int main(void){

    // pg 126
    // Printing table of squares
    int n;
    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n){
        printf("%d%10d\n",i, i*i);
        i++;
    }

    // pg 128
    // Summing a series of numbers
    printf("This program sums a series of intergers.\n");
    printf("Enter intergers (0 to terminate) : ");
    int total = 0;
    int nn;
    // Read initial valu
    scanf("%d", &nn);
    // While the input is not 0
    while (nn != 0) {
        total = total + nn;
        scanf("%d", &nn);
    }
    printf("The sum is: %d\n\n", total);

    // pg 129
    // coundown with do while
    int count = 10;
    do {
        printf("T minus %d and counting\n", count);
        count = count - 1;
    }
    while (count > 0);
    // It runs the do clause first, iteratively, 
    // when the "t minus 1", count is decremented from 1 to 0
    // 0 is not > 0 so stops at t minus 1

    // pg 129
    // counting number of digits
    
    printf("Enter a nonnegative interger: ");
    int nonnegint;
    int digits = 0;
    scanf("%d", &nonnegint);

    do {
        nonnegint = nonnegint / 10;
        digits += 1;
        printf("digits: %d\n", digits);
    }
    while (nonnegint > 0);
    // int 55 / 10 = 5, int 5 / 10 = 0
    // if you used a while loop, nonnegint>0 would never be true
    printf("The number has the %d digits\n", digits);

    // pg 130 coundown with for loop
    printf("T minus program with for loop: \n");
    for (i=10; i>0; i--){
        printf("T minus %d and counting\n", i);
    }
    // Note, if we change i-- with --i, we get no difference.
    // To see this, convert to while loop. the i--; is at the end
    // of the while loop as a standalone statement. It makes no difference

    // Common for statement idioms
    // pg 131
    
    n = 10;
    printf("n is %d\n", n);
    printf("Count up from 0 to n-1: \n");
    for (i=0;i<n;i++){
        printf("%d\n",i);
    }
    
    printf("Count up from 1 to n: \n");
    for (i=1;i<=n;i++){
        printf("%d\n",i);
    }

    printf("Counting down from n-1 to 0: \n");
    for (i=(n-1); i>=0; i--){
        printf("%d\n",i);
    }

    printf("Counting down from n to 1: \n");
    for (int jj=n; jj>=1; jj--){
        printf("%d\n", jj);
    }

    // We can omit expr3 and do the incrementing inside the loop body
    for (int kk = 0; kk < n; ){
        printf("kk: %d\n", kk);
        kk++;
    }

    // We can omit both expr1 and expr3, do the incrementing in the body,
    // declare somewhere else
    int ll = 0;
    for ( ; ll<n; ){
        printf("ll: %d\n", ll);
        ll++;
    }

    // If we omit the second value, it defaults to true, so infinite loop

    // Balacing a checkbook
    // pg 139
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
    printf("\n");
    int command;
    float balance = 0.0f, credit, debit;

    for (;;){
        printf("Enter a command: ");
        scanf("%d", &command);
        switch (command){
            case 0:
              balance = 0.0f;
              break;
            case 1:
              printf("Enter amount of credit: ");
              scanf("%f", &credit);
              balance = balance + credit;
              break;
            case 2:
              printf("Enter amount of debit: ");
              scanf("%f", &debit);
              balance = balance - debit;
              break;
            case 3:
              printf("Current balance: $%.2f\n", balance);
              break;
            case 4:
            printf("Exiting ...\n");
              goto end_loop;
            default:
              printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
        }
    }
    end_loop:

    // Project 1
    // Note a do while loop is better since we need to first 
    // get some user input, then we can start looping
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }

    printf("Project 1: \n");
    float largest, num;
    scanf("%f", &num);

    while ((num != 0) && (num > 0)){
        scanf("%f", &num);
        if (num>largest){
            largest = num;
        }
        printf("Number: %f\n", num);
    }
    printf("The largest number entered was: %f\n", largest);

    // Project 2
    // User inputs 2 number and then calculate and display their GCD
    int m, nnn;
    printf("Project 2: \n");
    printf("Enter two intergers: ");
    scanf("%d %d", &m, &nnn);

    // n == 0 is the end condition
    while (nnn!=0){
        int rem = m % nnn;
        m = nnn;
        nnn = rem;
    }
    printf("GCD: %d\n", m);

    // Project 3
    // Program that asks the user to enter a frac, then reduces to lowest terms
    printf("Project 3: \n");
    // trivial, just project 2

    // Project 4
    // meh

    // Project 5
    printf("Project 5: \n");
    printf("Enter a number to be reversed: ");
    int anum;
    scanf("%d", &anum);
    do{
        int last = anum %10;
        printf("%d", last);
        anum = anum / 10;

    }while (anum>0);
    printf("\n");

    // Project 6
    // This can be made better but this is ok for now
    // Note even squares mean the nums are even, so we can just increment
    // by even nums
    printf("Project 6: \n");
    printf("Enter a number n and I will print all the even squares between 1 and n\n");
    int bnum;
    scanf("%d", &bnum);

    for (i=1; i*i<=bnum; i++){
        // If square is even print it
        if ( ((i*i) % 2) == 0 ){
            printf("%d\n", i*i);
        }
    }

    // Project 7
    // meh

    // Project 8

    // Need to come back to

    printf("Project 8: \n");
    // Write a program that prints a one-month calender. The user specifies the number
    // of days, such that, the month, and the day of the week on which the month begins

    // Need a for loop to count from 1 to n
    printf("Enter number of days in the month: ");
    int days;
    scanf("%d", &days);
    int start;
    printf("Enter starting day of the week (1=sun, ..., 7=sat): ");
    scanf("%d", &start);
    printf("\n Mo Tu We Th Fr Sa Su\n");

    // Project 11
    printf("Project 11: \n");
    printf("Please enter n for nth approximation of e: ");
    int to_n;
    float eprox;
    int fact = 1;

    scanf("%d", &to_n);
    for (int i=1; i<=to_n; i++){
        fact = fact*i;
        eprox = eprox + (1.0/fact); 
    }
    printf("Approximation of e: %f\n", eprox);

    // Project 12
    // meh

}