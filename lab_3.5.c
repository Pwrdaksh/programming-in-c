#include <stdio.h>

int main() {
    int year, i, days = 0, day;

    printf("Enter year: ");
    scanf("%d", &year);

    for (i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            days += 366;
        else
            days += 365;
    }

    day = days % 7;

    if (day == 0) printf("Monday\n");
    else if (day == 1) printf("Tuesday\n");
    else if (day == 2) printf("Wednesday\n");
    else if (day == 3) printf("Thursday\n");
    else if (day == 4) printf("Friday\n");
    else if (day == 5) printf("Saturday\n");
    else printf("Sunday\n");

    return 0;
}
