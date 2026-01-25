/*
Chapter 4 page 78

Questions:
- if operators produce values, why cant i do
Exmample: 
  int i = 44;
  printf("%d", a=i*33);
// and have a assigned, and print the value of a
- how to do polymorphism in C if i dont know the type, what
  if i assign types conditionally, based on the data i get. 
  Lets say i want to be very memory efficent. 

C has many operators

Arithmetic Operations:
-----------------------------------------------------------------------------------------------

Unary:
  Unary operator doesnt actually do anything. Used to emphasize
  numeric constant is positive mostly.
  + Operator:
  Example: i=+1
  - Operator:
  Example: i=-1

  The binary operators +,-,*,/, allow either interger or float, mixing is allowed.
  The result is a float when mixed.
  
  Doing modulo 0 or / 0 causes undefined behaviour
  % modulo: Requires both operands are intergers. Wont compile otherwise 
  / division: When both operands are intergers, it can truncate the result,
  Example: Thus 1/2 = 0 not 0.5

  For negative numbers, division is always truncated toward 0
  - So, -9/7 = -1.2857 mathematically. But those are ints in C,
    so C truncates towards 0. So -9/7 = 1
  - And -9%7 has the same sign as the dividend, -9, so -2

  Operator Precedence:
  - Refer to the slides
  - Highest: 
      unary +,-
      *, /, %
      binary + - 
  - Lowest:
  - Examples:
    i + j * k = (i + (j * k))
    -i * -j = (-i) * (-j)
  
  Operator associativity:
  - Left associativity if it groups left to right
    Example: i - j - k  same as (i-j)-k
  - Right associativity if it groups right to left:
    Example: - i
  
  Assignment Operators:
  Doing this:
  int x = 10;
  int y = x;
  x = 12;
  >> x = 12 and y = 10. y is a copy

  And type conversions
  int i;
  i = 72.99f // Now i is a float
  float j;
  j = 136; // Now j is a int

  Since assignment is a operator, it produces a result
  Ex: v = e is the value of e after assignment

  Side-Effects:
  - the = has a side effect. The main effect is producing
  the value. The side effect is assignment. 

  Lvalues:
  - lvalues represent an object stored in memory
  - ( so far we only know about variables)
  - not a constant or result of computation
  - variables are lvalues, expressions like 10 are not

  Examples:
  12 = i; // WRONG
  -i = j //  WRONG

  Compound assignment:
  Examples: +=, -=. /=, etc
  Like i = i + 2 is like to i += 2

  Increment and decrement operators:
  i += 1
  i -= 1
  Prefix: --j means operate first and return new value
  Postfix: j-- means return old value, then increment

  Precedence:
  1. Postfix (ie j++, j--) with left associativity
  2. Prefix (++j, --j), unary (+, -), !, with right associativity
  3. Multiplicative (*, /, %) with left associativity
  4. Additive (+, -) with left associativity
  4.2 Relational <,>,<=, >
  4.4 
  5. Assignment (=, *=, ...) with right associativity

  Example: a = b += c++ - d + --e / -f
  1. a = b += (c++) - d + --e / -f
  2. a = b += (c++) - d + (--e) / (-f)
  3. a = b += (c++) - d + ((--e) / (-f))
  4. a = b += (((c++) - d) + ((--e) / (-f))) // since left assiciative
  5. (a = (b += (((c++) - d) + ((--e) / (-f)))))

  Example: a = 5;
  c = (b = a + 2) - (a=1);
  // this is undefined since c doesnt specify subexpression order evaluation
 
  Expression statements:
  Any expression can be turned into a statement with a ;

  Truthy:
  Any value other than 0 is true. -1, 1, -99 is true. 
  0 is false. C does not have inheritent boolean types

  Short circuit evaluation:
  int i = 10;
  int j = 2;
  if ((i == 10) || (j>5)) { ...}

  We shortcircuit here. The j<5 condition is never hit. 
  Note: For exams this is important since you can put operators
  with side effects on the right, and if it short circuits, it
  will never be hit

  Switchcase:
  No longer faster, just more readable
  If you miss a break; statement in a switch case,
  it will just continue to the next one
  Switch cases only do exact matches, in c99 you cant do ranges
  You dont need a default case, but if you do, it is last

  Ternary:
  number of lines your program affects program size
  so long ago tried to condense



Loops
- has a controlling expression that is evaluated each time hte loop
body is executed
- while:
  Like 204 LI
  - controlling expression is tested before the loop body
  is executed
  - if controllling expression is non zero, loop body
  is executed and controlling expression gets tested again
  - if controlling expression is 0 its not executed
  - unless there is a early return, when loop completes, the controlling
  expression is false
  - cant do empty while loop like you can with for loop
- do:
  - the loop body is executed THEN the controlling expression
  - usually tied to while loop
  - like a inverse while loop
  - the loop body will always be executed atleast once
  - 
- for:
  - for (expr1;expr2;expr3)
  - can be rewritten as while loop like
  - note continue in while behaves differently from
    continue in for
  expr1;
  while (expr2) {
    statement;
    expr3;
    }
Exiting terminal
- ctrl c is usually enough
- kill -9 [ps_id] means kill now this process with this id
- Note: quitting ssh connection does not stop program running
  hence the kill and ctrl c

Comma operator:
 - glue expressions together
 - lower precednece than assignment
 Ex:
  i = 1;
  j = 5;
  ++i, i + j -> is 7
  i++, i + j -> is also 7
  The comma counts them as 2 different expressions
*/

