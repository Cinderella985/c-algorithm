#include <stdio.h>

int main() {
    int num;

    printf( "Enter a value :");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("It is a negative number.");
    }

    else if (num > 0)
    {
        printf("It is a positive number.");
    }

    else {
        printf("This number is zero.");
    }

    if (num % 2 == 0) {
        printf("It is an even number.");
    }

    else {
        printf("It is an odd number.");
    }

    return 0;
}
