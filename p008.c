/* 
p08 不重复的数字
有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？ */

#include <stdio.h>

int main(){

    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            for (int m = 1; m < 5; m++) {
                if (i != j && i != m && j != m) {
                printf("%d%d%d\n", i, j, m);
                }
            }    
        }
    }
    
    return 0;
}
