/*


pg 340

From  the textbook:
A macro is a name that represents something else
Example:
  The preprocessor responds to a #define by storing
  the name of a macro along with its defn.
  When the macro is used later on in the program,
  the preprocessor "expands" the macro ie insert it into the
  program  

#include:
- Tells the preprocessor to open a particular file
and include its contents as part of the file being compiled
Example:
  #include <stdio.h>

Since the flow of compilation is:
- preprocessor -> compiler -> linker,
  the preprocessor executes these directives first,
  thus removing them

The preprocessor also replaces comments with a single space char

You can use the -E flag in GCC to view the output of the
preprocessor after it is done.
Note that since it has a limited knowledge of C, it might create
illegal programs.

Pg 343
Preprocessing directives:
- 3 categories:
  -  Macro definition:
    ie the #define, and #undefine
  - File inclusion:
    ie #include
  - Conditional compilation:
    - ie #if, #ifdef, #ifndef, #elif, #else, #endif
  Remaining directives:
  - #error, #line, #pragma

Rules for directives:
- always begin with #
- any number of spaces or horizontal tabs can seperate a directive and its args
- always end at the first \n unless explicitly continued

Macro defintions:
- The preprocessor supports not only the simple macros
  weve been using so far, but also parameterized
  macro defintions
  - Simple macros:
    - Is of the form:
      #define identifier replacement-list
      where replacement-list is any sequence of 
      preprocessing tokens.
      It may include identifiers, keywords, numeric constants, char constants,
      str literals, operators, and punctuation. 
    Note:
      - do not put any extra symbols in a macro definition. 
      Like #define N = 100 or #define N = 100;
      this is wrong. If we do int array[N] this becomes int array[= 100]
    It is even possible to modify C's syntax like for example:
    #define BEGIN {
    #define END }
    if you like pascal
    OR
    #define LOOP for (;;)
    THough this usually isnt a good idea

    -Renaming types:
      For example: #define BOOL int
      Although you should use type def instead
    - Conditional compilation. Like #define DEBUG 
      if youre in debug mode
  - Parameterized macros: pg 346d
    - Ie a function-like macro
    - Is of the form:
      #define identifier(x1, x2, x3, ..., xn) replacement-list
    - Example:
      #define MAX(x,y) ((x)>(y)?(x):(y))
      #define IS_EVEN(n) ((n)%2==0)
      We can use these as simple functions
      Advantages of function like macros:
      - slight speed increase, macro invocations have 0 runtime overhead
        when compared to an actual function
        note that c99 inline functions make this moot tho?
      - they are generic. no types. they can accept args of any type
        as long as its valid after proprocessing
      Disadvantages:
      - larger compiled code usually since you need to insert all of that
        code in 
      - no type checking. theres no checking by the preprocessor or converting
      - not possible to have a pointer to a macro but you can to a function
      - it many evaluate args more than once which can lead to bugs if theres sideeffects
      - best to avoid side effects in args of func like macros

      They are also good for segments of code that are repeated many times
      ie printf("%d\n", i);
      might do:
      #define PRINT_INT(n) printf("%d\n", n)
    
  
  - The # ## operators:
    - The # converts a macro arg into a string literal
      We can do:
      #define PRINT_INT(n) printf(#n " = %d\n", n)
      So this:
      PRINT_INT(i/j);
      Becomes:
      printf("i/j" " = %d\n", i/j);
      Note: There must be no space between macroname and left parenthesis

    - The ## operator:
    - can "paste" 2 tokens together to make a single token
    - Example:
      #define MK_ID(n) i##n

      If we call it like:
      MK_ID(1)
      then the preprocessor first replaces the paramenter n by the arg ie 1
      and then joins i and 1 to make the single token (i1)
    - As example:
    #define GENERIC_MAX(type) /
    type type##_max(type x, type y)/
    { /
    return x>y ? x:y; / 
    } /

    So if we called it like:
    GENERIC_MAX(float)
    this becomes:
    float_max(float x, float y) {return x>y ? x:y;}

    Note: macros can call other macros. in which case the preprocessor
    scans as many times as needed to remove all macro names

    Why all the parenthises?
    - using fewer can lead to weird bugs
    the rule is if there is an operator always enclose the entire thing in brackets
    and if it has parameters put each parameter in brackets

    Creating longer macros: pg 353

    Predefined macros: pg 354
    __line__ line number of file being compiled ...

    Can use like:
    printf("Compiled on %s at %s\n", __DATE__, __TIME__)

    Empty macro args pg 356
    Example:
    #define ADD(x,y) (x+y)
    i = ADD(j,k) becomes i = (j+k)
    whereas
    i = ADD(,k) becomes i = (+k)

    Varaible number of args pg 357
    Example:
    #define Test(condition, ...)

    The __func__ identifier:
    stores the name of the currently executing function

    Allows us to write something like: pg 359
    #define FUNCTION_CALLED() printf("%s called\n", __func__)

    #if and #endif directives
    Note: undefined macro identifiers are treated as value of 0
    so #if DEBUG
    works 
    but #if !DEBUG will succeed

    defined operator pg 360
    Example:
    #if defined(DEBUG)

    or 
    #if defined DEBUG
    both are correct

    #ifdef identifier
    shorthand for #if defined(identifier)

    #ifndef identifier
    shorthand for #if !defined(identifier)



From lecture
#if checks for non zero value
#ifdef DEBUG checks to see if DEBUG is defined or not
#ifndef is inverted, if it is not defined

The macro in the code happens after the compiler flags
so it will overiride the compiler value. This is true
except for undef.
*/