#include <stdio.h>
#include <math.h>
int main() {
    double a;
    double p = 3.1415926;
    double z1, z2, t1, t2, t3;
    printf("A:\n");
    scanf("%lf", &a);
    t1 = 3 * p - 2 * a;
    t2 = 5 * p + 2 * a;
    z1 = (2 * pow(sin(t1), 2)) * pow(cos(t2), 2);
    t3 = 2.5 * p - 8 * a;
    z2 = 0.25 - (0.25 * (sin(t3)));
    printf("Z1:%lf\n", z1);
    printf("Z2:%lf\n", z2);
    return 0;
}
