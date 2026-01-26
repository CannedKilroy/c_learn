// gcc -Wall -Werror -std=c99 ./section_5/exercises.c -o ./section_5/exercises.out && ./section_5/exercises.out

#include <stdio.h>

int main(void){

    /*
    pg 118
    Exercise 1:
    a). i = 2, j = 3, k = (i * j) == 6
    >> k = 1
    b). i = 5, j = 10, k = 1, (k > i) < j, 0 < 10, 
    >> 1 (true)
    c). i = 3, j = 2, k = 1, (i < j) == (j < k), 0 == 0, 1
    >> 1 (true)
    d). i = 3, j = 4, k = 5,
        i % j + i < k, ((i % j) + i) < k, (3 + 3) < 5
        >> 0
    
    Exercise 2:
    a). i = 10, j = 5, !i means !10 = 0, 0<5 true
        >> 1
    b). i = 2, j = 1, (!!i) + (!j) is (1) + (0) is 1
        >> 1
    c). i = 5, j = 0, k = -5, i && j || k, (i && j) || k, 0 || -5, 1
        >> 1
    d). i = 1, j = 2, k = 3, i < j || k, (i<j)||k, 1 || ..., 1
       >> 1 (short circuit)
    
    Exercise 3:
    a). i = 3, j = 4, k = 5, i < j || ++j < k, (3 < 4), short circuit,
        >> 1 (true)
        >> i = 3, j = 4, k = 5
    b). i = 7, j = 8, k = 9, i - 7 && j++ < k, (i - 7) && ((j++) < k), 0 &&
        short circuit. 
        >> 0 false
        >> i = 7, j = 8 (no increment), k = 9
    c). i = 7, j = 8, k = 9, (i = j) || (j = k), 8 || so shortcircuit
        >> 1 (true)
        >> i = 8, j = 8, k = 9
    d). i = 1, j = 1, k = 1, ++i || ++j && ++k, ((++i) || (++j)) && (++k),
        i is incremented, first expression true, i is incremented, j is not, k is since no shortcircuit
        >> 1
        >> i = 2, j = 1, k = 2
    
    Exercise 4:
    (i > j) - (i < j)

    Exercise 5:
    It is valid but doesnt mean what the programmer meant
    if ( n >= 1 <= 10) means if ((n>=1) <=10), so 1 or 0 is <= 10, so if is always true

    Exercise 6:
    if (n == 1-10) means if (n == -9), it is legal, but does not do whats intended

    Exercise 7:
    i >= 0 ? i : -1
    if i = 17, 17 >= 0 is true, so i, so 17
    if i = -17, -17 is not >= 0, so -i, so -(-17) = 17

    Exercise 8:
    teenager = (age >= 13 && age <= 19);

    Exercise 9:
    Yes they are equivalent. 

    Exercise 10:
    1 % 3 = 1. No break statement though
    >> onetwo

    Exercise 11:
    int area_code
    switch (area_code) {
      case 229:
        printf(...);
        break
      case 404: case 470: case 678:
        printf(...);
        break
      ...

    
    
    }



    
    */

    return 0;
}