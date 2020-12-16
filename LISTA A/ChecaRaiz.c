#include <stdio.h>

int main () {
int i;
int n;
int contRaiz = 1;
int resultado = 1;
int aux = 1;
printf("Entre com o numero a calcular a Raiz Quadrada: ");
scanf("%d",&n);
for(i=1;i<n;i++)
{
contRaiz += 2;
aux += contRaiz;
//printf("%d",aux);
if(aux==n)
{
printf("\nExiste raiz quadrada inteira do numero!");
i = n;
}
if(aux>n)
{
printf("\nNao Existe raiz quadrada inteira do numero!");
i = n;
}
}
getch();
return 0;
}



/*int main () {
int i;
int n;
int contRaiz = 1;
int resultado = 1;
printf("Entre com o numero a calcular a Raiz Quadrada: ");
scanf("%d",&n);
for(i=1;i<n;i++)
{
contRaiz += 2;
resultado += contRaiz;
}

printf("%d",resultado);
getch();
return 0;
}*/
