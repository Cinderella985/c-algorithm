#include <stdio.h>
#include <math.h>

int main() {
    int num = 0;
    int prime = 0;
    printf("Please enter an integer n: ");
    scanf("%d", &num);

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

    if (prime == 1) {
        printf("It is not a prime.");
    }
    else {
        printf("It is a prime.");
    }

    return 0;
}