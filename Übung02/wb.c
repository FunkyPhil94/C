#include <stdio.h>
#include <stdbool.h>
int printf(const char *string,...);

int main (int argc, char **argv)
{
printf("char %d \n",sizeof(char));
printf("int %d\n",sizeof(int));
printf("float %d\n",sizeof(float));
printf("double %d\n",sizeof(double));

int a = 125;
int b = -39;

printf("char %c %c\n",(char)a,(char)b);
printf("unsigned %u %u \n", (unsigned) a, (unsigned) b);
printf("hexa %x %x \n",a,b);
printf("signed %d %d \n",a,b);
printf("float mit 2 Nachkommastellen %.2f %.2f \n",(float)a,(float)b);
printf("float doppelte Genauigkeit, e Nachkommastellen %e %e \n",(double)a,(double)b);









}
