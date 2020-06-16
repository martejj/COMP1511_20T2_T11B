#include <stdio.h>

int main(void) {
    
    printf("Please enter an integer: ");
    int size = 0;
    scanf("%d", &size);
    
    int row = 0;
    while (row < size) {
        int col = 0;
        while (col < size) {
            if (row == col) {
                printf("*");
            } else {
                printf("-");
            }
            col++;
        }
        printf("\n");
        row++;
    }
    
    return 0;
}
