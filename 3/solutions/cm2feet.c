#include <stdio.h>

#define CM_TO_INCHES 2.54
#define INCH_TO_FOOT 12

int main(void) {
    printf("Enter your height in centimeters: ");
    
    int cm;
    scanf("%d", &cm);
    
    printf("Your height in feet is %lf\n", (cm*1.0/INCH_TO_FOOT*1.0)*1.0/CM_TO_INCHES*1.0*1.0*1.0);
    return 0;

}
