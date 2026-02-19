/*
pg 193
Arrays:

One-dimensional Array:
- Arrays are homogenous, must contain the same type
- syntax: type name[len];
- can use a macro like:
  #define N 10
  ...
  int a[N]; since array size needed to be known at compile time

  However C99 allows VLA's

- Array initializing:
  - Most commen is a list of constant expressions enclosed by {} and seperated by commas
  Example:
    - int a[10]= {1, 2, ..., 10};
    - if the initializer is shorter than the array, the remaining elements
      are given the value of 0 (in that type)
    - a[5] = {1, 2, 3} // this means a = {1, 2, 3, 0, 0}
    - char s[5] = {'H', 'i'} means s = {'H', 'i', '/0', '/0', '/0'}
    - etc
  - it is illegal for an initializer to be completely empty
  - it is also illegal for an initializer to be longer than the array
  - if an initializer is present the length of the array may be omitted,
    ie (the array uses len of initializer as length)

- Array designated initializers:
  - Example: int a[15] = {[2] = 22, [9] = 44};
  - Note order of each "designated initalizer" does not matter

- Array indexing: Just like python. a[0] ...
- expressions of the form a[i] are just lvalues,
  so you can treat them as normal vars.
  a[0] = 1;
  printf(.., a[5]);
  ++a[i];
- Can even do interger expressions in the array
  Like: a[i+j*10] = 0;
  OR:
  i = 0;
  while (i<N)
    a[i++] = 0;
  Note: ++i would not be correct since a[0] would never be assigned 

- for loops and arrays:
  // This clears a
  for (int i=0; i<N; i++){
    a[i] = 0;
    }
  // Read data into a
  for (int i=0; i < N; i++){
    scanf("%d", &a[i]);
    }
  // Sum elements in a
  for (int i=0; i<N; i++){
    sum += a[i];
    }
Note: C does not do bounds checking for arrays.
      Common causes is forgetting arrays are indexed o to n-1

Using sizeof operator with arrays pg 192
- determine the size of an array (in bytes). So if a is an array of 10 ints,
  then sizeof(a) is typically 40 (assuming each int requires 4 bytes)

Multidimensional arrays:
- int m[5] [9] // 5 rows and 9 columns
- note c stores it as row major order, with row 0 first, then row 1, 
  etc contigously
Initializing multidimentional arrays:
- if the inner list isnt long enough the remaining elesments are initialized to 0
- Example:
  int m[5][9] = {
    {1,2,3,4,5,6,7,8,9},
    {10,11,12,13,14,15...}
  } // The remaining rows are initialized with 0, you can even
   omit inner braces

Constant arrays:
- A constant array cannot be modified at runtime
- Example:
  const char hex_chars[] = {...}
- Advantages:
  - Doucments that the array doesnt change
  - Helps the compiler catch errors


Variable length arrays (VLA's):
- in c99, it is not nessicarily the case that
  you need a constant expression for array length
- Example: scanf to get user to provide array length
- VLA lengths are computed at run time, not compile time
- Allows more efficent memory usage since you 
  know exactly what you need
- The only restriction placed on VLA's is that
  they cant have static storage duration (idk wtf that is)
  and no initializers

What happens when you initialize an array with an 
array designator and overide it later? Does it over write the ans?
- pg 201

Array assignment? Why cant you copy one array into 
another by simply assigning it?
- forget for now. Use for loop or memcopy
*/