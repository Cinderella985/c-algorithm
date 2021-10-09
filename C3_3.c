# include <stdio.h>

int FibonacciSequence (int n);

int main() {
    int num;
    printf("Enter a nonnegative integer: ");
    scanf("%d", &num);

    printf("%d", FibonacciSequence (num));
    return 0;
}

int FibonacciSequence (int n){
    if (n < 1) {
        return 0;
    }

    if (n < 3) {
        return 1;
    }

    else {
        return FibonacciSequence(n - 1) + FibonacciSequence(n - 2);
    }

}
