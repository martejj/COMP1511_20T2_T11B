#include <stdio.h>

void function(int x);

int main(void) {

    int y = 5;
    function(y);
    printf("%d\n", y); // What does this print out?

    return 0;
}

void function(int x) {
    x = x + 10;
}
