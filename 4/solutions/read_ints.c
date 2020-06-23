#include <stdio.h>

#define MAX 100

int main(void) {
    
    int nScanned = 0;
    int array[MAX];
    
    while (scanf("%d", &array[nScanned]) == 1) { 
        nScanned++;
    }
    
    printf("%d\n", array[0]);

    return 0;
}
