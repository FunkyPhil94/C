#include <stdio.h>
#include <stdbool.h>
int printf(const char *string,...);

int summe (int a, int b)
{
    int sum;

    sum = a + b;
    return (sum);
}

int differenz(int a, int b)
{
    int dif;

    dif = a - b;

    if (a - b < 0) {
        dif = dif * -1;
    }

    return (dif);

}

int produkt (int a, int b)
{
    int prod;

    prod = a * b;

    return(prod);
}

int quotient (int a, int b)
{
    int quot;

    quot = a / b;

    return (quot);
}

int runde (float x)
{
   int rd; //rundungs int

   rd = round(x);

   return rd;
}


int max (int a, int b, int c)
{
    int mx = a; //max

    if (b > mx){
    mx = b;}

    if (c > mx) {
    mx = c;}

    return mx;

}

int min (int a, int b, int c)
{
    int mn = a; //max

    if (b < mn){
    mn = b;}

    if (c < mn) {
    mn = c;}

    return mn;

}

int ggT (int a, int b)
{
    if (b == 0) {
    return a;
    }

    return ggT(b, a % b);

}

bool istPrim(int p) {
    if (p <= 1) {
        return 0;
    }
    for (int i = 2; i < p; i++) {
        if (ggT(p, i) != 1) {
            return 0;
        }
    }
    return p;
}

int main (int argc, char **argv)
{
    int a = 34;
    int b = 85;
    int c = 10;
    float x = 5.538389;
    int sum;
    int dif;
    int prod;
    int quot;
    int rd;
    int mx; //max
    int mn; //min
    int g; //ggT


    sum = summe(a,b);
    dif = differenz(a,b);
    prod = produkt(a,b);
    quot = quotient(a,b);
    rd = runde(x);
    mx = max(a,b,c);
    mn = min(a,b,c);
    g = ggT(a,b);
    printf("Summe: %d\n", sum);
    printf("Differenz: %d\n", dif);
    printf("Produkt: %d\n", prod);
    printf("Quotient: %d\n", quot);
    printf("Runden von %.6f: %d\n", x, rd);
    printf("Maximum von %d,%d,%d: %d\n", a,b,c,mx);
    printf("Minimum von %d,%d,%d: %d\n", a,b,c,mn);
    printf("ggT von %d und %d: %d\n", a,b,g);



     int prim = 2;


    for (int i = 3; i <= 500; i++) {
        if (istPrim(i)) {
            if (i - prim == 2) {
                printf("%d und %d sind Primzahlzwillinge\n",prim,i);
            }
            prim = i;
        }
    }
    return 0;

}
