#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 100

struct student {
    char name[MAX_NAME]; // 100
    int zid; // 4
    double ass1; // 8
    struct student *next;
};

struct class {
    char name[MAX_NAME];
    struct student *head;
}

struct student *createStudent() {
    struct student *s = malloc(sizeof(struct student));
    
    s->zid = 0;
    s->ass1 = 0;
    strcpy(s->name, "No name");
    
    return s;
}

int printList(struct student *s) {
    printf("first in linked list: %s\n", s->name);
    printf("second in linked list: %s\n", s->next->name);
    return 0;
}

int main(void) {
    
    struct student *frankie = createStudent();
    strcpy(frankie->name, "Frankie");
    
    struct student *chicken = createStudent();
    strcpy(chicken->name, "Chicken");
    
    struct student *harrison = createStudent();
    strcpy(harrison->name, "Harrison");
    
    frankie->next = harrison;
    harrison->next = chicken;
    chicken->next = NULL;
    
    printList(frankie);
    printList(harrison);
    
    return 0;
}
