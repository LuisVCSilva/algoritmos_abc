#include <stdio.h>

int leDimensao();

int main () {
int dimensao = leDimensao();
int matriz1[dimensao][dimensao];
int principal[dimensao];
int secundaria[dimensao];

int i,j;
int contaPrincipal = 0,contaSecundaria = 0;

for(i=0;i<dimensao;i++)
{
for(j=0;j<dimensao;j++)
{
printf("Entre com o elemento [%d][%d] da matriz: ",i+1,j+1);
scanf("%d",&matriz1[i][j]);
if(i==j)
{
principal[contaPrincipal] = matriz1[i][j];
contaPrincipal++;
}
else
{
    if(j==(dimensao-1-i))
    {
    secundaria[contaSecundaria] = matriz1[i][j];
    contaSecundaria++;
    }
}
}
}

for(i=0;i<dimensao;i++)
{
printf(" :: %d :: ",principal[i]);
}

for(i=0;i<dimensao;i++)
{
printf(" >> %d >> ",secundaria[i]);
}

int resultado = 0;


for(i=0;i<dimensao;i++)
{
resultado += principal[i]*secundaria[i];
}

printf("O resultado da PE: %d",resultado);

getch();
return 0;
}

int leDimensao () {
int dimensao = 0;
printf("Entre com a dimensao da matriz quadrada: ");
scanf("%d",&dimensao);
while(dimensao<=1)
{
system("cls");
printf("Entre com a dimensao da matriz quadrada: ");
scanf("%d",&dimensao);
}
return dimensao;
}
