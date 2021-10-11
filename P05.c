#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_t, end_t;
    double total_t = 0;
    start_t = clock();

    printf("程序启动，start_t = %ld\n", start_t);

    int i, j;
    int prime;
	i = 2;

	while(i <= 1000) {
        prime = 0;

		for(j = 2; j <= i / 2; j++){
			if(i % j == 0){
                prime = 1;
				break;
			}
		}
		
		if(prime == 0){
			printf("%d\n", i);
		}
		i++;
	}

    end_t = clock();
    printf("大循环结束，end_t = %ld\n", end_t);
    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf("CPU 占用的总时间：%f\n", total_t  );

	return 0;
}