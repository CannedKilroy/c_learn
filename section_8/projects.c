
/*
gcc -Wall -Werror -std=c99 ./section_8/projects.c -o ./section_8/projects.out && ./section_8/projects.out
*/
#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void){

    // Reversing a series of numbers
    printf("Reversing a series of numbers: \n");
    printf("Enter 10 numbers: ");
    int arr_len = 10;
    int a[arr_len];
    // read in numbers
    for (int i=0; i<arr_len; i++){
        scanf("%d", &a[i]);
    }
    // print in reverse
    for (int i=arr_len-1; i>=0; i--){
        printf("%d ", a[i]);
    }

    // Repeated digit pg 191
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n>0){
        digit = n%10;
        if (digit_seen[digit]){
            break;
        }
        digit_seen[digit] = true;
        n /=10;
    }
    // COmputing interest pg 193

    // Nested arrays with loops pg 195
    float ident[N][N];
    int row, col;

    for (row = 0; row <N; row++){
        for (col=0; col<N; col++){
            if (row==col){
                ident[row][col]=1.00f;
            }else{
                ident[row][col]=0.00f;
            }
        }
    }

    // Exmaple initialized multidimensional array
    int m[5] [9] = {
        {1,2,3,4,5,6,7,8,9},
        {1,2,3,4,5,6,7,8,9,}
    };
    
    for (row = 0; row<5; row++){
        printf("%d |", row);
        for (col=0; col<9; col++){
            printf("%d", m[row][col]);
        }
        printf("\n");
    }

    // Dealing a hand of cards pg 197

    // Project 1
    // bool digit_seen_2[10]; // These are all false i think
    // int digit_2;
    // int nn;

    // printf("Enter a number: ");
    // scanf("%d", &nn);

    // while (nn>0){
    //     digit_2 = nn/10;
    // }

    // Project 6
    char og_biff[1024];
    printf("Enter a message: ");
    fgets(og_biff, sizeof(og_biff), stdin);

    printf("In biff speak: ");
    // scanf a charecter
    // if charecter is newline exit
    // if not place char into array
    
    while ((ch = getchar()) != '\n') {


    int ii=0;
    while (true){
        scanf("%c", &og_biff[ii]);
        if (og_biff[ii] == '\n'){
            break;
        }
        ii++;
    }

    for (int i=0; i<1024; i++){
        printf("%c ", og_biff[i]);
    }

int ch;
printf("Enter message: ");
printf("In BIFF-speak: ");
while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    switch (ch) {
        case 'A': ch = '4'; break;
        case 'B': ch = '8'; break;
        case 'E': ch = '3'; break;
        case 'I': ch = '1'; break;
        case 'O': ch = '0'; break;
        case 'S': ch = '5'; break;
    }
    putchar(ch);
}

for (int i = 0; i < 10; i++)
    putchar('!');




    return 0;
}
}