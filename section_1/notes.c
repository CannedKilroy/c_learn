/*
Section 1
pg 26 / pg 1

History:
-----------------------------------------------------------------------------------------------
By-product of UNIX OS
Developed by Ken Thompson, Dennis Ritchie, others

Algol 60 -> BCPL -> B -> C
C developed at a time when there was just algol, cobol, etc. Ppl rathered to write binary and assembly

The C programming language by Brain 
Kernighan and Dennis Ritchie published 1978
"K&R"

Why C?
-----------------------------------------------------------------------------------------------
Note that in the 50's, 60's etc computer
architecture was completely different 
computer to computer. There was no standardization
Different CPU architecuture, instruction sets, assemblers, etc

Fortran was for math/ science
Cobol for buisness
These couldnt perform low level operations like accessing
hardware registers, control memory layout, handle interrupts,
do pointer arithmetic etc
C was specifically designed to make OS development possible in a
portable way

Assembly is human readable form of machine code, and machine code is CPU specific
OS's were written in assembly, so they were tied to one machine
If you changed machines, you needed to rewrite the code


Overview of how a program runs:
-----------------------------------------------------------------------------------------------
Program (C)
- >
C Standard Library (libc)
- >
System Calls (OS boundary)
- >
Kernel (OS)
- >
Hardware

Compiler vs std lib
-----------------------------------------------------------------------------------------------
To be a full fledged C implementation you both need:
- A compiler
- A std lib
libc is only a standard library
You can mix and match std libs with compilers

Section 1.2
-----------------------------------------------------------------------------------------------
Strengths and weakness of C
Strengths:
- Low level language, making it memory efficent and fast. C provides
operations that mimic the computers built in instructions so very fast
- Small language. Leans heavily on the stdlib
- Permissive. Allows foot guns :)
- C has many data types and operators
- Flexible. Can be used for wide array of projects

Since every language is compiled down to assembly, does the language actually matter?
-----------------------------------------------------------------------------------------------
Yes, since you cant compile away language semantic promises. C makes very
weak promises, so its very fast. Promises such at dynamic typing, arbitrary precision ints, exceptions everywhere, etc
Each promise adds checks, metadata, or runtime costs
Example:
In C:
int c = a + b
the compiler can assume a and b are ints, fixed width, no overflow checking, no type changes
In python:
c = a + b
a and b could be any object, addition may be overloaded, etc
GC is not free as well


There are ways to make programs more reliable. Increase the compiler
warning level. Linters, bounds checkers, leak finders.

Questions: wtf are words in memory. why not say 8k bytes
why gcc compiler
*/