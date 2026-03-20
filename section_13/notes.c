/*

Example:

String Literal:
- a sequence of characters enclosed in double quotes
- Example: "hello there sir."

String literal across multiple lines:
- use \ at the end
- Example:
printf("When you come to \
  the fork in the road\n");

Can also use the trick that when two or more string literals 
are adjacent, seperated only by whitespace, the compiler will join them
into a single string. 
Example: printf("When you come to a fork " "in the road take it\n");

How string literals are stored:
- they are stored as char arrays with a null charecter at the end
- compiler treats it as a pointer of type char *
Example: printf("abc"); its passed the address of "abc"
- since pointer can be subscripted, so can str literals
Example:
  char ch;
  ch = "Hello"[1] // ch is now e
  ch = "Hello"[5] // ch is now \0
However, string literals cannot be modified.
Example:
  char *p;
  p = "Today is tuesday"
  *p = 'R' IS WRONG

Note:
- single value strings like "a" are not the same as the charecter 'a'
'a' has type char ie int, whereas "a" has type char * ie pointer to a char

String variables:
- a string variable is a 1d charecter array with a \0 terminator. 
- so when creating string variables always make sure to leave room for the \0 
  charecter at the end

Initializing a string variable:
Example: char date1[8] = "June 14"; is in memory |J|u|n|e| |1|4|\0|
The compiler views this as an array initializer
ie you could also write:
  char date1[8] = {'J','u', ... '4', '\0'};
The compiler will add the null terminator, since it knows this is a string variable. 

  Case: String is too long for the array:
    - The compiler doesnt add \0 if its exactly one charecter longer
    - If its more, standard array initializing rules of intializer cant be longer
      then array apply
  Case: String is too short for the array:
    - The compiler pads the empty spaces with \0 
  Case: Array length not give:
    - The compiler will calculate the correct array length of
      n+1 for string of length n
  Note:
    - char *date = "June 14" is a string literal, not a string variable. 
    String literals cannot be modified but can be used as strings.
    String variables can be modified.
    The char * can be used as a string since its a string literal

Reading and writing string:

- writing: printf or puts
- Example:
  char str[] = "Hello"
  printf("%s", str);
  Note: If the null terminator is not present, 
  printf will keep printing till it finds one
%s conversion specifier:
  %.ps where p is the number of chars to print (precision)
  Example:
    printf("%.3s", "Hello")
    prints: Hel
  %ms where m is the field width. If it is less it will be right justified
  Can use - to left justify
  Example:
    printf("%s", "Hi")
    prints:_Hi
Puts:
- much simpler. Has only 1 arguement (a string to print)
  puts automatically insert a newline at the end

- reading: scanf, gets, getchar in a loop with array
- scanf
- Example:
  char string[];
  scanf("%s", str)
  Note: %s skips leading whitespace, reads chars,
  and stops at the next whitespace. Ie it can only read
  words. Scanf always stores the null terminator.
Since scanf stops at whitespace, we cant use it to read
a full line since it will stop at whitespace. 

Instead we use fgets:
Example:
char buff[100]
fgets(buff, sizeof(buff), stdin);
Note:
  - fgets doesnt skip leading whitespace
  - fgets reads until a \n or n-1 chars are read, or eof
    Whichever comes first
  - returns the read string if successful, NULL otherwise
  - it discards the \n, the null terminator takes its place
  - Always includes null charecter at the end

String traversal:
- Since strings are just char arrays with a null terminator,
  we can use subscripting and pointers to traverse them

Example:
int count_spaces(const char *s){
  int count = 0;
  for (;*(s) != '\0'; s++){
    if (*(s) == ' '){
      count++;
    }
  }
    return count;
}

Some basic string function in the std lib:
- strcpy(s1,s2): Copies string array s2 into s1
  up to and including the first null char
  Note it does not end checking. It will just keep copying till it
  finds a null charecter
- use strncpy instead:
  strncpy(s1, s2, n) where n limits the number of chars to copy
  usually use sizeof(s1) however it will not always append a 
  null charecter
- strlen(s1):
  returns size_t ie unsigned int type, treat as an int
  returns size of a string up to but not including the null charecter
-strcat(s1, s2):
  appends s2 to s1
  UB if s1 not big enough
- use strncat instead
- strcmp(s1, s2):
  returns 0 if they are equal, val < 0 if s1 < s2
  
String idioms:
- searching for the end of a string:
size_t strlen(const char *s){
  size_t n = 0;
  for ()

Array of strings:
Example: char *planets[] = {"merucry", venus, ...}
So now each element is a pointer to a null terminated stringf

Note:
  Since printf and scanf expect the first arguement to be of type char *
  we can use a string variable instead
  Example:
  char fmt[] = "%5d";
  int i;
  ...
  printf(fmt, i);
Note:
  you can pass a string directly to printf but its risky since the str might
  comain a % which printf would think is the start of a conversion specifier
  example: char str[] = "gel"; printf(str)
}






- int main(int argc, char *argv[])
  
  Means:
  - argc means arguement count (including name of the program itself)
    This is usually 1 + # of args
  - argv means arguement vector. It is an array of pointers to the 
    command line arguements

    argv[0] points to the name of the program,
    while argv[1] ... argv[argc-1] are remaining cmd line args
    
    argc has one additional element argv[argc] which is a null pointer

    Example: 
    - ls -l remind.c
      - argc will be 3
      - argv[0] = str program name "ls"
      - argv[1] = str "-l"
      - argv[2] = str "remind.c"
      - argv[3] = null pointer

    You can do something like:
    int i;
    for (i=1; i<argc; i++){
      printf("%d\n", argv[i]);
      }
*/