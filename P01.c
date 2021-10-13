#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int loop = 0;
    int b = 0;
    int sleeptime = 1;

    char x;
    printf("Enter the letter: ");
    scanf("%c", &x);

    printf("Enter a number for loop: ");
    scanf("%d", &loop);

    for (int i = 0; i <= loop; i++) {
        system("clear");
        b = 1;
        while (b <= i)
        {
            printf(" ");
            b++;
        }

        printf("%c\n", x);
        sleep(sleeptime); 
    }

    for(int i = loop - 1; i > 0; i--){ 
        system("clear");
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
         printf("%c\n",x); 
         sleep(sleeptime); 
    }

    return 0;
}