#include <stdio.h>

#define MAX 100

int isUpper(char ch);

int main(void) {

    char line[MAX];
    
    fgets(line, MAX, stdin);
    
    int i = 0;
    
    while (line[i] != '\0') {
    
        if (i%2 && ((line[i] >= 'a' && line[i] <= 'z')
            || (line[i] >= 'A' && line[i] <= 'Z'))) {
            
            // Swap it to lower case
            if (isUpper(line[i])) {
                line[i] = line[i] - 'A' +'a';
            } else {
                // Swap it to upper case
                line[i] = line[i] - 'a' +'A';
                
            }
        
        } 
    
        i++;
    
    }
    
    printf("%s", line);
    
    return 0;
    
}


int isUpper(char ch) {

    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }

    return 0;

}
