#include <stdio.h>
#include <math.h>

double hsqrt(double a) {
    double x = (a + 1) / 2;
    double xn = 0.5 * (x + a / x);
    while (fabs(xn - x) > 0.001) {
        x = xn;
        xn = 0.5 * (x + a / x);
    }
    return xn;
}

int main() {
    double a = 25;
    double root = hsqrt(a);
    printf("Wurzel von %f: %.3f", a, root);
    return 0;
}
