#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 2; i <= 100; i+=2) {
        printf("%d", i);
    }

    void print(int n);
    int isPrime(int n);
}

int isPrime(int num) {
    int prime = 0;
    for(int j = 2; j <= sqrt(num); j++){
        if (num % 2 == 0 && num > 2) {
            prime = 1;
            break;
        }
		if(num % j == 0){
			prime = 1;
			break;
		}
    }
    return prime;
}

void print(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (isPrime(i) == 0 && isPrime(num - i) == 0) {
            printf("%d = %d + %d", num, i , num - i);
        }
    }
}

