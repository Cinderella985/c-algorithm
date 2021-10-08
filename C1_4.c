#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d %s", num1, " is the bigger one.");
    }

    else {
        printf("%d %s", num2, " is the bigger one.");
    }

    return 0;
}