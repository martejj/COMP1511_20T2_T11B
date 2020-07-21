#include <stdio.h>

void g() {
    int x = 10;
}

void h() {
    int y = 20;
}

void f() {
    int k = 30;
    h();
    g();
}

int main(void) {
    
    f();
    
}