#include<stdio.h>

int isUpper(char ch);

int main(void) {

    char ch; // int success = scanf("%c", &ch);
    
    // while (scanf(%d, ch) == 1)
    
    while ((ch = getchar()) != EOF) {
        if (!isUpper(ch)) {
            putchar(ch); // printf("%c", ch);
        }
    }
    
}

int isUpper(char ch) {

    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }

    return 0;

}
