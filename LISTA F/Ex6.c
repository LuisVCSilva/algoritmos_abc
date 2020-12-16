/*
_________________________________________________________________________

Exercício 6): Carros
_________________________________________________________________________

Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os seguintes campos:
marca: string de tamanho 15
ano: inteiro
cor: string de tamanho 10
preço: real
a) Escrever a definição da estrutura carro.
b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20 e global.
c) Definir uma função para ler o vetor vetcarros.
d) Definir uma função que receba um preço e imprima os carros (marca, cor e ano) que tenham preço igual ou menor ao preço recebido.
e) Defina uma função que leia a marca de um carro e imprima as informações de todos os carros dessa marca (preço, ano e cor).
f) Defina uma função que leia uma marca, ano e cor e informe se existe ou não um carro com essas características. Se existir, informar o preço.

*/
#include <string.h>
#include <stdio.h>
#define nCarros 20

struct carro {
char marca[15];
int ano;
char cor;
float preco;
}carro;

typedef struct carro tipoCarro;

tipoCarro x[nCarros];


void LeVetor () {
int i;
for(i=0;i<(sizeof(x)/sizeof(carro));i++)
{
system("cls");
printf("Entre com a Marca,ano,Cor e Preco do carro %d: ",i+1);
scanf("%s%d%s%f",&(x[i].marca),&(x[i].ano),&(x[i].cor),&(x[i].preco));
printf("\n\n");
ImprimeCarro(i);
getch();
}
}

void ImprimeCarro (int i) {
//printf("\nMarca: %s\nAno: %d\nCor: %s\nPreco: %f\n",x[i].marca,x[i].ano,x[i].cor,x[i].preco);
printf("\nMarca: %s",x[i].marca);
printf("\nAno: %d",x[i].ano);
printf("\nCor: %s",x[i].cor);
printf("\nPreco: %f",x[i].preco);
}

void OrdPreco () {
float precoMax;
printf("\nEntre com o preco Maximo: ");
scanf("%f",&precoMax);
int i;
for(i=0;(sizeof(x)/sizeof(carro));i++)
{
if(x[i].preco<=precoMax)
{
printf("\n");
ImprimeCarro(i);
}
}
}

void OrdMarca () {
char marca[15];
printf("\nEntre com a Marca: ");
scanf("%s",&marca);
int i;
for(i=0;(sizeof(x)/sizeof(carro));i++)
{
    if(x[i].marca==marca)
    {
    printf("\n");
    ImprimeCarro(i);
    }
}
}

void AchaCarro () {
tipoCarro oQueProcuro;
printf("Entre com a Marca,ano,Cor e Preco do carro: ");
scanf("%s%d%s%f",&oQueProcuro.marca,&oQueProcuro.ano,&oQueProcuro.cor,&oQueProcuro.preco);
int i;
for(i=0;(sizeof(x)/sizeof(carro));i++)
{
    if((x[i].ano==oQueProcuro.ano) && (x[i].preco==oQueProcuro.preco) && (strcmp(x[i].marca,oQueProcuro.marca)==0) && (strcmp(x[i].cor,oQueProcuro.cor)==0))
    {
    printf("\n");
    ImprimeCarro(i);
    }
}
}

void CriaMenu() {

}

int main () {
int esc = 0;
inicio:
esc = 0;
system("cls");
printf("\n\t\t\t1 :: Cadastrar Carros \n\n\t\t\t2 :: Ordenar por Preco\n\n\t\t\t3 :: Ordenar por Marca\n\n\t\t\t4 :: Procurar Carro\n\n\t\t\t5 :: Sair");
printf("\n\n\t\t\t: ");
scanf("%d",&esc);
switch (esc)
{
case 1:
printf("\n");
LeVetor();
goto inicio;
break;

case 2:
printf("\n");
OrdPreco();
goto inicio;
break;

case 3:
printf("\n");
OrdMarca();
goto inicio;
break;

case 4:
printf("\n");
AchaCarro();
goto inicio;
break;

case 5:
printf("\n");
exit(1);
break;

default:
goto inicio;
}
return 0;
}
