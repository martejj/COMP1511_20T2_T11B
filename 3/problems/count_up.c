#include <stdio.h>

int main(void) {
    
    printf("Enter the finish number:");
    
    int finish = 0;
    scanf("%d", &finish);
    
    int i = 1;
    while (i <= finish) {
        printf("%d\n", i);
        i++;
    }
    

    return 0;
}
