#include <stdio.h>

#define SIZE 1

void function(int x[SIZE]);

int main(void) {

    int x[SIZE] = {5};
    function(x);
    printf("%d\n", x[0]); // What does this print out?

    return 0;
}

void function(int x[SIZE]) {
    x[0] = x[0] + 10;
}
