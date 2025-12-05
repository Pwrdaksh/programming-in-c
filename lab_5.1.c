#include <stdio.h>

int g = 10;   // Global variable

void func1() {
    printf("Inside func1, g = %d\n", g);
}

void func2() {
    g = g + 5;  // Modifying global variable
    printf("Inside func2, g = %d\n", g);
}

int main() {
    printf("Inside main, g = %d\n", g);

    func1();
    func2();

    printf("Back in main, g = %d\n", g);

    return 0;
}
