#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "mathemat.h"



static void counter (void);


int float2int(float x) {
    counter();
    return (int)x;
}


float quadrat(float x) {
    counter();
    return x*x;
}

int xmod3(float x) {
    counter();
    int n = float2int(fabs(x));
    return n % 3;
}


static void counter (void) {
    static int c = 0;
    printf("Aufrufe: %d \n" ,++c);
}


