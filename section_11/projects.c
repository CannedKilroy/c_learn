/*
gcc -Wall -Werror -std=c99 ./section_11/projects.c -o ./section_11/projects.out && ./section_11/projects.out

*/
#include <stdio.h>
void max_min(int array[], int *min, int *max, int size){
    for (int i=0; i<size; i++){
        if (array[i] > *max){
            *max = array[i];
        }
        if (array[i] < *min){
            *min = array[i];
        }
    }
}
int main(void){
    // Program pg 274
    int array[100] = {0, [6] = 10};
    int min = array[0];
    int max = array[0];
    max_min(array, &min, &max, sizeof(array)/sizeof(array[0]));
    printf("min: %d\n", min);
    printf("max: %d\n", max);
}