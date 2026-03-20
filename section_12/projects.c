/*
gcc -Wall -Werror -std=c99 ./section_12/projects.c -o ./section_12/projects.out && ./section_12/projects.out
*/
#include <stdio.h>
#include <stdlib.h>
#define max_char 100

int main(void){

    // Project 1 pg 300
    // Using pointers
    /*
    | Expression | Type            | Meaning                        |
    | ---------- | --------------- | ------------------------------ |
    | `proj1`    | `char *`        | pointer to first `char`        |
    | `&proj1`   | `char (*)[100]` | pointer to entire array object |
    */
    printf("Please enter a message less than %d and ill print it in reverse \n", max_char);
    char proj1[100];
    // Array only decays when passed into a function
    char *p = proj1;
    char *end = p+max_char;
    for (;p<end-1; p++){
        // Is it easier to use char or int
        char ch;
        if ((ch = getchar()) == '\n'){
            break;
        }
        // Dereference p and place char there
        *(p) = ch;
    }
    *(p) = '\0';
    // Walk the array in reverse
    for (; p>=proj1; p--){
        printf("%c", *p);
    }
    printf("\n\n");

    // Project 2
    printf("Project 2: Checking if msg is a palindrome: \n");
    char proj2[100];
    int i;
    for (i=0; i<99; i++){
        char ch;
        ch = getchar();
        if (ch == '\n'){
            break;
        }
        if (ch != ' ' && ch != '\t'){
            proj2[i] = ch;
        }
    }
    int length = i;
    int pali = 1;
    for (int j=0; j<(length/2); j++){
        printf("%c %c\n", proj2[j], proj2[i]);
        if (proj2[j] != proj2[--i]){
            pali = 0;
        }
    }
    printf("Msg is a: %s\n", (pali == 1? "Palidrome": "Not a palindrome"));

    printf("Project 2 continued: Checking if msg is a palindrome:\n");
    char proj2[100];
    int i = 0;

    // Can also do:
    // char str[100];
    //     scanf("%s", str);
    // OR
    //     fgets(line, sizeof(line), stdin);


    while (i < 99) {
        char ch = getchar();
        if (ch == '\n') break;

        if (ch != ' ' && ch != '\t') {
            proj2[i++] = ch;
        }
    }

    int length = i;
    int pali = 1;

    int left = 0;
    int right = length - 1;

    while (left < right) {
        if (proj2[left] != proj2[right]) {
            pali = 0;
            break;
        }
        left++;
        right--;
    }

    printf("Msg is a: %s\n", pali ? "Palindrome" : "Not a palindrome");

    return 0;
}