// gcc -Wall -Werror -std=c99 ./section_4/projects.c -o ./section_4/projects.out && ./section_4/projects.out

#include <stdio.h>

int main(void){
    // Project 1
    printf("Project 1: \n");
    printf("Enter a two-digit number: ");
    int user_input;
    scanf("%d", &user_input);
    int last = user_input % 10;
    int first = user_input / 10;
    printf("The reversal is: %d%d\n", last, first );
    printf("\n");

    // Project 2
    printf("Project 2: \n");
    printf("Enter a three-digit number: ");
    int user_int_2;
    scanf("%d", &user_int_2);
    int last2 = user_int_2 % 10;
    int middle2 = (user_int_2 / 10) % 10;
    int first2 = user_int_2 / 100;
    printf("The reversal is: %d%d%d\n", last2, middle2, first2);
    printf("\n");

    // Project 3
    // meh

    // Project 4
    printf("Project 4\n");
    printf("Enter a number between 0 and 32767: ");
    int input_num;
    if ((scanf("%d", &input_num) != 1) || (input_num < 0)){
        return 1;
    }
    
    // Convert to octal
    // https://byjus.com/maths/convert-decimal-to-octal/
    int d5 = input_num%8;
    input_num = input_num / 8;
    int d4 = input_num%8;
    input_num = input_num / 8;
    int d3 = input_num%8;
    input_num = input_num / 8;
    int d2 = input_num%8;
    input_num = input_num / 8;
    int d1 = input_num%8;

    printf("%d%d%d%d%d\n", d1,d2,d3,d4,d5);
    printf("\n");

    // Project 5
    // meh

    return 0;
}