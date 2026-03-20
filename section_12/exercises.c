/*
base_address + (i * sizeof(int))
Pg 298
gcc -Wall -Werror -std=c99 ./section_12/exercises.c -o ./section_12/exercises.out && ./section_12/exercises.out
*/
#include <stdio.h>

// Print array passing pointer
void print(int *a, int n){
    printf("Printing array a of size: %d\n", n);
    for (int i=0; i<n; i++){
        printf("%d ", *(a+i));
    }
    printf("\n\n");
}

int main(void){
    /*
    Exercise 1:
    int a[] = {5,15,34,54,14,2,52,72};
    int *p = &a[1], *q = &a[5];
    a). *(p+3) means (address in p) + (3 * sizeof(int))
        so this is *(&a[4]) which is 14
    b). *(q-3) means (address of q) - (3*sizeof(int))
        so this is *(&a[2]) which is 34
    c). q-p means &a[5] - &a[1] = 5-1 = 4
    d). p<q? true
    e). *p<*q means 15<2? False

    Exercise 2:
    middle = (low + high) / 2;
    low and high are pointers, so low + high is simply an interger. 
    /2 might not be interger. Need floor or cast to int. cannot add 2 pointers
    Fix: middle = low + (high - low) / 2;

    Exercise 3:
    #define N 10;
    int a[N] = {1,2,3,4,5,6,7,8,9,10};
    int *p = &a[0], *q = &a[N-1], temp;
    while (p<q){
    temp = *p;
    *p++ = *q;
    *q-- = temp;
    }
    It simply reverses the list.
    On the first iteration, temp is a[0] which is 1
    *p = *q ie a[0] = a[9] and now p = &a[1]
    a[9] = a[0] and now q = &a[8]

    Exercise 5:
    p = a means p points to &a[0]
    a). False. p is not the value of a[0] it is the address
    b). True. It is the address
    c). True. Dereferenced p is the value at a[0]
    d). False. Cannot subscript a pointer
    WRONG. YOU CAN. p[i] is defined to be *(p+i)

    Exercise 6:
    //
    int sum_array(const int a[], int n){
    int i, sum;
    sum = 0;
    for (i=0; i<n; i++){
      sum += *(a+i);
      }
    }
    //
    But to eliminate i we can do:
    int sum_array(const int a[], int n)
    {
    int sum = 0;
    const int *end = a + n;

    for (; a < end; a++)
        sum += *a;

    return sum;
    }

    Exercise 7:
    bool search(const int *a, int n, int key){
    const int *end = a+n;
      for (int i=0; i<n; i++){
        if (*(a+i) == key){
        return true;
        }
      }
      return false;
    }
    Exercise 8:
    void store_zeroes(int *a, int n){
      int i;
      for (i=0; i<n; i++){
        *(a+i) = 0;
      }
    }
    
    Exercise 9:
    double inner_product(const double *a, const double *b, int n){
      double end = a+n;
      double sum = 0;
      for (; a<end; a++){
        sum += *(a+i) * *(b+i);
      }
    }

    Exercise 12:
    void find_two_largest(const int *a, int n, int *largest, int *second_largest){
    *(largest) = *(a); // Asign largest to a[0]
    *(second_largest) = *(a); // asign sec largest to a[0]
    int *end = a+n
    for (;a+1<end; a++){
        if ( *(a) > *largest ){
          *(largest) = *(a);
        }
        if ( *(a) > *second_largest ){
          *(second_largest) = *(a);
        } 
      }
    }

    Exercise 14:
    When int arr[m][n] is used in function parameter and passed in,
    it decays to int (*)[n] on its own.

    Example:
    void f(int m, int n, int a[m][n])
    Decays to:
    void f(int m, int n, int (*a)[n])

    Example:
    void f(int m, int n, int (*a)[n])
    Now passing a pointer to array of ints rowsize n explicitly.
    Since not passing array there is no decaying.
    
    
    int (*)[24] means pointer to array of 24 ints
    search (temperatures, 7*24, 32)
    bool search(const int a[], int n, int key); 

    */

    int a[10] = {4,5,6,7,8,9};
    printf("a: \n");
    print(a, 10); 
    print(&a[0], 10);
    print(&a[5], 10);
    int *p = &a[0]; // pointer to a[0]
    *p = 99; // Derefence and assign
    printf("Looping through a with pointers\n");
    for (int i=0; i< 10; i++){
        printf("%d\n", *(p+i));
    }
    printf("Printf a[0] is now: %d\n", a[0]);

    printf("Get the value then increment: ++*p: %d\n", ++*p);
    printf("Increment the pointer then dereference: *++p: %d\n", ++*p);

    int *q;
    int x = 55;
    q = &x;
    printf("%d\n", *++q);

}