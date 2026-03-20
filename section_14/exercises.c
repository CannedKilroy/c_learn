

/*
PG 370
gcc -Wall -Werror -std=c99 ./section_14/exercises.c -o ./section_14/exercises.out && ./section_14/exercises.out
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

// Test empty define
#define x 

// Exercise 1
#define cube(x) ((x)*(x)*(x))
#define rem(n) ((n)/4)
#define prod(x, y) ((x)*(y) < 100 ? 1 : 0)

// Exercise 2
#define NELEMS(a) ((sizeof(a))/sizeof(a[0]))

// Exercise 3
#define DOUBLE(X) 2*x
// a). DOUBLE(1+2) turns to 2*1+2 so 4, not 6 so wrong
// b). 4/DOUBLE(2) turns to 4/2*2 so 4 not 1
// c). #define DOUBLE (2*(x))

// Exercise 4
// a). #define AVG(x,y) (x-y)/2
// Counter: x = 2*3 and y = 4-2
// So it becomes (2*3-4-3) so -1 not 5
// b). #define AREA(x,y) (x)*(y)
// Counter: 1/AREA(2,3)
// so it becomes 1/(2)*(3) NOT 1/(2*3)

// Exercise 5
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z'? (c)-'a'+'A':(c))

// Exercise 6
#define DISP(f, x) printf(#f "(%g) = %g\n", (x), f(x))
// #define PRINT_INT(n) printf(#n " = %d\n", n);
// #define DBUG()

// Exercise 7
// #define GENERIC_MAX(type) type type##_max

// Exercise 8

// Exercise 9
// a).
#define CHECK(x,y,n) ( ((x)>=0) && ((y)>=0) && ((x)<=((n)-1)) && (((y)<= ((n)-1))) )
// b).
#define MEDIAN(x,y,z) ()

// Exercise 10
// Parameterized macros are just text substitution.
// So if a function relies on a specific type
// lets say modulos and i try to pass a float or double that would wrong
// Side effects can easily become bugs, order of operatoions messed up
// And executable can become 

// Exercise 12
#define M 10

int main(void){
    printf("Cube of %d : %d\n", 2, cube(2));
    printf("Rem of %d /4: %d\n", 8, rem(8));
    printf("Conditional_Prod of %d %d: %d\n", 3, 4, prod(3, 4));

    int arr[100];
    arr[0] = 1;
    printf("%d\n", arr[0]);
    printf("NELEMS of array: %zu\n", NELEMS(arr));

    char s[5];
    strcpy(s, "abcd");
    int i=0;
    putchar(TOUPPER(s[++i]));
    // Result is C
    // Since 'a' <= a AND b <= z
    // So we evalauate the true clause
    // c - 'a' + 'A' which normalizes the char c and adds the diff to get capital C

    // PRINT_INT(3);

    DISP(sqrt, 3.0);
    printf("%d\n", __LINE__);


    return 0;
}