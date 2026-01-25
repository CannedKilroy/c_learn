// gcc -Wall -Werror -std=c99 ./section_4/exercises.c -o ./section_4/exercises.out && ./section_4/exercises.out

#include <stdio.h>

int main(void){
    
    // Exercise 1
    // a) >> 1 2
    // b) >> 0
    // c) >> 1   //((7+10) % 9) / 8
    // d) >> 0

    // Exercise 2
    // C always truncates towards 0
    // in c99 these are equivalent

    // Exercise 3
    // idk i dont need to know c89

    // Exercise 4
    printf("%d\n", 8/5);   // >> 1
    printf("%d\n", -8/5);  // >> -1
    printf("%d\n", 8/-5);  // >> -1
    printf("%d\n", -8/-5); // >> 1

    // Exercise 6
    printf("%d\n", 8%5);   // >> 3
    printf("%d\n", -8%5);  // >> -3 // same sign as dividend
    printf("%d\n", 8%-5);  // >> 3
    printf("%d\n", -8%-5); // >> -3

    // Exercise 7
    // Exercise 8
    // 

    // Exercise 9
    // a) >> 63 8 // 7 * (8+1) = 63
    // b) 3 2 1
    // c) i = 2, j = -1, k = 3,
    // d) i = 0,j = 0, k = 0

    // Exercise 10
    // a) i = 12, j = 12
    // b) i = 3, j = 4
    // c) i = 2, j = 8

    /*
    Exercise 11
    a). >> 0 2
    b). >> 4 11 6
    c). >> 0 8 7
    d). >> 3 4 5 4


    Exercise 12
    a) i = 5, j = ++i * 3 - 2, j = (6*3) - 2 = 16
       >> 6 16
    b) i = 5, j = 3 - 2 * i++, j = 3 - (2*5) = -7
       >> 6 -7
    c) i = 7, j = 3 * i-- + 2, j = (3*7) + 2 = 23
       >> 6 23
    d) i = 7, j = 3 + --i * 2, j = 3 + (6*2) = 15
       >> 6 15
    
    Exercise 13
    i += 1 means i = i + 1, and the value of the expression is
    i + 1, so the equivalent is ++i

    Exercise 14
    a). ((a * b) - (c*d)) + e
    b). ((a / b) % c) / d
    c). (((-a) - b) + c) - (+d)
    d). ((a * (-b)) / c) - d

    // Done
    
    */

        
    return 0;
}