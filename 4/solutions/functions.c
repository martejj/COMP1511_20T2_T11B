#include <stdio.h>

void printAge(int age);
int getAge();
int addYear(int age);

int main(void) {
    int age = 20;
    age = addYear(age);
    printAge(age);
    return 0;
}

void printAge(int age) {
    printf("%d\n", age);
}

int addYear(int age) {
    return age + 1;
}

