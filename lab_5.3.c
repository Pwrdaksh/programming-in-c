#include <stdio.h>

int main() {

    int a = 10;
    printf("Outside block, a = %d\n", a);

    {
        int b = 20;   // Block-level variable
        printf("Inside block, a = %d\n", a);
        printf("Inside block, b = %d\n", b);
    }

   
    return 0;
}
