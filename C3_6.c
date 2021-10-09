#include <stdio.h>

double transfer(double cny);

int main() {
    double cny;

    printf("Please enter the amount of chy: ");
    scanf("%lf", &cny);

    printf("%s %.5f", "The dollar equivalent of that is: ", transfer(cny));
    return 0;
}

double transfer(double cny) {
    double dollar = cny * 6.43;
    return dollar; 
}