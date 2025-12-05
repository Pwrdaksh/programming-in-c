#include <stdio.h>

int main() {
    float population = 100000;
    int i;

    for (i = 1; i <= 10; i++) {
        population = population + (population * 0.10); // 10% increase
        printf("Population at the end of Year %d = %.0f\n", i, population);
    }

    return 0;
}
