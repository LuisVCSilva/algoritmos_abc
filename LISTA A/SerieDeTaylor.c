#include <stdio.h>

float potencia(double x,double y);
float fat(int n);

int main () {
int n,cont;
float result,x;
printf("Entre com o valor da funcao: ");
scanf("%f",&x);
printf("Entre com o grau de precisao: ");
scanf("%d",&n);
for(cont=0;cont<=n;cont++)
{
result = result+(potencia(x,cont))/fat(cont);
}
printf("O resultado eh %f",result);
getch();
return 0;
}



float fat (int n)
{
/*int c,result = 1;
for(c=1;c<=n;c++)
result *= c;*/
if(n<=2)
{
    if(n==0)
    {
    return 1;
    }
return n;
}
else return n*(fat(n-1));
}

float potencia (double x,double y) {
if((y==1) || (y==0))
{
    if(y==1)
    {
    return x;
    }
    else
    {
    return 1;
    }
}
else
{
return x*potencia(x,y-1);
}
}
