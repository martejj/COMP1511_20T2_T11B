#include <stdio.h>

#define MAX_SIZE 100

int isUpper(char ch);
int isLower(char ch);

int main(void) {
    
    char input[MAX_SIZE];
    fgets(input, MAX_SIZE, stdin);
    
    int i = 0;
    while (input[i] != '\0') {
        
        if (i%2 == 0) {
            if (isUpper(input[i])) {
                input[i] = input[i] - 'A' + 'a';
            } else if (isLower(input[i])) {
                input[i] = input[i] - 'a' + 'A';
            }
        }
        
        i++;
    }
    
    printf("%s", input);
    
    return 0;
}

int isUpper(char ch) {
    
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    
    return 0;

}

int isLower(char ch) {
    
    if (ch >= 'a' && ch <= 'z') {
        return 1;
    }
    
    return 0;

}
