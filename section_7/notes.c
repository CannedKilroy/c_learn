/*

Pg 150 (pg 125)

General Information:
-----------------------------------------------------------------------------------------------
- 1 byte = 8 bits
- char is always 1 byte
- Course assume int is 4 bytes ie 32 bits

- given 8 bits, the max is 11111111 which is 256
- given n bits, the max decimal number is 2^n - 1


Signed Intergers:
- Be default, intergers are signed in c
- Can store positive and negative values
- For signed 16-bit intergers, the largest positive number that can be stored
  is 01111... which is 2^(16-1)-1 = 2^(15)-1 (notice the -1 is for sign bit)
- For signed interger of n bits, the range is:
  -2^(n-1) to 2^(n-1)-1

- Example of storing positive 12 in 8 bit signed int
  int a = 12;
  Convert to binary 8 bits
  00001100
  Store in memory

- Example of storing negative 12 in 8 bit signed int
  int a = -12;
  Start with positive 12
  00001100
  Flip the bits
  11110011
  Add 1 in binary
  11110100

  Essentially, if positive number store as it, if negative, flip bits add 1. 
  To go back for negative number, add 1, flip bits. 


Unsigned Intergers:
-----------------------------------------------------------------------------------------------
- Can only store positive numbers
- Given 8 bits, the max number that can be stored is 11111111 which is 255
- Given n bits, the largest number that can be stored is 2^(n) - 1
  ie, 0 to 255

When reading or writing an unsigned int, use letter u,o,x instead of d
in the conversion specifer. If u then decimal, o for octal, x for hex
Examples:
unsigned int u;
scanf("%u", &u); // Read u in base 10
printf("%u", u); // writes u in base 10

When reading or writing a short int, put the letter h infront of d, o, u, or x
short s;
scanf("%hd", &s);

When reading or writing a long int, put the letter l infront of d, o, u, or x
long l;
scanf("%ld", &l);

Base Interger types:
- char
- short
- int
- long
- long long

These can all be modified with signed and unsigned
except for char. These are all their own type:
char
signed char
unsigned char


Notice some of these are redundant:
- long signed int is the same as long int since ints
  are always signed unless otherwise specified
- the order of specifiers doesnt matter either.
  unsigned short int
  short unsigned int
- in C, you can omit int altogether and abbreviate
- long int to long

- long long:
   -long long int and unsigned long long int are required
   to be atleast 64 bits wide, so the range is for 
   long long int is -2^63 -> 2^63 - 1 and for 
   unsigned long long int is 0 -> 2^64 - 1
   - add ll after interger constant to denote long long

The type of an decimal constant without a suffix is the "smallest"
of the types, int, long int, or long long int that can represent the value
of the constant. Example int x=5; Makes no guarentee of how many bits int has
Need to use sizeof()

Example: 001101 + 110010 + 110011
   11  11   // carry (The 1 overflowed)
a = 011011  // 27
b = 110011  // 51
    001110  // 14 so we get the correct answer, since the overflow is discarded
            // So we get the same as subtracting but instead we just added


Interger overflow:
- when 2 ints are operated on, its possible the result is too big
  to represent.
- For signed ints:
  - undefined behaviour
- For unsgined ints:
  - you get the correct answer % 2^n, where n is the number
  of bits used to store the result
  Example: if you add 1 to the 16-bit signed int 65535 you get 0
Note: If interger overflow happens and you need to increase the size,
you need to also adjust its scanf and printf's


Decimal numbers:
- contain digits between 0 and 9 but must not begin with 0

Octal numbers:
- written using only digits 0 to 7
- each position represents a power of 8
- must begin with a zero

Hex numbers:
- written using digits 0-9 and letters A to F (10 to 15)
- must begin with 0x

Note: You can mix types. 10 + 015 + 0x20 is 55 in decimal
Note: To force compiler to treat a constant as long interger
      you can append a l or L. 
      Ex: 15L or 03770l
Note: To force compiler to treat a constant as unsigned
      you append a U or u.
      Ex: 15U 0x7fffu
Combination Ex: 0xffffffUL or 0xffffffLU (order does not matter)

Section 7.2 page 157
Floating types:
- float, double, long double

Storing floats:
- follow IEEE 754
- refer to paper notes.
- floating constants
  Examples: 57.0, 57. , 57e0 , 570.e-1
- by default float constants are double precision

Section 7.3 pg 159
Char type
- are just small ints
- 'a' has the value 97, 'A' the value of 65, ' ' the value of 32
Example:
char ch;
int i;

i = 'a'; // i is not 97
ch = 65; // ch is not 'A'
ch++;    // ch is now 'B'

Escape sequences
alert bell \a
backspace \b
form feed \f
newline \n
carriage return \r
horizontal tab \t
verticle tab \v
backslash \\
question mark \?
single quote \'
douuble quote \"

Using getchar and putchar pg 165
- putchar(ch); writes a single charecter
- ch = getchar(); reads a charecter and stores it in ch
  Note: It actually returns an int. Getchar doesnt skip whitespace
- Lends well to various idioms
do {
  scanf("%c", &ch);
  while (ch!= '\n');
}
vs
while ((ch = getchar() != '\n'));

Section 7.4 Type conversion
Implicit:
- quite complex but as general rule of thumb it 
- Happens when:
  - operands in logical expressions arent of same type
  - the type of the expression on right hand side doesnt match type of the variable on the left
  - the type of an arg in the function call doesnt match type of its corresponding parameter
  - the type of the expression in a return statement doesnt match function return type
The compiler will convert to the narrowest type that safely 
accomodates both types (narrower meaning fewer bytes in memory)
The types of of the operands can often be made to match by converting
the operand of the narrower type to the type of the other operand
(called promotion). Most common is integral promotions
which convert CHAR or short INT to int

Example of promotions: float -> double -> long double
int -> unsigned int -> long int -> unsigned long int
Examples:
char c;
short int s;
int i;
unsigned int u;
long int l;
unsigned long int ul;
float f;
double d;
long double ld;

i = i+c; // c is converted to int
i = i+s; // s is converted to int
u = u+i; // i is converted to unsigned int
l = l+u; // u is converted to long int
ul = ul +l; // l is converted to unsigned long int
f = f+ul; // ul is converted to float
d = d+f; // f is converted to double
ld = d + ld // d is converted to long double

Conversion during assignment pg 171:
- narrower to wider is no issue
  ie i=c converts c to int
  ie f=i converts i to float
  ie d=f converts f to double
- wider to narrower may not work
  ie f=i chops off the decimals in the float
  Other examples may be complete garbage or give compiler warning



Explicit: pg 172
- use cast operator:
  (type name) expression
- can be used to avoid overflow
  Example:
  long i;
  int j=1000;
  i = j*j;
  Instead we do
  i = (long) j*j;

Section 7.5 Type definitions pg 174
Example: typedef int Bool;
Compiler now recognizes Bool as a built in type of int
Like Bool flag; same as int flag;

Makes programs more readable:
typedef float Dollars;
Dollars cash_int, cash_out;
vs
float cash_in, cash_out;

Also makes it easier to modify a program and more portable
So for example we can do:
typedef int quantity;
quantity q;
And if we need to run this on a 16bit machine not 32
we can change the defn of quantity. Printf and scanfs
for example will still need to be updated tho 

Section 7.6 Sizeof operator pg 176
- Size of certain type in memory in bytes
- sizeof(char) is always 1
- use %zu specifier for size_t
*/
