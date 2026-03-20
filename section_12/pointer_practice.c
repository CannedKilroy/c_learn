/*

gcc -Wall -Werror -std=c99 ./section_12/pointer_practice.c -o ./section_12/pointer_practice.out && ./section_12/pointer_practice.out

*/

#include <stdlib.h>
#include <stdio.h>

// Print array passing pointer
void print(int *a, int n){
    printf("Printing array a of size: %d\n", n);
    printf("[");
    for (int i=0; i<n; i++){
        printf("%d ", *(a+i));
    }
    printf("]");
    printf("\n\n");
}


int main(void){
    printf("\n");
    
    printf("Original array: \n");
    int a[10] = {0,1,2,3,4};
    print(a, 10);


    int *p;
    p = &a[0];
    *p = 5;
    print(a, 10);
    int *q = p+1;
    *q = 6;
    print(a, 10);

    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int array[rows][cols];

    int (*q)[cols];   // empty pointer declaration

    q = array;        // OK

    return 0;
}