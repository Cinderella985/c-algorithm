#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/* 
m：整数，落入圆内的点的个数
n：整数，落中圆外的点的个数
x：浮点数，居于（0，1）区间的随机数
y：浮点数，居于（0，1）敬意的随机数
r：浮点数，圆半径
[公式] ：浮点数，圆周率 */
int main(int argc, char const *argv[])
{
    int num_in_circle = 0;
    int num_in_square = 1000000;
    srand(time(NULL));

    for (int i = 0; i < num_in_square; i++) {
        float x =(float)rand() / (RAND_MAX);
        float y =(float)rand() / (RAND_MAX);

        if (sqrt(x * x + y * y) < 1) {
            num_in_circle++;
        }
    }
    
    double pi = 4 * ((num_in_circle + 0.0) / num_in_square);
    printf("%f\n", pi);
    return 0;
}
