#include <stdio.h>
#include <stdint.h>
#include <math.h>

int compare(float a, float b) {
    float e = 0.00001;
    if (fabs(a - b) <= e) {
        return 1;
        } else {
            return 0;
        }
}

int main(int argc, char **argv) {

    float a = 0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f;
    float b = 10 * 0.1f;

    printf("a: %f \n",a);
    printf("b: %f \n",b);

    if (compare(a, b)) {
        printf("%.6f == %.6f\n", a, b);
    } else {
        printf("%.6f != %.6f\n", a, b);
    }
    return 0;
}
