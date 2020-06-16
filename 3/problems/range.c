#include <stdio.h>

int main(void) {
    
    printf("Enter the finish number:");
    
    int finish = 0;
    scanf("%d", &finish);
    
    printf("Enter the start number:");
    
    int start = 0;
    scanf("%d", &start);
    
    int i = start;
    while (i <= finish) {
        printf("%d\n", i);
        i++;
    }
    

    return 0;
}
