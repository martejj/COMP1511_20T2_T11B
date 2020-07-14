#include<stdio.h>

int isUpper(char ch);

int main(void) {
   
    
    // 1
    printf("%d\n", isUpper('A'));

    // 0
    printf("%d\n", isUpper('a'));

    // 1
    printf("%d\n", isUpper('K'));

    // 0
    printf("%d\n", isUpper('!'));
}

int isUpper(char ch) {
    
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }
    
    return 0;

}
