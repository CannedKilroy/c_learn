// pg 180

int main(void){

    /*
    Exercise 1:
    a). 077 is octal so 7*8^1 + 7*8^0 = 56 + 7 = 63
    b). 0x77 is hex so 7*16 + 7*1 = 112 + 7 = 119
    c). 0xABC is hex so 10*16^2 + 11*16^1 + 12*16^0
        = 2560 + 176 + 12 = 2748

    Exercise 2:
    d is not legal constant. 100_000
    010E2 is not legal constant. Starts with 0 so octal but has exponent
    0790 is not legal since octal but has a 9 in it. 

    Exercise 3:
    short float is not legal

    Exercise 4:
    printf(c); is not legal

    Exercise 5:
    0b10000001 idk wtf that is. binary literals not in c99

    Exercise 6:
    Note C only guarentees: char >=8, short >= 16, int => 16, long => 32
    a). char is 1 byte, 4 bits, max is idk 11111111 so 2^8 - 1 = 255 (assume unsigned char)
    b). 365 days in a year. So short is 16 bits more than enough but even unsigned char is too small
    c). 1440. Short is enough
    d). 86400. short can only store to 65536. need long

    Exercise 7:
    \b = 8  = 010 octal
    \n = 10 = 012 octal
    \r = 13 = 015 octal 
    \t = 9  = 011 octal

    Exercise 9:
    i / j + 'a' type is int. Char gets promoted to int

    Exercise 10:
    i + (int) j*k. Since cast is unary j*k is type long, 
    cast to int. Int + int is int, so int.

    Exercise 11:
    int i;
    float f;
    double d;
    i* f/d is of type double

    Exercise 12:
    int i;
    float f;
    double d;
    d = i+f; 
    Interger plus float casts i to float. That is then promoted to double

    Exercise 13:
    a). octal 1 is decimal 1. -3 type int?
    b). long 7
    c). float 6.5
    d).

    Exercise 14:
    Supposedly fails for negative numbers

    Exercise 15:
    #include <stdint.h>
    typedef int8_t Int8;

    */
}