#include <stdio.h>
#include <stdbool.h>

int main(void){
    // Exercise 1:
    // sizeof(a)/sizeof(a[0]) is better than sizeof(a)/sizeof(type) since
    // if you change whats stored in a the expression will remain correct

    // Exercise 2:
    // mehj

    // Exercise 3:
    bool weekend[7] = { true, false, false, false, false, false, true };
    bool weekend[7] = { [0] = true, [6] = true };


    // Exercise 4:
    int fib_len = 400;
    int fib_numbers[fib_len];
    fib_numbers[0] = 0;
    fib_numbers[1] = 1;
    for (int i=2; i<fib_len; i++){
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }
    for (int i=0; i<fib_len; i++){
        printf("%d ", fib_numbers[i]);
    }

    // Exercise 6:
    // 10 digits, 7 segments per digit with bool
    // const int segments[10][7] = {
    //     {1,1,1,1,1,1,0},
    //     {1,1,0,1,1,0,1}, // and so on
    // }

    // Exercise 7:
    // meh

    // Exercise 8:
    // 30 days, each day has 24 readings
    int temperature_readings[30][24];

    // Exercise 9:
    // average all days and all hours for every day
    
    // prepopulat first 
    int total=0;
    for (int i=0; i<30*24; i++){
        total += temperature_readings[i];
    }
    printf("Total: %d\n", total);

    // Exercise 10
    char chess_board[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
        // ...
    }

    // Exercise 11
    char chess_board_2[8][8];
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            if ((i+j)%2 == 0){
                chess_board_2[i][j] = 'B'
            }else{
                chess_board_2[i][j] = 'R'
            }
        }
    }

    return 0;

}