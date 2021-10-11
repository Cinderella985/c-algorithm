#include <stdio.h>

int main() {
    void print(int n);
    int isPrime(int num);

    for (int i = 2; i <= 100; i+=2) {
        print(i);
    }
}

int isPrime(int num) {
    int prime = 0;
    for(int j = 2; j <= num / 2; j++){
		if(num % j == 0){
			prime = 1;
            return 1;
			break;
		}
    }

    return 0;
}

void print(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) == 0 && isPrime(num - i) == 0) {
            printf("%d = %d + %d\n", num, i , num - i);
        }
    }
}

