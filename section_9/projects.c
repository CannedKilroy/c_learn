// pg 242
/*
gcc -Wall -Werror -std=c99 ./section_9/projects.c -o ./section_9/projects.out && ./section_9/projects.out
*/

#include <stdio.h>

void selection_sort(int array[], int size)
{
    if (size <= 1)
        return;

    int max_index = 0;

    for (int i = 1; i < size; i++) {
        if (array[i] > array[max_index]) {
            max_index = i;
        }
    }

    // swap max with last element
    int temp = array[max_index];
    array[max_index] = array[size - 1];
    array[size - 1] = temp;

    selection_sort(array, size - 1);
}

int main(void){

    // Project 1
    printf("Please enter some numbers: ");
    int sort_ints[100];
    int i=0;
    while (scanf("%d", &sort_ints[i]) == 1){
        i++;
    }
    selection_sort(sort_ints, 5);

    // Project 6 pg 242
    // ez
    


}