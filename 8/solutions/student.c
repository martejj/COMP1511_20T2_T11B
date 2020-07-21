#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// #defines
#define MAX_NAME 100

// Structs

struct student {
    int zid;
    double ass1Mark;
    char name[MAX_NAME];
    struct student *next;
};

struct class {
    int numStudents;
    struct student *classList;
}

// Function prototypes
void printStudent(struct student *stu);
struct student *createStudent(char name[], int zid, double ass1Mark, 
    struct student *nextStudent);

int main(void) {

    struct student *head = createStudent("Harrison", 5214808, 99.9, 
        NULL);
    head = createStudent("Clarissa", 5260299, 0, harrison);
    
    head = createStudent("Bob", 0, 100, clarissa);
    
    struct class h15a;
    h15a.classList = head;
    h15a.numStudents = 3;
    
    /*struct student *curr = head;
    while (curr != NULL) {
    
        printStudent(curr);
        curr = curr->next;
    }*/
    
    return 0;
}

struct student *createStudent(char name[], int zid, double ass1Mark, 
    struct student *nextStudent) {
    
    struct student *newStudent = malloc(sizeof(struct student)); 
    
    newStudent->zid = 5214808;
    newStudent->ass1Mark = 99.909;
    strcpy(newStudent->name, "Harrison");
    newStudent->next = nextStudent;
    return newStudent;
    
}

// Prints a student ....
void printStudent(struct student *stu) {
    printf("%s has zid %d and scored %.2lf for assignment 1\n", stu->name,
        stu->zid, stu->ass1Mark);
}
