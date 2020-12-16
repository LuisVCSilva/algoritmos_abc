#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926536

int fact(int k)
{
int i, fatorial=1;

for (i = 2*k+1; i > 1; i--) {fatorial *= i;}
return fatorial;
}

int main ()
{
int k = 0;
double x = 0, termo = 0, seno=0;

printf (" DIGITE O VALOR DE X EM GRAUS: "); scanf("%lf",&x);
x = (PI/180)*x;

do {
termo = pow(x,2*k+1)/fact(k);
seno += pow(-1,k)*termo;
k++;
}while(termo > 10E-8);

printf ("\n VALOR DO SENO: %.10lf\n\n",seno);

system ("pause"); return 0;
}
