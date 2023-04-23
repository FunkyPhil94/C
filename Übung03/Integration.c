#include <stdio.h>
#include <math.h>

double f(double x) {

    return pow(x,3) - (2 * pow(x,2)) - x + 2;

}

double integral1 (double a, double b, double p) {

    double n = (b - a) / p; //-1?
    double sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        double x = a + (i * p);
        double x1 = x + p;
        sum += (0,5 * ((f(x1) + f(x)) * (x1 - x)));
        //printf("summe: %lf", sum);
        //count ++;
    }
    //printf("c: %d", count);
    return sum;

}

double g (double x) {

    if (x != 0) {
        return (sin(x) / x);
    }
    return 1;


}

double integral2 (double a, double b, double p) {

    double n = (b - a) / p; //-1?
    double sum = 0;

    for (int i = 0; i < n; i++) {
        double x = a + (i * p);
        double x1 = x + p;
        sum += (0,5 * ((g(x1) + g(x)) * (x1 - x)));
    }
    return sum;

}

int main(int argc, char **argv) {

    double a, b, p;

    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("p: ");
    scanf("%lf", &p);

    double e = integral1(a, b, p);

    double e2 = integral2(a, b, p);

    printf("Lösung: %lf", e);
    printf("Lösung: %lf", e2);

    return 0;
}
