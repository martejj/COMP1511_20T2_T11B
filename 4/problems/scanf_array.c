#include <stdio.h>

#define MAX_SIZE 1000

int main(void) {
    
    int numbers[MAX_SIZE];
    int inputtedNumbers = 0;
    
    while (scanf("%d", &numbers[inputtedNumbers]) == 1) {
        printf("%d put into %d\n", numbers[inputtedNumbers], inputtedNumbers);
        inputtedNumbers++;
    }
    
    int i = 0;
    while(i < inputtedNumbers) {
        printf("%d contains %d\n", i, numbers[i]);
        i++;
    }
    
    return 0;
}

