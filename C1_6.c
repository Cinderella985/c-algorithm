#include <stdio.h>

int main() {

    int c, i, j, m, maxNum;
    printf("Enter n integers: ");
    scanf("%d", c);

    int num[c];  
    printf("Enter each integer: ");

    for (i = 0; i < c; i++) {
        scanf("%d",&num[i]);
    }

    maxNum = num[0];

    for (m = 0; m < c; m++) {
        if (num[m] > num[0]) {
            maxNum = num[m];
        }
    }

    printf("%s %d", "The max num is ", maxNum);
    return 0;
}