// gcc -Wall -Werror -std=c99 ./section_3/exercises.c -o ./section_3/exercises.out && ./section_3/exercises.out
// pg 74
#include <stdio.h>

int main(void){

    // Exercise 1
    // a) // ____86, 1040 //digit, so no decimanls. 6 minimum fieldwidth.
    printf("%6d, %4d\n", 86, 1040);
    // b)____3.0253e1
    printf("%12.5e\n", 30.253);
    // in exponential, only 1 digit so 3.0253e10, but 5 precision,
    // so 3.02530e1, but exponent needs a sign, so 3.02530e+1
    // but exponent is minimum 2 digits, so 3.02530+01, add the e,
    // so 3.02530e+01
    // but this is only 11 charecters long. we want 12. insert 1 space
    // _3.02530e+01
    
    // c)83.1620
    printf("%.4f\n", 83.162);
    // 4 precision, just add a 0 at the end

    printf("%.2g\n", 123.456); // 2 sig digs
    
    // d)0.0000 since float is shorter
    printf("%-6.2g\n", .0000009979);
    // in %e, this would give 9.979000e-07
    // but we want only 2 dig digs
    // 1.0e-06, but %g removes trailing zeros and decimal if not needed
    // so 1e-06

    // write it in sci notation. 9.979x10-7
    // the exponent < -4 so use %e
    // round to 2 sig digs, add a space pad on the right
    // 1e-06_ 


    // Exercise 2
    // a)
    printf("%-8.1e\n", 123.456);
    // b)
    printf("%10.6e\n", 123.456);
    // c)
    printf("%-8.3f\n", 123.456);
    // d)
    printf("%6.0f\n", 123.456);


    // Exercise 3
    // a) yes. %d automatically tells scanf to skip whitespace, as does a space
    //    in the format string itself.
    // b) no?
    int i, j, k;
    // input: 44-44-44
    scanf("%d-%d-%d", &i, &j, &k);
    // output: i: 44 j: 44 k: 44
    printf("i: %d j: %d k:%d\n", i, j, k);

    scanf("%d %d %d", &i, &j, &k);
    // input: 4 enter, 4 enter, 4 enter
    printf("i: %d j: %d k:%d\n", i, j, k);
    // output: i: 44 j: 44 k: 44

    float x;
    printf("Enter x\n");
    scanf("%f ", &x);
    // conversion specifier specifies ignore whitespace till start reading
    // something that resembles a float
    // once a float is encountered, it then waits for a whitespace,
    // even if it just discards the whitespace after
    // it will keep waiting for whitespace till it doesnt get anymore

    // Exercise 4
    printf("Exercise 4\n");
    scanf("%d%f%d", &i, &x, &j);
    printf("i: %d x: %f j:%d\n", i, x, j);
    // it will be 10, .3, 5
    // no 6
    
    // Exercise 5
    // it will be 12.3 , 45, .6

    // Exercise 6
    


    return 0;
}