#include <stdio.h>

int main() {

    int num1, num2, num3, temp1, temp2, temp3;

    printf("Enter three nums: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2) {
        int temp1 = num1;
        num1 = num2;
        num2 = temp1;
    }

    if (num1 < num3) {
        int temp2 = num1;
        num1 = num3;
        num3 = temp2;
    }

    printf("%d %s", num1, " is the biggest one.");

    return 0;
}