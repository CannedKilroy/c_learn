// gcc -Wall -Werror -std=c99 ./section_3/projects.c -o ./section_3/projects.out && ./section_3/projects.out

#include <stdio.h>

int main(void){

    // Project 1
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%d%d\n", month, day, year);
    
    
    // Project 2
    int item_num;
    float unit_price;
    int mm, dd, yyyy;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item        Unit        Purchase\n");
    printf("            Price       Date\n");
    printf("%d          $  %.2f    %-d/%-d/%-d\n", item_num, unit_price, mm, dd, yyyy);

    // Project 3
    // 13 digits, 5 groups,

    int gsi_prefix, group_identifier, publisher_code, num_item, check;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_identifier, &publisher_code, &num_item, &check);
    printf("GSI prefix: %d\n", gsi_prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", num_item);
    printf("Check digit: %d\n", check);

    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }

    // Project 4
    int area_code, secondgroup, lastgroup;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &secondgroup, &lastgroup);
    printf("You entered %d.%d.%d\n", area_code, secondgroup, lastgroup);

    // Project 5
    printf("Enter the numbers from 1 to 16 in any order:");
    // should use some kinda array, but havent learnt yet.
    // i aint doin all dat without an array
    
    return 0;
}