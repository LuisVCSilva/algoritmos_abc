/*

_______________________________________________________________________

Exercício 3): Jogadores de Vôlei
_________________________________________________________________________

Utilizando struct faça um programa para armazenar os dados dos jogadores
de um time de vôlei (nome, idade, posição, numero_camisa).
Crie 2 vetores para armazenar os jogadores principais e os reservas, sem
uso de ponteiros. Desenvolva um programa em que o usuário consiga entrar
com os jogadores principais (6) e com os reservas (4) e mostre‐os na tela.
Para facilitar a entrada de dados, utilize um menu.

_________________________________________________________________________

Exercício 4): Jogadores de Vôlei com ponteiros
_________________________________________________________________________

Modifique o exercício 1 para a utilização de ponteiros na leitura e
apresentação dos dados dos vetores.


*/
#include <stdio.h>
#define nJogadoresPorTime 10
#define nReservasPorTime 4

enum posicaoVolei
{
Levantador=1,
PontaDireita,
PontaEsquerda,
Meio,
Oposto,
Libero
};
typedef enum posicaoVolei tipoPosicao;

struct jogador {
char nome[40];
int idade;
tipoPosicao posicao;
int numeroCamiseta;
}jogador;

typedef struct jogador tipoJogador;

int CriaMenu (tipoJogador *x,tipoJogador *y) {
int esc = 0;
int verTimesFlag = 0;
inicio:
esc = 0;
verTimesFlag = 0;
system("cls");
printf("\n\t\t\t1 :: Criar Time 1\n\n\t\t\t2 :: Criar Time 2\n\n\t\t\t3 :: Visualizar dados\n\n\t\t\t4 :: Sair");
printf("\n\n\t\t\t: ");
scanf("%d",&esc);
switch (esc)
{
case 1:
CriaTime(&(*x));
goto inicio;
break;

case 2:
printf("\n\nCriar Time %d\n\n",esc);
system("pause");
CriaTime(&(*y));
goto inicio;
break;

case 3:
if(VerTimes(&(*x),&(*y))==-1)
{
printf("\n\nClique qualquer tecla para sair...");
getch();
goto inicio;
}
break;


case 4:
return -1;
break;

default:
goto inicio;
}
return 0;
}

void CriaTime (tipoJogador *x) {
int i=0;
for(i=0;i<nJogadoresPorTime;i++)
{
system("cls");
printf("\nEntre com o nome do jogador: ");
scanf("%s",&(*(x+i)).nome);

printf("\nEntre com a idade do jogador: ");
scanf("%d",&(*(x+i)).idade);

printf("\nEntre com o numero da camiseta do jogador: ");
scanf("%d",&(*(x+i)).numeroCamiseta);
inicio:
system("cls");
printf("\nEntre com a posicao do jogador %s(camisa %d): ",(*(x+i)).nome,(*(x+i)).numeroCamiseta);
printf("\n\n\t\t\t1 :: Levantador");
printf("\n\n\t\t\t2 :: Ponta Direita");
printf("\n\n\t\t\t3 :: Ponta Esquerda");
printf("\n\n\t\t\t4 :: Meio");
printf("\n\n\t\t\t5 :: Oposto");
printf("\n\n\t\t\t6 :: Libero\n\n\t\t\t: ");
scanf("%d",&(*(x+i)).posicao);

switch((*(x+i)).posicao)
{
case Levantador:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Levantador\n\n");
break;

case PontaDireita:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Ponta Direita\n\n");
break;

case PontaEsquerda:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Ponta Esquerda\n\n");
break;

case Meio:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Meio\n\n");
break;

case Oposto:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Oposto\n\n");
break;

case Libero:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Libero\n\n");
break;

default:
goto inicio;
}

system("pause");
}
}

void VerTime (tipoJogador *x) {
int i=0;
for(i=0;i<nJogadoresPorTime;i++)
{
switch((*(x+i)).posicao)
{
case Levantador:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Levantador\n");
break;

case PontaDireita:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Ponta Direita\n");
break;

case PontaEsquerda:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Ponta Esquerda\n");
break;

case Meio:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Meio\n");
break;

case Oposto:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Oposto\n");
break;

case Libero:
printf("\n\nJogador Cadastrado!\n\nNome: %s\nIdade: %d\nNumero da Camisa: %d",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).numeroCamiseta);
printf("\nPosicao: Libero\n");
break;

default:
exit(1);
}
if(i>(nReservasPorTime+1))
{
printf("Status: Reserva\n\n");
}
else
{
printf("Status: Titular\n\n");
}
}
}

int VerTimes (tipoJogador *x,tipoJogador *y) {
int esc = 0;
inicio:
esc = 0;
system("cls");

printf("\n\t\t\t1 :: Visualizar Time 1\n\n\t\t\t2 :: Visualizar Time 2\n\n\t\t\t3 :: Visualizar todos os times\n\n\t\t\t4 :: Voltar");
printf("\n\n\t\t\t: ");
scanf("%d",&esc);
switch(esc)
{

case 1:
printf("\nTime 1:\n\n");
VerTime(&(*x));
printf("\n\n");
getch();
goto inicio;
break;

case 2:
printf("\nTime 2:\n\n");
VerTime(&(*y));
printf("\n\n");
getch();
goto inicio;
break;

case 3:
printf("\nTime 1:\n\n");
VerTime(&(*x));
printf("\n\n");
printf("\nTime 2:\n\n");
VerTime(&(*y));
printf("\n\n");
system("pause");
goto inicio;
break;

case 4:
return -1;
break;

default:
goto inicio;
}
return 0;
}

int main () {
tipoJogador time1[nJogadoresPorTime],time2[nJogadoresPorTime];
if(CriaMenu(&time1,&time2)==-1)
{
printf("\n\nClique qualquer tecla para sair...");
}
getch();
return 0;
}
