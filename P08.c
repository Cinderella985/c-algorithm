#include <stdio.h>
#define N 3

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("%c -> %c\n", A, C);
    }

    else {
        hanoi(n - 1, A, C, B);
        printf("%c -> %c\n", A, C);
        hanoi(n - 1, B, A, C);
    }

}

int main() {
    hanoi(N, 'A', 'B', 'C');
    return 0;
}