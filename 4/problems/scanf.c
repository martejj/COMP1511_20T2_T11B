#include <stdio.h>

int main(void) {
    
    int number = 0;
    
    int returnValue = scanf("%d", &number);
    
    printf("returnValue = %d, number = %d\n", returnValue, number);
    // EOF
    return 0;
}

