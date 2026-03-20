/*


Can do:

inside boolean.h
-------------------
#define BOOL int
#define TRUE 1
#define FALSE 0
-------------------

then in the source files:
-------------------
...
#include "boolean.h"
...
-------------------


Lets say we have a func foo, and its used in many of the source files. 
We can put foo's function prototype in a header file, foo.h
And write foo in foo.c
Then we can just #include it. Also, note, 
you must #include foo.h in foo.c too so the coimpiler can check
that the prototype matches the definition

Recall the calculator from section 15.1
If we want a stack, we can put in stack.h:

stack.h
-------------------
void make_empty(void);
int is_empty(void);
int is_full(void);
void push(int i);
int pop(void);
-------------------

stack.c
-------------------
#include "stack.h"
int contents[100];
int top = 0;
...
-------------------

calc.c
-------------------
#include "stack.h"
int main(void){
.....
}
-------------------

To declare a variable with out defining it, we can do
extern int i; // Declares i without defining it
This tells the compiler that i is defined elsewhere in the program,
most likely in a different source file

Nested #includes:
For example, if in "stack.h" we want to #include <stdbool.h> if 
we want is_empty to return a bool. 

Protecting header files:
- if a source file includes the same header file twice, compilation errors can occur.
Example:

file1.h
-------------------
#include "file3.h"
-------------------

file2.h
-------------------
#include "file3.h"
-------------------

prog.c
-------------------
#include "file1.h"
#include "file2.h"
-------------------

When we compile prog.c now,
it will compile file3.h now twice

To protect a header file:
- we will enclose the contents of the file in an 
#ifndef
#endif

Example: pg 385
- inside file3.h itself,
  #ifndef FILE3_H
  #define FILE3_H
  ...
  ie it wraps the whole ass header file

  #endif

  - ie each header protects itself

There is compiling, and then there is linking
Each source file must be compiled seperatly,
and the compiler generates a object file ending in .o
for each 

Make Files:
- use as: make target
  or just
  make to start from the first rule
- must start with a tab
- save as makefile or Makefile
- use make to run it
- each block is a rule
- first line gives a target file, filed by the files it depends on
- second line is command to be executed should it need to be rebuilt
  because a dependency changed
-------------------
// justify (the exe) is the target here
// depends on justify.o, word.o, line.o

justify: justify.o word.o line.o
	gcc -o justify justify.o word.o line.o

// justify.o is the target
// needs to be rebuilt if justify.c or word.h or line.h changes
// the -c tells compiler to compile but not link
justify.o: justify.c word.h line.h
	gcc -c justify.c

word.o: word.c word.h
	gcc -c word.c

line.o: line.c line.h
	gcc -c line.c
-------------------

Basic structure is:
targer: dependencies
<TAB>command

gcc -c creates an object file
-o specifies the output name
-c means f



Source Files:
- end in .c
- contain source code

Header Files:
- end in .h
- contain preprocessing directives and func prototypes
- share information across different files
  Use <> for offical C header files (searches for system header files),
  "" for user defined header files (searches current directory then system header file path)

Stack Datatype:



*/