#include <stdio.h>

int isUpper(char ch);

int main(void) {

    if (isUpper('A') != 1) {
        printf("Failed test A\n");
    }
    
    if (isUpper('Z') != 1) {
        printf("Failed test Z\n");
    }
    
    if (isUpper('a') != 0) {
        printf("Failed test a\n");
    }
    
    if (isUpper('z') != 0) {
        printf("Failed test z\n");
    }
    
    if (isUpper('-') != 0) {
        printf("Failed test -\n");
    }

    return 0;
}

int isUpper(char ch) {
    
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    
    return 0;

}

