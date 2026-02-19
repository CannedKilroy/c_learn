/*
pg 266
gcc -Wall -Werror -std=c99 ./section_11/notes.c -o ./section_11/notes.out && ./section_11/notes.out


Memory:
- main memory is divided into bytes, each byte capable of storing eight bits of information
- each byte has a unique address

Pointers:

Pointer variables:
- denoted by *
- memory addresses are stored in pointer addresses
- pointer declerations:
  int *p;
  double *q;
  char *r;

Indirection Operator:
- * allows accessing the content stored in the object pointed to by the pointer

Pointers as arguements:
- Recall functions are pass by value. So we cannot use functions to modify values
  that are passed in.


Questions:
- why does C require pointers having their own type if memory address are just
  numbers?
  Ans: Pointer type tells the compiler what lives at the address
- How does C track memory? If it doesnt track array bounds, variables,
  Ans: The OS. WHich memory pages belong to your process, which pages are accesible, virtual memory mappings
  The heal allocator (malloc). Manages heap memory
- Why can i print unintialized intergers but not unintialized pointers
- What can we point to? All memory in the our process?

Beware dangling pointer:
int* bad_function() {
    int x = 10;   // local variable (on stack)
    return &x;    // XXX returning pointer to dead memory
}
This stack frame is destroyed when the function returns, but you return
a pointer to the variable, which is now memory that can be used elsewhere.

Const:
Using const to protect arguements. You can use const
to document that a function wont change an object whose address
is passed to the function. Pointers are sometimes alot more
efficent if the variable is quite large

Note:
void f(const int *p);
Does NOT mean f cant modify p, but
DOES mean that f cant modify the interger p points to.

Example:
  void f(const int *p){
    *p = 0; // Wrong
  }

Pointers as return values:
int *max(int *a, int *b){
  if (*a > *b){
    return a;
  }else{
    return b;
  }
}
int *p, i, j;
p = max(&i, &j);

When you call max, we'll pass pointers to two int vars
and store the result in a pointer var.

Pointers to arrays:
if a is an array, &a[i] is a pointer to element i of a

*/

void decompose(double x, long *int_part, double *frac_part){
    *int_part = (long) x;
    *frac_part = x - *int_part;
}

#include <stdio.h>

int main(void){
    int x = 4;      // Declare variable 4
    int *px;        // Declare empty interger pointer
    int *qx;
    px = &x;    // Assign px to address of x
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", px);
    printf("Scanning new interger into place of x: \n");
    scanf("%d", px); // Scan into address of x
    printf("New value of x: %d\n", x);
    printf("Address of x: %p\n", px);
    printf("Accessing value of x through *px : %d\n", *px);
    printf("Assigning pointer qx to px\n");
    qx = px;
    printf("Accessing value of qx (should be new x): %d\n", *qx);

    // Use pointers to deconstruct float to interger and fractional part
    double k = 44.666;
    long int_part;
    double frac_part;
    // Pass in k
    // Pass in the addresses of int_part and frac_part
    decompose(k, &int_part, &frac_part);


    return 0;
}