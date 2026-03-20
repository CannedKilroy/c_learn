/*
gcc -Wall -Werror -std=c99 ./section_13/projects.c -o ./section_13/projects.out && ./section_13/projects.out
*/

#include <stdio.h>

#define MAX_WORDS 100
#define MAX_LEN   100

int main(void){
    char words[MAX_WORDS][MAX_LEN];  // storage for all words
    int i = 0;

    while (i < MAX_WORDS) {
        if (scanf("%99s", words[i]) != 1)
            break;
        i++;
    }

    for (int j = 0; j < i; j++)
        printf("%s\n", words[j]);

    return 0;
}