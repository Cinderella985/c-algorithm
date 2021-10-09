#include <stdio.h>

int main() {
    int length = 10;
    printf("Please Enter 10 integers: ");
    int array[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 9; i >= 0; i--) {
        printf("%2d", array[i]);
    }
}