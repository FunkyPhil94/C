#include <stdio.h>
#include <stdint.h>
#include <math.h>


int ggT (int a, int b)
{
    if (b == 0) {
    return a;
    }

    return ggT(b, a % b);

}

int addBruch (int n1, int n2, int z1, int z2, int *zaehler_ggT, int *nenner_ggT) {


    int ggT_nenner = ggT(n1,n2);
    int nNeu = (n1 * n2) / ggT_nenner;

    int zNeu1 = z1*(nNeu/n1);
    int zNeu2 = z2*(nNeu/n2);

    int zaehler = zNeu1 + zNeu2;
    int nenner = nNeu;

    int ggT_neu = ggT(zaehler, nenner);

    *zaehler_ggT = zaehler / ggT_neu;
    *nenner_ggT = nenner / ggT_neu;

}



int main (int argc, char **argv)
{

    int z1 = 2;
    int n1 = 4;

    int z2 = 4;
    int n2 = 16;



    int zaehler_ggT, nenner_ggT;

    addBruch(n1, n2, z1, z2, &zaehler_ggT, &nenner_ggT);


    printf("%d/%d + %d/%d = %d/%d \n",z1,n1,z2,n2,zaehler_ggT,nenner_ggT);

    return 0;
}
