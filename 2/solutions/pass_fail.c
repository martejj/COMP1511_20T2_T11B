#include <stdio.h>

int main(void) {
    
    printf("Please enter your mark: ");
    
    int score;
    scanf("%d", &score);
    
    if (score >= 50 && score <= 100) {
        
        printf("PASS\n");
        
    } else if (score < 50 && score >= 0) { 
        
        printf("FAIL\n");
        
    } else {
        
        printf("ERROR\n");
        
    }
    
    return 0;

}
