/*
gcc -Wall -Werror -std=c99 ./section_9/del.c -o ./section_9/del.out && ./section_9/del.out
*/
#include <stdio.h>
void print_array_structs(struct person array[], int len){
    for (int i=0; i<len; i++){
        printf("%d\n", array[i].height);
        printf("%d\n", array[i].name);
        printf("%d\n", array[i].cities_visited[0]);
    }
}

int main(void){
    int max_cities = 0;
    scanf("%d", &max_cities);

    struct person {
        int name;
        int height;
        // List of id's for cities visited for example
        int cities_visited[max_cities];
    };
    // 1d array of structs
    struct person array[max_cities];
    for (int i=0; i<max_cities; i++){
        array[i].name = 1;
        array[i].height = 1;
        array[i].cities_visited[0] = 1;
    }
    print_array_structs(array, max_cities);
    return 0;
}