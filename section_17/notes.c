

/*

From Lecture:
Is Realloc to 0 same as free. Dont really need to worry about it
malloc
calloc realloc

Void pointer is not a null pointer
They return a NULL pointer if you cant do ...

It is the programmers responsability to test the value of any mem allocation function

void pointers are generic pointers but you dont know the type. usually with void pointers
you cast to some other kind of pointer

char *p = malloc(n+1)
Note how the compiler automaticclay casts the void pointer to char

Initialize a string allocated with malloc
char *p = malloc(n+1);
strcpy(p, "abc");
Since chars take 1 byte, 
Note you also cant do the char array initialization like char arr[] = "avc" that doesnt work

int *p = malloc(n*sizeof(int));
Note do not use a constant like 8 or something, since it varies computer to computer

Note you cant use p directly since you would loose the start of the array

void free(void *p)
free must only be used on pointers that were previously allocated on the heap

If you malloc lets say an array of size 100, then malloc another array, and then decide to 
extend array 1, you cant. The other array is in the way. So instead it will copy the array 1
to the cloestest  free block that will fit the entire thing. So for this example,
likely the block after array 2

Malloc can be used str arrays structs
calloc is mostly used for arrays
malloc is faster than calloc since it doesnt zero out the garbage
Note that, you need the temp pointer i think 

Implement remind program using dynamic memory allocation

Calloc:
- slower than malloc
- 

Note:
- it is ok to return a pointer created inside a function
  if that pointer points to something on the heap ie used
  malloc or calloc, since it exists forever till freed

*/
