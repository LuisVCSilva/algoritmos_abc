#include <stdio.h>


int main () {
int linha,coluna;
printf("Entre com o tamanho da matriz(Linha || Coluna): ");
scanf("%d%d",&linha,&coluna);

int matriz[linha][coluna];

int i,j,tamanho;

for(i=0;i<linha;i++)
{
    for(j=0;j<coluna;j++)
    {
    system("cls");
    printf("Entre com o elemento [%d][%d] da Matriz: ",i+1,j+1);
    scanf("%d",&matriz[i][j]);
    }
}

int matrizTransposta[coluna][linha];


for(j=0;j<coluna;j++)
{
    for(i=0;i<linha;i++)
    {
    matrizTransposta[j][i] = matriz[i][j];
    //printf("%d",matriz[i][j]);
    }
//printf("\n");
}

printf("\n");
printf("\n");


for(i=0;i<linha;i++)
{
for(j=0;j<coluna;j++)
{
printf("%d",matriz[i][j]);
}
printf("\n");
}

printf("\n");

for(j=0;j<coluna;j++)
{
for(i=0;i<linha;i++)
{
printf("%d",matrizTransposta[j][i]);
}
printf("\n");
}
int matrizProduto[linha][linha];
int k,soma;

for(i=0;i<=linha;i++)
{
    for(j=0;j<=coluna;j++)
    {
    soma = 0;
        for(k=0;k<=linha;k++)
        {
        soma += matriz[i][k] * matrizTransposta[k][j];
        }
    matrizProduto[i][j] = soma;
    }
}



printf("\n");


for(i=0;i<linha;i++)
{
for(j=0;j<linha;j++)
{
printf(" %d ",matrizProduto[i][j]);
getch();
}
printf("\n");
}

getch();
return 0;
}
