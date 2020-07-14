#include <stdio.h>

#define MAX 100

int int array_length(int length, int nums[]);


int main(void) {

    int array1[10];

    // Should print 10    
    printf("%d\n",array_length(10, array1))

    int array2[2];
    
    // Should print 2    
    printf("%d\n", array2)

}

int array_length(int nums[]) {
    return MAX;
}
