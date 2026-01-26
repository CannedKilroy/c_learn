

/*
pg 99

Logical Expressions:
- many programming languages have a special bool type. C does not. 
  Instead it uses intergers. 0 is false, 1 is true (actually anything non
  0 is true).
- Example:
  - The value of 10 < 11 is 1
  - The value of 11 < 10 is 0
Note: Mixed types of float and int are allowed. Like 15.5 < 4 is allowed
Note: They have lower precedence than arithmetic operators:
      So, i + j < k - 1 mean (i+j) < (k-1)
Note: i < j < k is legal but doesnt mean what it does in math. It means
      ( i < j) < k. If i < j then it means 1 < k. And if not i < j,
      then 0 < k. Correct expression is i<j %% j<k

Equality Operators:
- is equal test: ==
- Note: small trick is to write if (0 == i) instead of if (i==0)
  so if you miss write == as =, compiler will give an error msg
  I dont need this with gcc and -Wall or -Wparentheses
- is NOT equal test: !=
- lower precendece than relational operators, left associative, produces 0 or 1
  so i < j == j < k is ( i < j) == (j < k) which is true if both are true
  or both are false

Logical Operators:
- ! is negation
- && is and
- || is or
- Logical operators produce 0 or 1 as their result, but treat 0 as false
  and any non zero interger has true
- short circuit evaluation: Since C executes left to right, if the first
  operand is false in an && (it doesnt need to check the other operands),
  as well, in the ||, if the first operand is true it doesnt need to check the other.

  Be careful tho: i>0 && ++j > 0. If i>0 is false, then ++j > 0 is not evaluated,
  so j is never incremented
- if else syntax:

  if (i > j)
    max = i;
  else
    max = j;
  
  Can also do:
  if ( i > j) max = i;
  else max = j;

  Cascading if statements:
  Example :
  if (n>0)
    printf("n is less than 0\n");
  else
    if (n==0)
      printf("n is equal to 0\n");
    else
      printf("n is greater than 0\n");
  More generally:
  if (expression)
    statement
  else if (expression)
    statement
  ...
  else if (expression)
    statement
  else
    statement

Dangling else problem:
- dangling else always belong to inner most / closest else if isnt not already paired

Ternary / conditional expressions:
- syntax: expr1 ? expr2 : expr3 read as
  "if expr1 then expr2 else expr3"
- expr1 is evaluated. If its value isnt 0 then expr2 is evaluated,
  if its value is 0 and its value is of the entire conditional. If expr1
  is 0, then the value of expr3 is the value of the conditional
- ie, the entire ternary expression, evaluates to a value, expr2 or expr3
- Note: if i is an int, f a float, (i > 0 ? i : f), the expression
  will have a type float. If i > 0 is true, the value of the expression
  is i after conversion to float.

- Example:
  int x = 5;
  int y = (x > 0) ? 10 : 20; // y = 10
Usually avoid ternarys, hard to read. Unless you do return i > j ? i : j;
Can use them in print statements

Switch statement:
- nested if else can be hard to read
- Example:
  switch (grade) {
  case 4: printf("Excellent");
          break;
  case 3: printf("Good");
          break;

          ...
  default: printf("Illegal grade");
           break;
  }
  Switch case are often easier to read than nested if and faster if many cases

  General Syntax:
    switch (controlling expression) {
    case constant-expression: statements
    ...
    case constant-expression: statements
    default: statements
    }
  where the controlling expression is followed by an interger expression in ()
  A constant expression is like an ordinary expr but cant contain var or function calls
  Usually we dont "fall through" a case. Mark explicitly if you do

  Break statements:
  - can break out of switch case or loops


*/