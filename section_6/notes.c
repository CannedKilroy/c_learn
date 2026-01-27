

/*
gcc -Werror -Wall -std=c99 ./section_6/notes.c -o ./section_6/notes.out && ./section_6/notes.out
pg 125

While loop:
- syntax: while (expression) statement
Example:
  while (i<n) // controlling expression
    i = i * 2; // loop body

The () are mandatory
When a while statement is executed, the controlling expression 
is evaluated first. If the value is non zero ie true, the loop body
is executed and the controlling expression tested again. Repeats
until the controlling expression is 0.

Note: -The controlling expression is false when the loop terminates,
       otherwise it would have kept running
      - The body may not be executed at all, since the controlling 
      expression is test before the body, maybe not even once.\

Infinite loops:
- the controlling expression wont terminate if it has a non zero value. 
- examples: while (1). it will run forever unless break, return, goto
- 

Do - while loops pg 128
- the do statement is executed first, then the while controlling expression is tested
- this makes sure the loop body is run atleast once
- n

For loop: pg 130
- syntax: for (expr1; expr2; expr3) statement or {statements}
  where expr1 is usually the initialization, expr2 the controlling expression, and expr3 the incr / decrementing
- Example:
  // Note not declaring i. C99 and later dont need to declare before
  for (i=0; i>0; i--){
    printf("T minus %d and counting\n",i);
}
- A for loop can almost always be rewritten as a while loop
  of the form
  expr1;
  while (expr2){
    statement
    expr3;
  }
- Where expr1 is initialization step and only performed once
  before the loop begins to execute. expr2 controls loop termination
  ( the loop continues executing as long as expr2 is true), and expr3
  is an operation to be performed at the end of each loop iteration
- Since the first and third expression are executed as statements,
  their values are irrelevant, they are only useful for their sideffects.
- expr1 and expr3 are usually assignments / de/in crements

Common footguns:
- Using == inside expr3. Doesnt make sense since it wont be true at the star most likely,
therefor never execute
- off by one errors

Omitting expressions in for loops:
- Example:
  i = 10;
  for (; i > 0; --i ){ prinft("T minus %d ...");}
  i was initialized somewhere else, so we just omit the var in expr1 spot

- if we omit the expression, like for example
  for (i=0; i<=n ; ){printf(...);} 
  then the loop body is responsible for ensuring that the value of the second
  expression eventually becomes false

- when the first and last expressions are ommited, then the for loop is essentially a while loop
- Example:
  for (; i>0; ) {}
- Note in c99, we do not need to predeclare i for a for loop.
  We can do for(int i = 0; ...). If i exists somewhere else already,
  it still works, we get a local i or i scoped to just the for loop.
  It is not assesable or "visible" outside the for loop
- Note you can also declare more than one var
  for (int i=0, j=0; ...) provided they are the same type

Comma expression:
- Syntax: expr1, expr2
- expr1 is evaluated and value thrown away, expr2 is evaluated
  and its value is the value of the whole expression. expr1 should have
  a sideeffect, otherwise theres no point to it. Comma had the lowest
  operator precedence iirc, and left associative
- Example:
  i = 1, j = 2, k = i + j means
  ((i = 1), (j = 2)), (k = (i+j))
- it allows us to glue expressions together into a single expression
- not very common. Only really in for loops and certain macros

- Exiting from a loop:
- break statement:
  - self explanatory. only breaks out of the inntermost loop if nested
- continue statement:
  - only used in loops
  - for loop: skips the rest of the body, executes in increment step, then checks condition again (ie expr2)
  - while loop: skips the rest of the body, then immediatly checks the condition again
  - note: be careful where you put continue in relation to incrementing
    in while loops. YOu can do: while ... {if (i==2) {continue} i++;}
    so once you hit i == 2 you continue to the next loop, and continue
    to the next loop, etc, without incrementing, since incrementing is 
    at the end
- goto: dont need to know

- null statement:
  - a statement can be null ie devoid of symbols, except for ; at the end
  Ex: i = 10; ; j=22;
  - good for writing loops whose body is empty
  


*/

#include <stdio.h>

int main(void){
  int n = 32;
  int i = 1;

  // i = 1, i = 2, i = 4, i = 8, i = 16,
  while (i<n){
    printf("%d\n",i);
    i = i*2;
  }



  


  return 0;
}