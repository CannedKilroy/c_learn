/*
Chapter 9 pg 208

Functions
- in some languages, a function returns a value
  where as a procedure does not. C does not have this distincion
- functions in c dont nessecarily have arguements
  and doesnt nessecarily compute a value

Example:
double average(double a, double b)
{return (a+b)/2};

where double is function return type,
a and b parameters, with types double, 
with the body being return ...

Rules of functions:
- may not return arrays (why??)
- specifiying the return type is void means
  the function doesnt return something
- in c99 it is illegal to omit the return type of a func
- each parameter needs its own type declared in func sig
- trying to call a function without the ()
  is just a meaningless expression
  print_pun; as example

You can explicitly state that we are discarding
the return value of a function by putting void
in front of the function call
Example: (void) printf("HI\n");
since print returns number of chars printed but
we dont need that

What we're doing here is casting the return
int type to void. Not common practice and not needed

YOu can declare function after main as well, the
compiler assumes it return int (since thats the default return type)
, this is called "implicit decleration" of the function by the compiler.
It performs the default arg promotions and hopes for the best.

Function declerations (aka function prototypes):
- we can declare functions before we need to call them
  so the compiler knows what about it
- Its just the function header with a ;
- Example:
  int print_time(int time, int stock);


// This is the function definition
int print_time(int time, int stock){
  printf("Stock price %d at time %", time, stock);
  ...
  }

- Function declerations (aka as function prototypes)
  dont even need the arguement names, as long as their types are present
- Example:
  double average(double, double);

- Note: In C99, a decleration or defininiton must be present
  before any function calling happens

Parameters vs arguements:
- parameters are seen in function definitions
- arguements are expressions that appear in function calls

Pass by value:
- in C, arguements are pass by value:
meaning, each arguement is evaluated and its
value assigned to the corresponding parameter.
- the parameter contains a copy of the arguements value
so any changes to the parameter during execution
dont affect the arguement. 
- basically each parameter behaves like a variable thats 
been initialized to the value of the matching arguement.
- this is not true for arrays. Idk why??


Returns:
- a function cant return more than 1 value,
so if by example you want to decompose a float
into the fractional and interger parts, you cant return
both values. 

Arguement conversions:
- C allows function calls in which the type of the args dont match the parameters.
- if C has seen a prototype before the function call,
it implicitly converts
As example:
- if an int is passed to a func that is expecting a double,
  it will implicitly convert the int to a double

****
In C99, calling a function without first providing
a decleration or definition is an Error
***

Array arguements:
Example: int func(int a[]){ ... }
Is fine, meaning we pass an interger array
Note: sizeof doesnt work in function calls of arrays
As example:
  int f(int a[]){
    int len = sizeof(a) / sizeof(a[0]);
    *** THIS IS FALSE ***
    }
Instead, just pass the array length into the function 
like another parameter

A prototype for this would look something like:
int f(int a[]);

or even since we dont need names
int f(int []);

Note: we can use the fact that we pass the array length
to the function to only count what we want of the array.
Meaning we can pass half the size if thats all we
want to operate on. Like passing 50 to sum the first 50 elements
instead of the full 100

Note: For multidimensional arrays, you can
only omit the first arg. It must know the number of columns
since in memory its one long line

VLA parameters (C99):
- we dont need to do something like
  int sum_array(int a[], int n) { ...}
we can do this instead
  int sum_array(int n, int a[n]){ ... }
Note order is important
Also works for n-dimensional arrays
int sum_array(int n, int m, int a[n][m]);

Using static in array parameter declerations
- int sum_array(int a[static 3], int n)
tells the compiler that the a is guarenteed length
3

Compound literals:
-


Gotchas:
- what happens when the function declaration doesnt
match the function definition
- function decleration of without parameter names
- does order matter for function parameters? 
- asterisk * to tell compiler use the previous 
parameters in the function for this one

These are all equivalent:
int a[10];
void func(int a[]);
void func(int a[10]);
void func(int *a);
Since arrays decays into a pointer to its first element, array size is lost
so it must be passed seperatly
void f(int arr[], int size);

Note: C does not allow nested functions
Compound literal:
- an unamed array thats created on the fly
  Example: total = sum_array((int []){3,0,3,4,1}, 5)
#include <stdio.h>
int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    int binary[32];
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;   // get last binary digit
        num = num / 2;         // remove last binary digit
        i++;
    }

    // print in reverse
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}

*/