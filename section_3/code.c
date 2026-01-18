#include <stdio.h>
// gcc -Wall -Werror ./section_3/code.c -o ./section_3/code.out && ./section_3/code.out
int main(void){
    int i, j;
    float x, y;
    

    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);
    // These are likely errors due to compiler flags
    // printf("%d %d\n", i); // gives compiler error
    // printf("%d\n", i, j); // gives compiler error too many args
    // printf("%d\n", y); // gives compiler error wrong type
    printf("%d\n", 88);
    // this does not work // printf("%d\n", 88.000f);
    printf("%.0e\n", 666.00f); // 0 digits after decimal
    printf("%22e\n", 666.00f); // pad with 11 spaces (need 22 total)
    printf("%-.9e\n",  666.00f);
    printf("%e\n", 666.00f);
    printf("%e\n", 666.12345678f);


    printf("%.2f\n", y); // 2 decimals
    printf("%10.2f\n", y); // 10 total, value is right justified
    printf("%5.4d\n", j);  // prepends with 2 0's then 1 space
    printf("%4d\n", j);   // prepends with spaces
    
    char *bb;    
    bb = "hello";
    printf("%7.3s\n", bb);
    printf("%-7.3s\n", bb);
    // we specify .3, so take hel, but 7 total, so 4 padding
    // first padding on left then on right with -

    // Escape sequences
    printf("\a\n\b");
    printf("\\\n");

    // int i, j;
    // float x, y;
    scanf("%d%d%f%f", &i, &j, &x, &y);

    printf("%d %d %f %f\n", i,j,x,y);
    
    // Example on using scanf incorrectly
    printf("Incorrect usage of scanf, formatting like printf\n");
    scanf("%d, %d, %f, %f", &i, &j, &x, &y);



    return 0;
}
