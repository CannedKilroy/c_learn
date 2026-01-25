/*
gcc -Wall -Werror -std=c99 ./section_4/code.c -o ./section_4/code.out && ./section_4/code.out
*/

#include <stdio.h>

int main(void){
    int i;
    float f;
    i = 72.99f;
    // i is NOT converted to a float now
    // this means make the value 72.99 into an int
    // which means i = 72
    f = 136;
    // this is NOT converted to a int
    // this means make the value 136 into a float
    
    // Ie, the VALUE is converted, NOT the variable
    printf("i: %d f: %f\n", i, f);

    printf("Beware chaining assignments\n");
    f = i = 33.3f;
    printf("%f\n", f);
    // f is now 33.000000f

    // printf("You can however do this\n");
    // i = 1;
    // k = 1 + (j = i);
    // k is now 2
    // in general tho. do not do this

    int x = 1;
    printf("%d\n", x++);
    // print old value of x, then increment
    printf("%d\n", ++x);
    // increment x, then print new value

    int dd = 7, jj = 8, kk = 9;
    // Note here it short circuits. i is assigned to j.
    // Assignment here yields j, which is 8
    // j is never assigned to k
    printf ("%d ", (dd=jj) || (jj=kk));
    printf ("%d %d %d", dd, jj, kk);
}