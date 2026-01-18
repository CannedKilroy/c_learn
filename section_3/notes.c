/*
pg 62 / pg 37

questions:
-----------------------------------------------------------------------------------------------


printf:
-----------------------------------------------------------------------------------------------
- printf(string, expr1, expr2, ...);
- the format string can contain normal charecters
or conversion specifiers, with begin withh %
- does not do type conversion. If the arg type doesnt match the
  conversion specifier in the format str, it is undefined behaviour 
- if you want to print % inside printf, just place two
  printf("%%");

format specifiers
-----------------------------------------------------------------------------------------------
- general form for format specifier is;
  %m.pX 
  OR
  %-m.pX
  where, m and p are int constants, and X is a letter

  Example:
  %10.2f where m=10, p=2, and x=f

  Both m and p are optional
  - if p is omitted so is the decimal

  What is m?
    - The minimum field width
    - if the number is longer it is ignored
  
  What is P?
    - Precision
    - For %f: number of decimals after
    - For %d: min digits (0 padded to get the digits)
    - For %s: max charecters printed for strings
    - For %e: decimal after
  What are the steps?
    1. Convert the value. Ie to float, int, etc and to the right num decimals
    2. Compute total str length including decimal (Ex 44.3 len is 4) 
    3. Subtract total str length from total field width
      Ex if len is 4 and m=10, 6 spaces of padding
    4. Add the remainder as space padding
    5. Do the rest of the format str

  Note: Conversion happens first, padding last

  %e:
  - always exactly one digit before decimal
  - decimal always appears
  - exponent always has a sign + or -
  - always an e or E
  - exponent always has atleast 2 digits ex 03
  - precision is the number of digits after the decimal (6 is default)

 %g:
 - tries to print in shortest form, whether thats %f or %e
 - usually very small or large # is %e, rest likely %f
 - precision is sig digs in %g
   Example: printf("%.2g\n", 123.456); >> 1.2e+02
 - for a given precision p >=1, it rounds to p sig digs
 - 
  What is fixed?
  - what you specify, the f, min length, decimals are fixed. 

*/
