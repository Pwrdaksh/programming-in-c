#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a + b > c && a + c > b && b + c > a) {
        printf("Triangle is Valid\n");

        
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Isosceles Triangle\n");
        }
        else if (a*a + b*b == c*c ||
                 a*a + c*c == b*b ||
                 b*b + c*c == a*a) {
            printf("Right Angled Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
    }
    else {
        printf("Triangle is NOT Valid\n");
    }

    return 0;
}
