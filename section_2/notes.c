/*
Section 2 Notes
pg 34 pdf / pg 9 paper

Questions:
- For the box weight question, do you actaully need weight and volume vars,
  cant you compute on the fly and where is that stored? A temporary internal var?
  Yes, C will just create a temp value

- Why doesnt C throw errors more often. Like printing a var that 
  hasnt been assigned a value. 
  Ans: Its low level, thats your job.
- So does this mean that C allocates n bytes of memory for some object, even if its not all used,
  seems not very efficent? Is there some ending char to seperate it in memory, what if you go over?
  Like int32, and i only use 8 bits, why cant it cut it down to 8 bit int and just grow if needed?
  Ans: Its usually slower to copy data over. Also, then memory is more 
  fragmented. Its usually better to have a larger data strucuture instead
  Idea: Memory defragger, that, at a low point in execution, C
  copies everything into a contigous part of memory
  - What is the type heirachy or rules when adding different numeric types? int + float etc
  double + float is what. What can and cant you add
  Ans:

- Are escape sequences the samea as whitespace charecters??
  Ans: NO. Example, scanf will not strip \a
  Escape charecter like /a bell doesnt do any whitespace
- So if "%c" does not ignore whitespace, i can use "_%c" to ignore
  whitespace. I dont need to worry about non whitespace escp charecters,
  or stuff like that right. Does one overide the other?
  No, it does not, the only rule, whitespace i think,
  where they overlap, they work together.

  If i do "_%f" where it expects a space before. How do i do that.
  
  Answer: There is a way to clear the buffer as well
- What happens if we do, two scanf's, the first one takes in a charecter,
  and the second takes in a digit. If we pass a string with more than 1
  charecter, leaving some number of charecters in the stdin (since
  %c only pops a single char), the second scanf will fail, since it will
  read the left over char first, not the newer user input

- Best way to take notes, paper, or code:
  Takes notes on paper, since, you cant take notes as fast as the 
  prof talks, so you need to distill.

- Is the machine code it produces architecture specifc?
  Yes.

Directives
-----------------------------------------------------------------------------------------------
- Directives modify the program before compilation
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


Program to machine form:
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

functions // Must be declared before can be used

int main(void)
{
    declerations
    statements
}


Main Function:
----------------------------------------------------------------------------------------------
main function is special
- it is automatically called when the program is executed
- it returns a status ( an error code) code to tell the OS when it has terminated 
- 0 is no error, 1 is error
- however it is NOT a keyword oddly


Metadata:
----------------------------------------------------------------------------------------------
Every program should contain program name, date written,
author, purpose, etc


Types:
-----------------------------------------------------------------------------------------------
- Types affect how the variable is stored and what opperations can be 
  done on the variable. For numeric vars, the type dictates the
  largest and smallest numbers it can represent and whether there
  or not digits are allowed after the decimal.

- Each type of type, (1. char, 2. float, 3. ints), have their own coversion
  specifier. So %f for floats and doubles, unsgined double, etc

Interger types:
  - Use %d conversion specifier (d for digit)
  - Whole numbers
  - stored in 4 bytes (32 bits)
  - short int, unsigned short int, int,
    unsigned int, long int, unsigned long int 
  - can store any int from __ to __
  - Note dont do division of ints might not work out since
    C truncates the result
Floating type:
  - Use %f conversion specifier (f for float)
  - NOTE: that by default %f displays 6 digits 
  - float, double, long double 
    - can store numbers with digits after the decimal point
    - can store much larger numbers than an int
    - However, there are drawbacks. They are just approximations (lead to rounding errors),
      and operations on floats are slower 
Character types:
  - Use %c conversion specifier (c for char)
  - stored in 1 byte (4 bits)
  - A single charecter, like "G" or "D"


Declerations:
-----------------------------------------------------------------------------------------------
- Variables must be declared, before they can be used. 
- To declare, write its type and then name ;
- Example:
  int height;
  float profit;

- You can define many at once:
  int height, length, width, volume;
  float profit, loss;

- Note:
  For some older compilers, which were single pass, all declerations
  must come before all statements. You cant declare statement right
  before usage
  This is true still for func declerations. Functions must be declared
  before they cant be used. 

- Instantiation:
- Instead of declaring and assigning a var to a value
  you can simply just instantiate it directly
- Example:
  int profit = 55.55f;


Format Specifiers (Conversion Specifiers):
-----------------------------------------------------------------------------------------------
- %d for int variables (d means digit)
- %f for float variables
- %e for exponential form
- %g either exponential or fixed decimal form, whichever is shorter representation


Escape Charecters / Escape Sequences:
https://www.lix.polytechnique.fr/~liberti/public/computing/prog/c/C/FUNCTIONS/escape.html
-----------------------------------------------------------------------------------------------
These are special charecters that cannot be printed using double quotes
- backspace: \b (Moves the cursor one place backward)
- form feed: \f (Move the cursor to the start of the next logicaal pg)
- newline: \n   (Moves the cursor to the start of the next line)
- carriage return: \r (Moves cursor to the start of the current line)
- vertical tab: \v (Inserts vertical space)
- backslash: \\    (Insert backslash charecter)
- single quote: \' (Display a single quote mark)
- double quote: \" (Display a double quotation marks)
- question mark: \?(Display a question mark)
- octal num: \ooo
- hex num: \xhh
- null: \0
- percent: %%
- horizontal tab: \t (Inserts whitespace to the left of the cursor and moves the cursor accordingly)
- alert / alarm: \a (Generate a bell sound)


Whitespace Charecters:
A subset of Escape Charecters
-----------------------------------------------------------------------------------------------
- ' '  (space)
- \t   (tab)
- \n   (newline)
- \v   (vertical tab)
- \f   (form feed)
- \r   (carriage return)



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
- use scanf(str, &var1, &var2, ...);
- usually only contains conversion specifications
- Example: 
  int i;
  scanf("%d", &i) // Reads an int then stores it into i
- Can use conditional like scanf("%d",&i) == 1 to check
  if the value was correctly read. 0 is input didnt match %f
  and eof -1 end of input or input failure
- returns the number of successful variables read
- How scanf reads Intergers:
  1. Skips leading whitespace ie \n tabs etc
  2. Search for a +, -, or digit
  3. Start reading
  4. Read till reaching first non-digit
  5. Put that non-digit back into the input stream (stdin)
- For Intergers Example of valid inputs:
  42
  -17
  +8
  0000000123
- For Intergers Example of invalid inputs:
  .455


- How scanf reads floats:
  1. Skips leading whitespace ie \n tabs etc
  2. Search for a +, -, digit, or decimal point
  3. Then continue reading a series of digits (possibly containting a
  decimal point if it hasnt encounterd one as the first charecter)
  4. Lastly look for a possible (e or E) plus an optional sign (+\-) plus more digits
- For Floats Example of valid Inputs:
- For Floats Example of invalid inputs:
- Example of invalid inputs:

- How scanf reads charecters:
  - Always reads exactly one charecter
  - Does not ignore leading white space. You must add "_%c" to ignore whitespace,
    where _ is a space. 
pass

How scanf format strings work:
- This is how scanf allows formatting, ignoring whitespace, etc.
(THIS IS NOT THE SAME AS %c CONVERSION SPECIFIER)
- How scanf format strings work:
  1. Whitespace characters in the format string will match any number of whitespace
     characters in the input string, including none
     (This means as example, \n\n\t\t\n      7, it will read just the 7 if you put the space infront)
  2. It reads only a single charecter. So if i do hh<ENter>
     only h will stored. The other h will stay in the stream. 

  (So for example, if i do "_%d", %d automatically ignores leading
  whitespace, and the _ ignores whitespace. The _ space is redundant. )
  Scanf reads linearly through the str formatter. So the _ comes first
  to ignore leading whitespace. 

  Another example:
    - scanf("%d/%d", &i, &j);
    input: "5/_9" works
    input: "5_/9" does not. It reads the 5, and immediatly 
    expects the slash, not a space.
  
  Another example:
  float a,c ;
  float b ;
  scanf("%f/%d %f", &a, &b, &c);
  If you enter "2.3/3.36__20", then, a=2.3, b=3, and c=.36

  digits till reaching non-digit, then put the 
  non-digit back into the input stream.
- Usually don't put a newline in scanf
  to make it look like the user inputs 
  on the same line as the printf statement
- if you pass the wrong data type into it just crashes
  ie, scanf enforces type


Macro Definition:
-----------------------------------------------------------------------------------------------
- Use for constants such as pi or similar constant values
- By convention, fully capitalized
- The Preprocessor substitutes the identifier with the value
  anytime it encounters it in the code. 
- Example:
  #define INCHES_PER_POUND 166
- Why use Macro Definition?
  - Single source of truth
  - More readable then raw numbers strewn everywhere
  - They are not typed because they DNE really. You can a suffix to
    give the subbed in value a type i think.  
  - Dont use memory


Identifiers:
-----------------------------------------------------------------------------------------------
C is a small lang so there are minimal keywords to have a collision with. 
However, an identifier must begin with a letter or underscore, and may
contain letters, digits, or underscores. 
Note: You CANNOT USE - dashes anywhere in an identifier


Tokens:
-----------------------------------------------------------------------------------------------
Not difficult. Use whitespace and block program logically.


GCC flags:
-----------------------------------------------------------------------------------------------
- Wall: Cause the compiler to produce all warning message when it detects possible errors.


Printf Conversion Specifiers Form:
-----------------------------------------------------------------------------------------------
%m.pX
OR
%-m.pX

- where m is an optional int that spcieifes min field width
- where - for left justification
- where p is optional int that indicates prcision. if removed so is the period
- where X is required letter for the var type


Example: printf("%10.5f",67);
Must have 10 spaces. 
Output>> _____00067


How memory works overview:
-----------------------------------------------------------------------------------------------
- all vars are stored in memory in binary
- 1 byte is 8 bits. A bit is the lowest form, a single box.
- functions like printf need to know the type of the var
  so the compiler knows how much data to read and how to interpret

an 32bit int is stored in 32 bits or 4 bytes
treat ints as 4 bytes. most computers are 64 bit
char is only stored in 1 byte

C doesnt know what x is, but it knows what the memory addess
of x is. 
*/
