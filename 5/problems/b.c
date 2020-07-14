#include <stdio.h>

void function(int x);

int main(void) {

    int x = 5;
    function(x);
    printf("%d\n", x); // What does this print out?

    return 0;
}

void function(int x) {
    x = x + 10;
}
