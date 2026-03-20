/*
pg 283

pointer arithmetic

Example:
  int a[10];
  int *p;
  p = &a[0];
  *p =5;

Forms of pointer arithmetic:
- adding an interger to a pointer
- subtracting an interger from a pointer
- subtracting pointer from another

Examples:

Adding interger to a pointer:
Adding interger J to a pointer p yields a pointer
to the element j places after the one that p points to.
Ie, if p points to array a[i], then p+j points to a(i+j)

int a[10], *p, *q, i;
// p is now the address of a[2]
p = &a[2];
// q is the address of a[2+3] = a[5]; 
q = p+3;
// p is the address of a[2+6] = a[8];
p += 6;

Subtracting an interger from a pointer
int a[10], *p, *q, i;
// p points to array element 8
p = &a[8];
// q is now address of a[5];
q = p-3;

Subtracting one pointer from another
- the result is the distance between the pointers
int a[10], *p, *q, i;
p = &a[5];
q = &a[1];
i = p-q; // i is just an interger 4

Comparing pointers:
can use relational and equality operators
p = &a[5];
q = &a[1];
p <= q is false
p >= q is true

pointers to compound literals
int *p = (int []){3,0,3,4,1};
p points to the first element of the 5 element array

Section 12.2 pointers for array processing

#define N 10
int a[N], sum, *p;
sum =0;
for (p=&a[0]; p< &a[N]; p++){
  sum += *p;
}

Combining the * and ++ operators:
a[i++] = j;

Array name as a pointer:
- the name of an array can be used as a pointer to the first element in the array
Example:
  int a[10];
  *a = 7; // Means a[0] = 7
  *(a+1) = 12; // Means store 12 in a[1]

In general:
a+i is same as &a[i] and *(a+i) is same as a[i]

Simplifies loops:
for (p=&a[0]; p<&a[N]; p++){
  sum += *p;
}
Simpler:
for (p=a; p< a+ N; p++){
  sum += *p;
}
Although declaring a parameter to be an array is same as
declaring it to be a pointer, same is NOT true of a variable.
The decleration int a[10] causes the compiler to set aside space for 10 intergers
However, int *a causes the compiler only to allocate space for a pointer variable
So doing *a = 0; is WRONG

Since we can use an array name as a pointer,
c will allow us to use a pointer subscript like an array name? yes
#define N 10
int a[N], i, sum=0, *p=a;
for (i=0; i<N; i++){
  sum += p[i];
}
Section 12.4 pg 292


Function macros:
- save runtime since no function call
- also no types. so if Max() could be used for ints and floats
- but its less safe
*/
