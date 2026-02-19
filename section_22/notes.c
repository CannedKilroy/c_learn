/*
File handling:

File pointer        Stream            Default-Meaning
- stdin             Standard input    Keyboard
- stdout            Standard output   Screen
- stderr            Standard Error    Screen

- declared as:
  File *fp1, *fp2;


Bash stream redirection:
- input redirection:
  - demo < in.dat // Pipes in.dat into demo
- output redirection:
  - demo > out.dat // Pipes output of demo into out.dat

C uses the type FILE to represent streams and as well as files
- printf sends output to stdout
- scanf reads input from stdin

printf to specific stream:
- int fprintf(FILE* restrict stream, const char* restrict format, ...);
- Example:
  int x=10;
  fprintf(stdout, "%d", x); // equivalent to printf("%d", x);

File operations:
- read from file:
  fscanf: int fscanf(FILE * restrict stream, const char * restrict format, ...);
- open file: fopen
  - FILE* fopen (const char* restrict filename, const char* restrict mode);
  - int fclose (FILE* stream); // returns 0 if closed correctly
  - Example:

      // Opens for reading, writing, and closes
      File *fp1, *fp2;
      FILE* fp = fopen("in.txt", "r");
      FILE* fp2 = fopen("out.txt", "w");

      fclose(fp);
      fclose(fp2;)
- Example:
FILE* fp = fopen("out.txt", "w");
int x = 10;
fprintf(fp, "%d", x);
fclose(fp);
  
*/

/* Program searches for a line that begins with an integer and returns that
integer. Program checks for errors before and during reading the file */
#include <stdio.h>
#include <stdlib.h>
int main (void){
    FILE *fp = fopen("test_read_file.txt", "r");
    int n;
    if (fp == NULL){ /* can't open file */
    fprintf(stderr, "ERROR: input.txt does not exist.\n");
    exit(EXIT_FAILURE);
    }
    // fscanf tries to read interger
    while (fscanf(fp, "%d", &n) != 1){
        if (ferror(fp)){
        /* read error*/
        fclose(fp);
        fprintf(stderr, "A read error has occurred. Program exited\n");
        exit(EXIT_FAILURE);
        }
        if (feof(fp)){
        /* end of file reached before integer is found */
        fclose(fp);
        printf("The input file does not contain lines that begin with an
        integer\n");
        return 0;
        }
        fscanf(fp, "%*[^\n]"); /* skips rest of line */
        }
    fclose(fp);
    printf("Found a line that begins with %d\n", n);
    return 0;
}
