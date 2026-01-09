/*
Section 2 Notes
pg 34 pdf / pg 9 paper

Directives
-----------------------------------------------------------------------------------------------
- for now only worry about "#include" directive
- like #include <stdio.h>
- C has number of headers like <stdio.h>, each contains some info about
  some part of the std lib
- directives have no ; at the end

Functions:
-----------------------------------------------------------------------------------------------
- a series of statements that are grouped together and given a name

Statements:
-----------------------------------------------------------------------------------------------
- a command to be executed
- end with ; except with compound statements

To convert the program to a form that the machine
can execute, these steps are done:
-----------------------------------------------------------------------------------------------
1. Preprocessing: The preprocessor first obeys the
commands that start with # (known as directives).
2. Compiling: The compiler translates it into machine instructions
(assembly code)
3. Assembling
(object code)
4. Linking: The linker combines the object code
with any additional code needed to yielf a complete
exe.
5. Executable

The typical format of a C program:
-----------------------------------------------------------------------------------------------
directives

global vars

int main(void)
{
statements
}

Directives modify the program before compilation

Main Function:
----------------------------------------------------------------------------------------------
main function is special
- it is automatically called when the program is executed
- it returns a status ( an error code) code to tell the OS when it has terminated 
- 0 is no error, 1 is error

Metadata:
Every program should contain program name, date written,
author, purpose, etc

Types:
-----------------------------------------------------------------------------------------------
Types affect how the variable is stored and what opperations can be 
done on the variable. For numeric vars, the type dictates the
largest and smallest numbers it can represent and whether there
or not digits are allowed after the decimal.

- every var must have a type
- for now, focus on int and float

int type: 
    can store any int from __ to __
    Note dont do division of ints might not work out since
    C trunaces the result
float type: 
    - can store numbers with digits after the decimal point
    - can store much larger numbers than an int
    - However, there are drawbacks. They are just approximations (lead to rounding errors),
      and operations on floats are slower 

So does this mean that C allocates n bytes of memory for some object, even if its not all used,
seems not very efficent? Is there some ending char to seperate it in memory, what if you go over?
Like int32, and i only use 8 bits, why cant it cut it down to 8 bit int and just grow if needed?
What is the type heirachy or rules when adding different numeric types? int + float etc

Declerations:
-----------------------------------------------------------------------------------------------
Variables must be declared, before they can be used. 
To declare, write its type and then name ;
ex:
int height;
float profit;

You can define many at once:
int height, length, width, volume ;
float profit, loss ;

main function should therefore follow something like:
int main(void)
{
    declerations
    statements
}

Note:
-----------------------------------------------------------------------------------------------
for some older compilers, which were single pass, all declerations
must come before all statements. you cant declare statement right
before usage

Note:
if we do something like
float profit;
profit = 2150.47

its best to do
profit = 2150.47f
for a constant that contains a decimal point if the number is assigned
to a float

Format Specifiers:
-----------------------------------------------------------------------------------------------
%d for int variables
%f for float variables
note that by default %f displays 6 digits 
to specify the number of digitsm use .p where p is number of digits
.p between % and f. 
For example:
printf("Profit: %.2f", profit)

Printing strs
-----------------------------------------------------------------------------------------------
- string literal is a series of chars enclosed in double quotes, does not print the quotes
- printf does not advance to the next output line when finished printing,
  we must include \n char. (what about carrige return and other ones)

Comments:
-----------------------------------------------------------------------------------------------
- // for infline or multi line / * * /
- Unterminated comment can bamboozle the compiler to misparse your code

Initialization:
-----------------------------------------------------------------------------------------------
Note you can declare and assign in the same step, ie initialize a var
int height = 8;

This way attempting to access an initialized variable cant happen,
something that can give strange results.

Reading Input:
-----------------------------------------------------------------------------------------------
- use scanf.
Example: 
int i;
scanf("%d", &i) // Reads an int then stores it into i
Tells scanf to read data of the form of int and store it into memory
position of i. Note you prob shouldnt put a newline in scanf
- if you pass the wrong data type into it just crashes

Constants:
a const, like 166, we can use a macro definition. 
Example:
#define INCHES_PER_POUND 166
Even though the preprocessor simply copy pastes this around,
single sourc of truth. 
it is more readable, gives a name to the var (like pi), and is

// By convention, they should only be fully capitalized

#define is a preprocessing directive

Identifiers:
-----------------------------------------------------------------------------------------------
C is a small lang so there are minimal keywords to have a collision with. 
However, an identifier must begin with a letter or underscore, and may
contain letters, digits, or underscores. 

CANNOT USE - dashes

Tokens:
Not difficult. Use whitespace and block program logically.

GCC flags:
- Wall: Cause the compiler to produce all warning message when it detects possible errors.

*/
