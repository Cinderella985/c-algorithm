#include <stdio.h>

int sum(int array[]);

int main () {
    int i = 10;
    int array[10];

    printf("Enter each number in the array: ");
    for (int m = 0; m < 10; m++) {
        scanf("%d", &array[m]);
    }

    printf("%s %d", "The sum of the array is: ", sum(array));

    return 0;
}

int sum(int array[]) {
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }

    return sum;
}
