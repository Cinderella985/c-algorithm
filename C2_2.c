#include <stdio.h>

int main() {
    int i = 2;

    while (i < 100)
    {
        if (i % 2 == 0) {
            printf("%3d\n", i);
        }

        i++;
    }

    return 0;  
}