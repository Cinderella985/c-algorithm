#include <stdio.h>

int main() {

    int num1, num2, num3, num4, num5;
    
    printf("Enter 5 integers from 0-9: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    int string[5];

    for (int i, j = 0; i < 10 && j < 10; i++, j++) {
        if (i != (num1 && num2 && num3 && num4 && num5)) {
            string[j] = i;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", string[i]);
    }
}