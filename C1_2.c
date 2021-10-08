#include <stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 13 == 0) {
        printf("This number is a multiple of 13.");
    }

    else {
        printf("This number is not a multiple of 13.");
    }

    return 0;
}