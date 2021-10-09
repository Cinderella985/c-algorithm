#include <stdio.h>
#include <stdlib.h>

int isOverLap(double x1, double y1, double w1, double h1, double x2, double y2, double w2, double h2);

int main() {
    double x1, y1, w1, h1;
    double x2, y2, w2, h2;

    printf("Enter a r1's center x- and y-coordinates, width, and height : ");
    scanf("%lf %lf %lf %lf", &x1, &y1, &w1, &h1);

    printf("Enter a r2's center x- and y-coordinates, width, and height : ");
    scanf("%lf %lf %lf %lf", &x2, &y2, &w2, &h2);

    switch (isOverLap(x1, y1, w1, h1, x2, y2, w2, h2))
    {
    case 0:
        printf("r2 is inside r1");
        break;
    
    case 1:
        printf("r2 overlaps r1");
        break;
    
    case 2:
        printf("r2 does not overlaps r1");
        break;
    }

}

int isOverLap(double x1, double y1, double w1, double h1, double x2, double y2, double w2, double h2) {
    double xDistance = x1 >= x2 ? x1 - x2 : x2 - x1 ;
    double yDistance = y1 >= y2 ? y1 - y2 : y2 - y1 ;

    if (xDistance < 0.5 * w1 - 0.5 * w2 && yDistance < 0.5 * h1 - 0.5 * h2)
        return 0;
    else if (xDistance <= 0.5 * w1 + 0.5 * w2 && yDistance <= 0.5 * h1 + 0.5 * h2)
        return 1;
    else
        return 2;
}
