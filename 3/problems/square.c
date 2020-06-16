#include <stdio.h>

int main(void) {
    
    printf("Please enter an integer: ");
    int size = 0;
    scanf("%d", &size);
    
    int i = 0;
    while (i < size) {
        printf("*\n");
        i++;
    }
    
    return 0;
}
