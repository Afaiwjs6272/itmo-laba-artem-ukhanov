#include <stdio.h>
#include <math.h>
int main() {
    double a;
    double p = 3.1415926;
    double b, c, d, e, f;
    printf("A:\n");
    scanf("%lf", &a);
    d = (3 * p) - (2 * a);
    e = (5 * p) + (2 * a);
    b = (2 * pow(sin(d), 2)) * pow(cos(e), 2);
    f = (2.5 * p) - (8 * a);
    c = 0.25 - (0.25 * (sin(f)));
    printf("B:%lf\n", b);
    printf("C:%lf\n", c);
    return 0;
}
