/*

Section 10.1 pg 244
Local variables:
- A variable declared in the body of a function are said
  to be local to the function. It has automatic storage duration.
  Storage for local variable is automatically allocated when the 
  enclosing function is called, and deallocated when the function returns.

- Block Scope: The scope of a variable is the portion of the programtext
  in which it can be referenced. Local variable has block scope. 

Static local variables:
- Have static storage duration. Permanent storage location. It retains
  its value throughout the execution of the program. 
  It still has block scope so its not visible to other functions, but
  retains its value between function calls.

Global variables:
- Static storage duration
- File scope

Blocks:
- blocks are allowed declerations as well
- with automatic storage duration
- Example:
  if (i<j){
  int temp = i;
  i=j;
  j=temp;
  }
Organizing a C program pg 254
Typical ordering:
#inlcude directives
#define directives
Type definitions
Declerations of external variables
Prototypes for functions other than main
Definition of main
Definitions of other functions

Precede each Function defintion be a boxed comment
that gives the name of the function, explains its purpose,
meaning of each parameter, and its return type

Question: Local vs static variables on recursive functions:

*/