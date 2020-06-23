#include <stdio.h>

#define TRUE 1
#define FALSE 0

int isEven(int number);

int main(void) {
    
    printf("%d\n", isEven(278918));
    
    return 0;
}

int isEven(int number) {
    
    int returnValue = 0;
    
    if (number % 2 == 0) {
        returnValue = TRUE;
    } else {
        returnValue = FALSE;
    }
    return returnValue;
    
}

