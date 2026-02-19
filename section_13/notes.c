/*

Example:
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