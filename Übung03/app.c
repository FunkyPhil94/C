#include <stdio.h>
#include "mathemat.h"


int main (int argc, char **argv) {

    float x = 2.5;
    printf("Quadrat von %f: %f \n",x, quadrat(x));
    printf("xmod3 von %f: %d \n",x, xmod3(x));
    printf("float 2 int von %f: %d \n", x, float2int(x));
    return 0;

}
