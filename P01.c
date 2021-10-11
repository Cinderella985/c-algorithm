#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int num = 0;
    int a = 0;
    int b = 0;
    int i = 0;

    printf("Enter 0 for the letter and 1 for the word: ");
    scanf("%d", &num);

    if (num == 0) {
        char x;
        printf("Enter the letter: ");
        scanf("%c", &x);

        printf("\n");

        printf("Enter a number for loop: ");
        scanf("%d", &a);

        while (i <= a) {
            system("clear");
            b = 1;
            while (b <= i)
            {
                printf(" ");
                b++;
            }

            printf("%s", x);
            sleep(100);
            i++;    
        }
    }

    return 0;

    if (num == 1) {
        int length = 0;

        printf("Enter the length of the array: ");
        char* data = (int*)malloc(length * sizeof(char));

        printf("Enter each char of the array: \n");

        for (int n = 0; n < length; n++) {
        scanf("%s", &data[n]);
        }

        printf("\n");

        printf("Enter a number for loop: ");
        scanf("%d", &a);

        while (i <= a) {
            system("clear");
            b = 1;
            while (b <= i)
            {
                printf(" ");
                b++;
            }

            for (int m = 0; m < length; m++) {
                printf("%s", data[m]);
            }
            sleep(100);
            i++;    
        }

        free(data);
    }

    return 0;
}