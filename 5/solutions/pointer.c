#include <stdio.h>

void sum_nums(int a, int b, int *sum);

int main(void) {
    int sum = 0;
    int a = 10;
    int b = 20;
    
    sum_nums(a, b, &sum);
    
    printf("%d\n
    ", sum);
}

void sum_nums(int a, int b, int *sum) {
    
    *sum = a + b;
    
}
