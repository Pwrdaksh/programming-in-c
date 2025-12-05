#include <stdio.h>

void counter() {
    static int x = 1;   // Static local variable
    printf("x = %d\n", x);
    x++;                // value persists for next call
}

int main() {
    counter();
    counter();
    counter();

    return 0;
}
