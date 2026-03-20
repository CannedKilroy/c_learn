
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
gcc -Wall -Werror -std=c99 ./section_13/exercises.c -o ./section_13/exercises.out && ./section_13/exercises.out
*/

/*
Note when designing a function like this, we
have to think about whether:
- should it skip leading whitespace?
- What causes it to stop reading?
  - Is this stored or discarded?
- What should it do if the input string is too long?
  - Should the extra chars be discarded or left in input stream
*/
// int read_line(char str[], int n){
//     char ch;
//     int index = 0;
//     while (ch = getchar() != '\n'){
//         if (index <= n-2){
//             str[index] = ch;
//             index++;
//         }else{
//             break;
//         }
//     }
//     str[index] = '\0';
//     return i;
// }

void capitalize(char array[], int n){
    for (int i=0; array[i] != '\0'; i++){
        puts(array+i);
        //array[i] = toupper(array[i]);
    }
}

void censor(char *arr){
    for (int i = 0; *(arr+i) != '\0'; i++){
        
    }
}
int main(void){

    // Reading strings char by char

    // Exercise 1 pg 338
    /*
    printf("%c", '\n'); is correct
    printf("%c", "\n"); is incorrect. "" means str not char
    printf("%s", '\n'); is incorrect. '' means char
    printf("%s", "\n"); is correct
    printf("\n") is correct
    printf('\n') is not correct expects a string i think
    putchar("\n") is not correct since putchar expects a char
    putchar('\n') is correct since thats a char
    puts Expects a string so passing a char is not correct

    Exercise 2 pg 338
    char *p = "abc"
    putchar(p) is not legal since putchar expects an interger ie char,
    and p is a pointer. putchar(*p) however dereferences it to char so legal
    puts(p) is legal since its a string literal
    puts(*p) is not

    Exercise 3 pg 333
    scanf("%d%s%d", &i, s, &j);
    input: 12abc34 56def78
    %d reads intergers so it reads 12, reads a, and puts it back.
    i = 12
    %s reads strings, stopping at whitespace and does strip leading whitespace.
    so
    s = abc34
    %d reads intergers again, skipping leading whitespace, so it reads 56

    Exercise 4 pg 333

    Exercise 5

    Exercise 6:

    Exercise 7:
    Suppose str is an array of charecters:
    *str = 0 is legal. Changes first charecter
    str[0] = '\0' also legal
    strcpy(str, "") copies s2 into s1, 
    */

    char *p = "abc";
    putchar(*p);
    puts(p); // puts expects a pointer to char array so this is ok
    //puts(*p); // is illegal
    capitalize(p, 3);
    

    char str[] = "dfgh";
    *(str + 1) = 5; // String is an array in memory.
    puts(str);
    printf("%s\n",str);

    return 0;
}