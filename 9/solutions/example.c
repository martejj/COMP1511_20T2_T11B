
void func3() {
    int c = 100;
}

int *func2() {
    int b = 200;
    return &b; 
}

void func1() {
    int a = 10;
    int x = 50;
    func2();
    func3();
}

int main(void) {
    int d = 1000;
    func1();
    printf("%d\n", d);
    return 0;
}
