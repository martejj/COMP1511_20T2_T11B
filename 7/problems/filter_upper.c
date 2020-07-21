#include <stdio.h>

int isUpper(char ch);

int main(void) {

    int character;
    while ((character = getchar()) != EOF) {
        if (!isUpper(character)) {
            putchar(character);
        }
    }
    
    return 0;
}

int isUpper(char ch) {
    
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    
    return 0;

}
