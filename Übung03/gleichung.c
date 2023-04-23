#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main (int argc, char **argv)
{
    float a,b,c;

    printf("Gebe einen Wert für a, b und c ein: ");
    scanf("%f %f %f", &a,&b,&c);

    float x1,x2;

    b = b/a;
    c = c/a;

    double g = pow(b/2,2);

 //   double t = pow(b,2);

    double root = sqrt(g - c);

    double p = ((b/2) * -1);

    x1 = p + root;
    x2 = p - root;




    printf("root: %f\n", root);
    printf("p: %f\n", p);

    printf("x1: %f\n", x1);
    printf("x2: %f\n", x2);


//    printf("pow: %d",(int)pow(g,2));

  //  x1 = ((b/2) * -1) + (sqrt((b/2) *-1))




}
