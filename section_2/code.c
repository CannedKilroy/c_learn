# include <stdio.h>
// gcc code.c -o code && ./code

int main(void)
{
    printf("To be or not to be. That is the question\n");

    printf("To be or not to be. ");
    printf("That is the question \n");

    // Note how these print the same thing

    float profit;
    profit = 255.5f;
    printf("%d\n", profit); // This is wrong. Specified int but profit is float
    printf("%.2f\n", profit);

    int height, width, length;
    int volume;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    printf("%zu\n", sizeof(volume));
    printf("Height: %d\n", height);
    printf("Volume: %d\n", volume);
    return 0;
}