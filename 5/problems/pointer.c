#include <stdio.h>

int main(void) {

    int age = 10;

    int *agePointer = &age;
    
    printf("%p\n", agePointer);
    printf("%d\n", *agePointer);
    // * &
    
}
