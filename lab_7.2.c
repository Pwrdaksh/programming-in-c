#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
    float gross;
};

int main() {
    struct Employee emp[100];
    int i;

    for (i = 0; i < 100; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", emp[i].name);

        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic);

        emp[i].gross = emp[i].basic + (0.52 * emp[i].basic);
    }

    printf("\n--- Employee Gross Salary List ---\n");
    for (i = 0; i < 100; i++) {
        printf("Name: %s  | Gross Salary: %.2f\n", emp[i].name, emp[i].gross);
    }

    return 0;
}
