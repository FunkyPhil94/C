#include <stdio.h>
#include <math.h>


int kgV(int a, int b) {
    int max = (a > b) ? a : b;
    int result = max;

    while (1) {
        if (result % a == 0 && result % b == 0)
            return result;
        result += max;
    }
}

typedef struct {
    int zaehler;
    int nenner;
} Rational;

Rational kuerze(Rational r) {
    int gcd = ggT(r.zaehler, r.nenner);
    r.zaehler /= gcd;
    r.nenner /= gcd;
    return r;
}

Rational addiere(Rational a, Rational b) {
    Rational result;
    result.zaehler = a.zaehler * b.nenner + b.zaehler * a.nenner;
    result.nenner = a.nenner * b.nenner;
    return kuerze(result);
}

Rational subtrahiere(Rational a, Rational b) {
    Rational result;
    result.zaehler = a.zaehler * b.nenner - b.zaehler * a.nenner;
    result.nenner = a.nenner * b.nenner;
    return kuerze(result);
}

Rational multipliziere(Rational a, Rational b) {
    Rational result;
    result.zaehler = a.zaehler * b.zaehler;
    result.nenner = a.nenner * b.nenner;
    return kuerze(result);
}

Rational dividiere(Rational a, Rational b) {
    Rational result;
    result.zaehler = a.zaehler * b.nenner;
    result.nenner = a.nenner * b.zaehler;
    return kuerze(result);
}

float toFloat(Rational r) {
    return (float)r.zaehler / r.nenner;
}

void ausgabe(Rational r) {
    printf("%d/%d\n", r.zaehler, r.nenner);
}



//Heron-Test
int main() {
    double a;
    printf("Geben Sie eine Zahl ein: ");
    scanf("%lf", &a);

    double heron_result = hsqrt(a);
    double sqrt_result = sqrt(a);

    printf("Heronverfahren: %.3lf\n", heron_result);
    printf("math.h sqrt: %.3lf\n", sqrt_result);

    return 0;
}
