#include <stdio.h>
#include <math.h>

int main (){

    double x1, x2, y1, y2, dist;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("%.4lf\n", dist);

    return 0;




}