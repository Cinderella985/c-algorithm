#include <stdio.h>

int main() {
    int i, j, k;
    printf("All the 3-digits 'water flower'number are: ");

    for(int n=100; n < 1000; n++) 
    { 
        i = n/100;
        j = n/10%10;
        k = n%10;

        if(n == i*i*i + j*j*j + k*k*k) 
        { 
            printf("%-5d",n); 
        } 
    } 
}