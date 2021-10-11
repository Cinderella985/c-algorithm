#include <stdio.h>

int main() {
    printf("He lived in x years: ");
    int x;
    //printf("His son lived in half of x years: ");
    //int y = x / 0.5 ;

    int LeftAllllConditions = 1 / 6 * x + 1 / 12 * x + 1 / 7 * x + 4 + 5;
    int RightAllCondition = 1 / 2 * x;

    int SimplifiedLeftConditions = 11 / 28 * x + 9;

    x = (9 / 3) * 28;

    printf("%s %d %s", "He was", x - 4, "when his son died");
    return 0;
}