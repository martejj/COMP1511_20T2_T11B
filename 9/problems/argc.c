#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 1;
    
    while (i < argc) {
        
        char *string = argv[i];
        
        int j = 0;
        
        while (string[j] != '\0') {
            int ch = string[j];
            if (ch > 'A' && ch < 'Z') {
                ch += 32;
            }
            putchar(ch);
            j++;
        }
        putchar(' ');
        i++;
    }
    putchar('\n');
}
