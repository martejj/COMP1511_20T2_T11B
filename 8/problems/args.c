#include <stdio.h>

int main(int argc, char *argv[]) {
    
    if (argc != 3) {
        printf("Run as %s [num1] [num2]\n", argv[0]);
        return 0;
    }
    
    int i = 0;
    while (i < argc) {
        printf("%s\n", argv[i]);
        i++;
    }

    return 0;
}
