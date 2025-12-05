#include <stdio.h>

int main() {
    int a, b, c, d;
    int num;

    printf("Ramanujan Numbers:\n");

    for (a = 1; a <= 20; a++) {
        for (b = 1; b <= 20; b++) {

            for (c = a + 1; c <= 20; c++) {     // avoid repeating pairs
                for (d = 1; d <= 20; d++) {

                    if (a != c && a != d && b != c && b != d) { 
                        if ((a*a*a + b*b*b) == (c*c*c + d*d*d)) {

                            num = a*a*a + b*b*b;
                            printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                                   num, a, b, c, d);

                        }
                    }
                }
            }

        }
    }

    return 0;
}
