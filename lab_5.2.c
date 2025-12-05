#include <stdio.h>

int g = 20;   
void test() {
    int x = 5;     
    printf("Inside test(), x = %d\n", x);
    printf("Inside test(), g = %d\n", g);
}

int main() {
    test();

    

    printf("Inside main(), g = %d\n", g);  
    return 0;
}
