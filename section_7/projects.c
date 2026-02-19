
/*
gcc -Wall -Werror -std=c99 ./section_7/projects.c -o ./section_7/projects.out && ./section_7/projects.out

*/

#include <stdio.h>

int main(void){

    // Determining length of a message pg 166
    // int length = 0;
    char msg[100];
    
    int j=0;
    char ch;
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n'){
        msg[j] = ch;
        j++;
    }
    printf("Length: %d\n", j);
    for (int i=0; i<j; i++){
        printf("%c ", msg[i]);
    }

    // Project 4 pg 182
    // Write a progeram that translates an alphabetic phone number into numeric form

    printf("Enter a phone number: ");
    char numbers[100];
    fgets(numbers, sizeof(numbers), stdin);

    for (int i=0; numbers[i] != '\0'; i++){
        char c = numbers[i];

        if (c >='A' && c<= 'C'){
            numbers[i] = '2';
        }
        // And so on
    }
    printf("%s\n", numbers);

    // Project 6 pg 183
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    // Project 9 pg 183
    printf("Enter a 12hour time: ");
    int hour, minutes;
    char ampm[3];
    scanf("%d:%d %s", &hour, &minutes, ampm);
    if (ampm[0] == 'P' || ampm[0] == 'p'){
        printf("%d:%d\n", (hour%12) + 12, minutes);
    }else{
        printf("02%d:%02d\n", (hour%12), minutes);
    }

    // Project 10
    // Write a program that counts the number vowels in a sentance
    printf("Enter a sentance: ");
    char sentance[100];
    int chh;
    while ((chh = getchar()) != '\n' && chh != EOF);

    fgets(sentance, sizeof(sentance), stdin);

    int vowel_count = 0;
    for (int i=0; sentance[i] != '\0'; i++){
        switch (sentance[i]){
            case 'a': case 'e': case 'i': case 'o': case 'u':{
                vowel_count += 1;
                break;
            }
        }
    }
    printf("Vowel Count: %d\n", vowel_count);

    // Project 11
    // Write a program that takes a first name and the last name entered by the user and displays the last name,
    // a comma and the first initial, followed by a period
    printf("Enter a first and last name: ");
    char first_last[100];
    fgets(first_last, sizeof(first_last), stdin);
    char first[50], last[50];
    sscanf(first_last, "%s %s", first, last);
    printf("%s, %c.\n", last, first[0]);

    // Project 13
    // Write a program that calculates the avg word length for a sentance
    char sent[100];
    printf("Enter a sentence and ill calculate avg word length: ");
    fgets(sent, sizeof(sent), stdin);
    short letter_count = 0;
    short word_count = 0;
    short in_word = 0;
    for (int i=0; sent[i] != '\0'; i++){

        // If sent[i] is a letter
        if (sent[i] != ' ' && sent[i] != '\n'){
            letter_count += 1;
            // 
            if (!in_word){
                word_count++;
                in_word =1;
            }
        }else{
            in_word = 0;
        }
    }
    printf("%.1f", (double) letter_count/word_count);

    // Project 15
    // Since short is 2 bytes, 16 bits so 2^(16-1)-1
    printf("Enter a positive interger for factorial: ");
    int int_fact;
    scanf("%d", &int_fact);

    int factorial_result = 1;
    while (int_fact > 0){
        factorial_result *= int_fact;
        int_fact--;
    }
    printf("Factorial: %d\n", factorial_result);



}