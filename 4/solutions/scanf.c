#include <stdio.h>

int main(void) {
    
    int age;
    printf("Enter your age: ");
    int returnValue = scanf("%d", &age);
    printf("Scanf returned: %d\n", returnValue);
    
    return 0;

}
