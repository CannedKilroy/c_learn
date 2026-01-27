/*
Exercises pg 146

gcc -Wall -Werror -std=c99 ./section_6/exercises.c -o ./section_6/exercises.out && ./section_6/exercises.out

Exercise 1:
It prints out 1 ,2, 4, 8, ... till 128
So 2^7

Exercise 2:
>> 9384 938 93 9

Exercise 3:
- Recall, a comma operator evaluates both but the rightmost is th result

for (i = 5, j = i - 1; i > 0, j > 0; i--, j = i - 1)
So, j = i - 1 ie 5 - 1 = 4, j>0, i--, --j
I is still decremented, as is j
So simplified:
  for (j=4; j>0; i--, --j){
  printf("%d ", i);
  }

Exercise 4:
- a and b are equivalent since it doesnt matter if you pre or postfix increment
- c uses the old value then increments, a and b are post and prefix but uses 
  the new value after, not the value of the expression

Exercise 5:
- while (i<10) { }, for (), do() while(i<10)
- c) is different since it tests after, not before the loop

Exercise 6:
- for (i=1; i<=128; i*=2){
  printf("%d",i);
  }

Exercise 7:
- for (i=9384; i>0; i/=10) {printf("%d", i);}

Exercise 8:
- Translate to while loop
  i=10;
  while (i>=1){
    printf("%d ", i++);
    i /= 2
  }
  - So it prints: 10 5 3 2 1 1 1 1 1 ...
  - 10 -> 11 / 2 -> 5 -> 6 -> 6/2 -> 3 -> 4 -> 4/2 -> 2 -> 3 -> 3/2 = 1 ->

Exercise 9:
- already did

Exercise 10:
- goto the while loop idk, dont need to know

Exercise 11:
- Loop 1: i = 0, 0 % 2 = 0 false, continue
  Loop 2: i = 1, 1 % 2 = 1 true, sum = 1
  Loop 3: i = 2, 2 % 2 = 0 false, continue
  Loop 4: i = 3, 3 % 2 = 1 true, sum = 1 + 3

  ... 1 + 3 + 5 + 7 + 9 = 18 + 7

Exercise 12:
// Only need to check divisors up to sqrt(n)
  Original:
  for (d = 2; d < n; d++){
    if (n%d ==0) {break;}
    }
  
  New:
  for (d = 2; d*d < n*n; d++){
    if (n%d==0) {break}
    }

Exercise 13:

- for (n=0; m>0; n++){
    m /= 2
    }
  is equivalent to this while loop:
  n = 0;
  while (m>0){
    m /= 2
    n++;
    }

  So, notice the order of operations:
  - divide by 2 then increment
  for (int n=0; m>0; m/=2, n++)
    ;

Exercise 14:
- There is a ; after the if statement
  Meaning printf will run regardless if n is truly even

*/

#include <stdio.h>

int main(void){

  // Exercise 12
  printf("Old implementation: \n");
  printf("Please enter a upper limit: ");
  int n;
  scanf("%d", &n);
  for (int d = 2; d < n; d++){
  if (n%d==0) {
    printf("%d\n",d);
    }
  }

  printf("\n New implementation: \n");
  for (int d = 2; d*d < n; d++){
    if (n%d == 0){
      printf("%d\n", d);
    }
  }
  
  // Exercise 11
  printf("Sum question: \n");
  int sum = 0;
  for (int i=0; i<10; i++){
    // Note that since modulo operator returns the remainder when divided by the divisor
    // i%2 value is 0 if even, and 1 if odd. So odd numbers are skipped, and
    // even numbers are summed
    if (i%2){
      continue;
    }
    sum += i;
  }
  printf("%d\n", sum);

  // Exercise 12


  return 0;
}