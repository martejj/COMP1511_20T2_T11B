// Written by: 
// A program to determine whether a user is a highschool student or not.

#include <stdio.h>

#define FIRST_HIGHSCHOOL_YEAR 7
#define LAST_HIGHSCHOOL_YEAR 12

int main(void) {

    int userYear = 20;
    printf("What year are you in? ");

    scanf("%d", &userYear);
    
    if (userYear >= FIRST_HIGHSCHOOL_YEAR && userYear <= LAST_HIGHSCHOOL_YEAR) {
        printf("You are in high school\n");
    } else {
        printf("You are not in high school\n");
    }
    return 0;
}
