#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
    clock_t start_t, end_t;
    double total_t = 0;
    start_t = clock();

    printf("程序启动，start_t = %ld\n", start_t);

	int prime[1000];
	int count = 0;

	for (int i = 0; i < 1000; i++) {
		prime[i] = 1;
	}

	for (int i = 2; i <= sqrt(1000); i++) {
		if (prime[i] == 1) {
			for(int j = i * i; j <= 1000;j += i){
            	prime[j]=0;
            }
		}
	}

	for(int i = 2; i <= 1000; i++){
         if(prime[i] == 1){
         	count++;
         	printf("%d ",i);
        }
    }

    end_t = clock();
    printf("大循环结束，end_t = %ld\n", end_t);
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("CPU 占用的总时间：%f\n", total_t  );

	return 0;
}