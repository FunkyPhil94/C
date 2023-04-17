#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
//int printf(const char *string,...);

int main (int argc, char **argv)
{

    if (argc <2) {
    printf("Fehler, kein Argument \n");
    return 1;
    }

    float x = atof(argv[1]);
  //  uint32_t hexa = *(uint32_t*)&x;

    printf("Quadrat: %f\n", x * x);
    printf("x modulo 3: %d\n", (int)x % 3);
    printf("Wurzel: %f\n", sqrt(x));
    printf("Formel: %f\n", ((5*x +3)/(7*(x-1,5))));
    printf("Bit 2 links: %0x\n", (int)x<<2);
    printf("Bit UND mit 0x00F0: %0x\n",(int)x & 0x00F0);
    printf("Inkrementieren: %d\n", (int)++x);

}
