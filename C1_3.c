#include <stdio.h>

int main() {
    int year, x;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d %s", year, "is a leap year.");
    }

    else {
       printf("%d %s", year, "is not a leap year.");
    }

    return 0;
}