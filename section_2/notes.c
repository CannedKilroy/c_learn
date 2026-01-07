/*
Section 2 Notes
pg 34 pdf / pg 9 paper

To convert the program to a form that the machine
can execute, these steps are done.
-----------------------------------------------------------------------------------------------
1. Preprocessing: The preprocessor first obeys the
commands that start with # (known as directives).
2. Compiling: The compiler translates it into machine instructions
(object code)
3. Linking: The linker combines the object code
with any additional code needed to yielf a complete
exe. 

The typical format of a C program:
-----------------------------------------------------------------------------------------------
directives

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

int type: can store any int from __ to __
float type: 
    can store numbers with digits after the decimal point
    can store much larger numbers than an int
    However, there are drawbacks. They are just approximations,
    and operations on floats are smaller 

Note that printf doesnt show "" when printing str literals
to tell printf to advances to the next line, must include \n

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
*/