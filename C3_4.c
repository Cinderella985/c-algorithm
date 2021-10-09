#include <stdio.h>

int isRightTriangle(int a, int b, int c);

int main() {
    int a, b, c;

    printf("Enter the sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c && a + c > b && b + c > a) && (a - b < c && a - c < b && b - c < a)) {
        if (isRightTriangle(a, b, c) == 1) {
            printf("It is a right triangle.");
        }
        else {
            printf("It is not a right triangle.");
        }
    }
    else {
        printf("Invalid values!");
        return 1;
    }

    return 0;
}

int isRightTriangle(int a, int b, int c) {
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
        return 1;
    }
    else {
        return 0;
    }
}