// For testing and trying different formatters and scanf
// gcc -Wall -Werror ./section_2/formatters.c -o ./section_2/formatters.out && ./section_2/formatters.out
#include <stdio.h>

int main(void){

    // Scanf
    int x,y;
    float a,b;
    printf("Please enter 4 values: \n");
    scanf("%d%d%f%f", &x, &y, &a, &b);
    printf("x: %d  y: %d  a: %f b:%f\n", x, y, a, b);
    /*
    Run 1:
    Inputs: Enter Enter (These are newlines, ignored), 55, 55, 55, 55
    Output: 55, 55, 55.000000, 55.000000

    Run 2:

    */

    /*
    Note: %c DOES NOT skip whitespace. So in the stdin,
    the last charecter in the stream is a \n leftover
    from the last scanf arg. So it just reads that. 
    */
    char charecter;
    printf("Please enter a charecter\n");
    scanf("%c", &charecter);
    printf("charecter value: %c", charecter);
    printf("This will be a blank new line !!!!!\n");
    printf("This reads the \\n from the last stdin input (user pressed enter)\n");
    

    /*
    Should instead use this
    */
    printf("Please enter the char again, it will work now: ");
    scanf(" %c", &charecter);
    printf("charecter value: %c\n", charecter);
    printf("It worked : )\n");
    printf("If you entered more than a single charecter, the next block of code wont run, since the leftover charecters are left inside stdin\n");
    printf("Need to flush buffer you did\n");


    // Formatter example
    int i,j;
    printf("Please enter 2 digits of the form x/x\n");
    scanf(" %d/%d", &i, &j);
    printf("i: %d, j: %d\n", i, j);

    char ch1, ch2;
    printf("Please enter [abcd] a charecter: ");
    scanf(" %c", &ch1);
    printf("Please enter [e] another charecter: ");
    scanf(" %c", &ch2);
    printf("ch1: %c and ch2: %c\n", ch1, ch2);
    printf("Note if you passed \"abcd\" into the first"
        "scanf then ch2 will give the second char value"
        "that is, ch2: \"b\" "
    );


    return 0;
}