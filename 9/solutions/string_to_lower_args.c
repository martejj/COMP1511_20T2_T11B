#include <stdio.h>

int main(int argc, char *argv[]) {
    
    int argCounter = 1;
    
    while (argCounter < argc) {
    
        int stringCounter = 0;
        while (argv[argCounter][stringCounter] != '\0') {
            
            char ch = argv[argCounter][stringCounter];
            
            if (ch >= 'A' && ch <= 'Z') {
                putchar(ch - 'A' + 'a');
            } else {
                putchar(ch);
            }
            
            stringCounter++;
        }
        
        printf(" ");
    
        argCounter++;
    }
    
    printf("\n");
    
    return 0;
    
}
