#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 100

struct student {
    char name[MAX_NAME]; // 100
    int zid; // 4
    double ass1; // 8
};

struct student *createStudent() {
    struct student *s = malloc(sizeof(struct student));
    
    s->zid = 0;
    s->ass1 = 0;
    strcpy(s->name, "No name");
    
    return s;
}

int main(void) {
    
    /*
    struct student frankie;
    
    frankie.zid = 5333333; // Setting - Fine
    frankie.ass1 = 0;
    strcpy(frankie.name, "Frankie");
    
    printf("%lf\n", frankie.ass1); // ?
    */
    /*
    struct student *chicken = malloc(sizeof(struct student));
    // chicken - struct student *
    // (*chicken) - struct student
    // (*chicken).zid = 5333332;
    
    chicken->zid = 5333332;
    chicken->ass1 = 51;
    strcpy(chicken->name, "Chicken");
    
    free(chicken);
    */
    
    struct student *chicken = createStudent();
    chicken->zid = 231798;
    
    return 0;
}
