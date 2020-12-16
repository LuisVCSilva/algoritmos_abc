#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
Trabalho de Laborat�rio de Programa��o I
Aluno: Luis Vinicius Costa Silva
Professora: Dra. Luanna Lopes Lobato
Per�odo: 1�

*/

//ESCRITO E TESTADO NO Code::Blocks 13.12 e no Dev-C++ 5.6.3
//COMPILADO COM:MinGW GCC 4.8.1 32-bit Release
//SISTEMA OPERACIONAL : WINDOWS 7

char tabuleiro[3][3];//QUESTAO 1 :: Deve ser criada uma matriz de 3x3 de caracteres que representar� o tabuleiro;
                    //QUESTAO 2 :: N�o precisa ser aloca��o din�mica, uma vez que j� foi fornecido o n�mero de linhas e
                    //colunas;
int flagCampeao = 0;
int permiteJogo = 1;//1 :: VERDADEIRO
                    //0 :: FALSO
int flagRepeticao = 1;

int checaCampeao (char tabuleiro[3][3],int nJogada) {//Decide quem ganhou ou se empatou
    if((tabuleiro[0][0]=='O' && tabuleiro[0][1]=='O' && tabuleiro[0][2]=='O') ||//CHECA TODOS OS CASOS DA BOLA GANHANDO
    (tabuleiro[1][0]=='O' && tabuleiro[1][1]=='O' && tabuleiro[1][2]=='O')||
    (tabuleiro[2][0]=='O' && tabuleiro[2][1]=='O' && tabuleiro[2][2]=='O')||
    (tabuleiro[0][0]=='O' && tabuleiro[1][0]=='O' && tabuleiro[2][0]=='O')||
    (tabuleiro[0][1]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][1]=='O')||
    (tabuleiro[0][2]=='O' && tabuleiro[1][2]=='O' && tabuleiro[2][2]=='O')||
    (tabuleiro[0][0]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][2]=='O')||
    (tabuleiro[0][2]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][0]=='O'))
    {
    return 2;//VOLTA 2 PARA A VARIAVEL "flagCampeao" e l� no fim(perto da questao 10) isso cai num if para exibir a
    //mensagem correta...
    }

    if((tabuleiro[0][0]=='X' && tabuleiro[0][1]=='X' && tabuleiro[0][2]=='X')||//CHECA TODOS OS CASOS DO XIS GANHANDO
    (tabuleiro[1][0]=='X' && tabuleiro[1][1]=='X' && tabuleiro[1][2]=='X')||
    (tabuleiro[2][0]=='X' && tabuleiro[2][1]=='X' && tabuleiro[2][2]=='X')||
    (tabuleiro[0][0]=='X' && tabuleiro[1][0]=='X' && tabuleiro[2][0]=='X')||
    (tabuleiro[0][1]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][1]=='X')||
    (tabuleiro[0][2]=='X' && tabuleiro[1][2]=='X' && tabuleiro[2][2]=='X')||
    (tabuleiro[0][0]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][2]=='X')||
    (tabuleiro[0][2]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][0]=='X'))
    {
    return 1;//A mesma coisa de return 1,s� que em vez de 2 � 1...
    }
    if(nJogada>=9)
    {
    return 3;//A mesma coisa de return 1,s� que em vez de 1 � 3...
    }
return -1;//A fun��o com 'int' sempre deve retornar algo,ent�o eu retorno algo que continue a execu��o do programa sem escolher
//vencedor
}

int checaFim (char tabuleiro[3][3],int nJogada) {//Determina a parada de entrada de escolhas de Xis e Bolinha pelos Jogadores...
    if((tabuleiro[0][0]=='O' && tabuleiro[0][1]=='O' && tabuleiro[0][2]=='O') ||
    (tabuleiro[1][0]=='O' && tabuleiro[1][1]=='O' && tabuleiro[1][2]=='O')||
    (tabuleiro[2][0]=='O' && tabuleiro[2][1]=='O' && tabuleiro[2][2]=='O')||
    (tabuleiro[0][0]=='O' && tabuleiro[1][0]=='O' && tabuleiro[2][0]=='O')||
    (tabuleiro[0][1]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][1]=='O')||
    (tabuleiro[0][2]=='O' && tabuleiro[1][2]=='O' && tabuleiro[2][2]=='O')||
    (tabuleiro[0][0]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][2]=='O')||
    (tabuleiro[0][2]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][0]=='O'))
    {
    return 0;//Caso alguem ganhe 'flagRepeticao' recebe Zero saindo do while
    }

    if((tabuleiro[0][0]=='X' && tabuleiro[0][1]=='X' && tabuleiro[0][2]=='X')||
    (tabuleiro[1][0]=='X' && tabuleiro[1][1]=='X' && tabuleiro[1][2]=='X')||
    (tabuleiro[2][0]=='X' && tabuleiro[2][1]=='X' && tabuleiro[2][2]=='X')||
    (tabuleiro[0][0]=='X' && tabuleiro[1][0]=='X' && tabuleiro[2][0]=='X')||
    (tabuleiro[0][1]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][1]=='X')||
    (tabuleiro[0][2]=='X' && tabuleiro[1][2]=='X' && tabuleiro[2][2]=='X')||
    (tabuleiro[0][0]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][2]=='X')||
    (tabuleiro[0][2]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][0]=='X'))
    {
    return 0;
    }
    if(nJogada>=9)
    {
    return 0;//O caso do empate...
    }
    return 1;//senao retorna 1(que � o mesmo valor que a variavel inicia) para que o programa continue no la�o...
}

void zeraTabuleiro(char tabuleiro[3][3]) {
int i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
    tabuleiro[i][j]=' ';
    /*printf("%c :: ",tabuleiro[i][j]);//SO PRA DEBUGAR MESMO
    getch();*/
    }
}
}

void permiteEscrita (char tabuleiro[3][3],int i,int j,int nJogada,char *jogador1,char *jogador2) {//Nessa fun��o determinamos
//se podemos entrar com o xis ou bola em uma determinada posi��o,caso ela j� esteja preenchida ou a coordenada seja maior
//que o par ordenado (3,3) ent�o continue lendo at� o jogador entrar com uma coordenada v�lida...

    if(tabuleiro[i-1][j-1]==' ')//QUESTAO 7 :: Ap�s a jogada de cada jogador, deve ser chamada uma fun��o que recebe por
    {                           //par�metro a matriz, o s�mbolo da jogada (X ou O), a linha e a coluna escolhida. Esta
        if(nJogada%2)           //fun��o deve verificar se a posi��o da matriz escolhida est� vazia (se � igual a 0, se sim,
        {                       //deve colocar o s�mbolo naquela posi��o).
        tabuleiro[i-1][j-1]='X';
        }
        else
        {
        tabuleiro[i-1][j-1]='O';
        }
    }
    else
    {
        if(nJogada%2!=1)
        {
        printf("Entrada Invalida,favor entre com uma coordeanada valida...");
        printf("\n%s, entre com a linha: ",jogador2);
        scanf("%d",&i);
        printf("\n%s, entre com a coluna: ",jogador2);
        scanf("%d",&j);
        }
        else
        {
        printf("Entrada Invalida,favor entre com uma coordeanada valida...");
        printf("\n%s, entre com a linha: ",jogador1);
        scanf("%d",&i);
        printf("\n%s, entre com a coluna: ",jogador1);
        scanf("%d",&j);
        }
    permiteEscrita(tabuleiro,i,j,nJogada,jogador1,jogador2);
    }
}

int main(void)
{
inicio://Aqui tem um rotulo usado para o jogo reiniciar com um 'goto'...
flagRepeticao = 1;
permiteJogo = 1;
flagCampeao = 0;//Resetando os valores das variaveis no inicio para tudo rodar direito...

while(flagRepeticao==1)
{
    system("cls");
    char bola='O',xis='X';


    char jogador1[40];
    char jogador2[40];

    int nJogada=1,j,i;

    printf("Entre com o nome do primeiro jogador: ");//QUESTAO 4 :: No in�cio do programa deve ser solicitado os nomes dos jogadores (criar duas vari�veis
    scanf("%s",&jogador1);                             //do tipo string: jogador1, jogador2 onde ser�o armazenados os nomes);
    fflush(stdin);
    printf("Entre com o nome do segundo jogador: ");
    scanf("%s",&jogador2);
    fflush(stdin);
    zeraTabuleiro(tabuleiro);//QUESTAO 3 :: No in�cio do programa a matriz deve ser inicializada com valores zero (criar uma
                            //fun��o para isto) � Garantia de que se 0 a posi��o est� vazia;
                            //Ex.: M[i][j]=�0�
    system("cls");
    printf("\n");

while(permiteJogo==1)
{
    system("cls");  //QUESTAO 9 :: A cada jogada, o tabuleiro deve ser atualizado e exibido para o pr�ximo jogador com
                    //os s�mbolos preenchidos (criar uma fun��o para imprimir a matriz).
    for(i=0;i<3;i++)//Imprimindo o tabuleiro...
    {
    printf("\t\t     %c \xBA %c \xBA %c\n",tabuleiro[i][0],tabuleiro[i][1],tabuleiro[i][2]);
        if(i<2)
        {
        printf("\t\t    ���\xCE���\xCE���\n");
        }
    }
    printf("\n");

    if(nJogada%2)                                //QUESTAO 6 :: Deve ser solicitada a jogada de cada jogador (Jogador 1 e Jogador 2), onde os mesmos
    {                                           //v�o indicar em que linha e em que coluna eles querem jogar. Jogador 1 usa o s�mbolo
    printf("%s, entre com a linha: ",jogador1);//�X� e Jogador 2 o s�mbolo �O�;
    scanf("%d",&i);
    printf("%s, entre com a coluna: ",jogador1);
    scanf("%d",&j);
        while(((i<1) || (i>3)) || ((j<1) || (j>3)))//Tratamento de erros com casos de coordenadas muito grandes...
        {
        printf("Entrada Invalida,favor entre com uma coordeanada valida...");
        printf("\n%s, entre com a linha: ",jogador1);
        scanf("%d",&i);
        printf("\n%s, entre com a coluna: ",jogador1);
        scanf("%d",&j);
        }
    }
    else
    {
    printf("%s, entre com a linha: ",jogador2);
    scanf("%d",&i);
    printf("%s, entre com a coluna: ",jogador2);
    scanf("%d",&j);
        while(((i<1) || (i>3)) || ((j<1) || (j>3)))
        {
        printf("Entrada Invalida,favor entre com uma coordeanada valida...");
        printf("\n%s, entre com a linha: ",jogador2);
        scanf("%d",&i);
        printf("\n%s, entre com a coluna: ",jogador2);
        scanf("%d",&j);
        }
    }
permiteEscrita(tabuleiro,i,j,nJogada,jogador1,jogador2);
nJogada++;//quando nJogada%2 o programa alterna entre Bola e Xis e caso seja nJogada>=9 entao deu velha,essa variavel � bem importante...
flagCampeao = checaCampeao(tabuleiro,nJogada);
permiteJogo = checaFim(tabuleiro,nJogada);  //QUEST�O 8 :: Deve ser criada uma fun��o que recebe a matriz por par�metro e verifica e retorna 1
                                            //se o Jogado 1 venceu, 2 se o Jogador 2 venceu. Essa fun��o deve fazer os testes para
                                            //verificar se os jogadores fizeram a sequ�ncia (testar cada linha, cada coluna, diagonal
                                            //principal e diagonal secund�ria).
                                            //Ex: if ((M[0][0]=�X�)&&(M[0][1]=�X�)&&(M[0][2]=�X�))
                                            //return 1;

/*ESBO�O DA FUN��O :: Eu escrevi o programa no inicio sem fun��es e a� fui dissolvendo em fun��es segundo a necessidade dos
exerc�cios do trabalho,essa parte abaixo � uma das mais importantes para o funcionamento do mesmo,ela define quem ganha,quando
ganha ou quando empata,porque quando empata os dois jogadores empatam...

    if((tabuleiro[0][0]=='O' && tabuleiro[0][1]=='O' && tabuleiro[0][2]=='O') ||
    (tabuleiro[1][0]=='O' && tabuleiro[1][1]=='O' && tabuleiro[1][2]=='O')||
    (tabuleiro[2][0]=='O' && tabuleiro[2][1]=='O' && tabuleiro[2][2]=='O')||
    (tabuleiro[0][0]=='O' && tabuleiro[1][0]=='O' && tabuleiro[2][0]=='O')||
    (tabuleiro[0][1]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][1]=='O')||
    (tabuleiro[0][2]=='O' && tabuleiro[1][2]=='O' && tabuleiro[2][2]=='O')||
    (tabuleiro[0][0]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][2]=='O')||
    (tabuleiro[0][2]=='O' && tabuleiro[1][1]=='O' && tabuleiro[2][0]=='O'))
    {
    //return 2;
    permiteJogo = 0;
    flagCampeao = 2;
    }

    if((tabuleiro[0][0]=='X' && tabuleiro[0][1]=='X' && tabuleiro[0][2]=='X')||
    (tabuleiro[1][0]=='X' && tabuleiro[1][1]=='X' && tabuleiro[1][2]=='X')||
    (tabuleiro[2][0]=='X' && tabuleiro[2][1]=='X' && tabuleiro[2][2]=='X')||
    (tabuleiro[0][0]=='X' && tabuleiro[1][0]=='X' && tabuleiro[2][0]=='X')||
    (tabuleiro[0][1]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][1]=='X')||
    (tabuleiro[0][2]=='X' && tabuleiro[1][2]=='X' && tabuleiro[2][2]=='X')||
    (tabuleiro[0][0]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][2]=='X')||
    (tabuleiro[0][2]=='X' && tabuleiro[1][1]=='X' && tabuleiro[2][0]=='X'))
    {
    //return 1;
    permiteJogo = 0;
    flagCampeao = 1;
    }
    if(nJogada>=9)
    {
    permiteJogo = 0;
    //return 3;
    flagCampeao = 3;
    }
*/
}
if(flagCampeao==1)//QUEST�O 10 :: No final do jogo deve ser informado o nome do campe�o ou no caso de empate a
{                //express�o �deu velha!�.
system("cls");
    for(i=0;i<3;i++)//Desenha o tabuleiro atualizado com a ultima jogada e informa o campeao ou empate(depende do valor de
                    //'flagCampeao')...
    {
    printf("\t\t     %c \xBA %c \xBA %c\n",tabuleiro[i][0],tabuleiro[i][1],tabuleiro[i][2]);
        if(i<2)
        {
        printf("\t\t    ���\xCE���\xCE���\n");
        }
    }
    printf("\n");

printf("%s Venceu!",jogador1);
}
if(flagCampeao==2)
{
system("cls");
    for(i=0;i<3;i++)
    {
    printf("\t\t     %c \xBA %c \xBA %c\n",tabuleiro[i][0],tabuleiro[i][1],tabuleiro[i][2]);
        if(i<2)
        {
        printf("\t\t    ���\xCE���\xCE���\n");
        }
    }
    printf("\n");

printf("%s Venceu!",jogador2);
}
if(flagCampeao==3)
{
system("cls");
    for(i=0;i<3;i++)
    {
    printf("\t\t     %c \xBA %c \xBA %c\n",tabuleiro[i][0],tabuleiro[i][1],tabuleiro[i][2]);
        if(i<2)
        {
        printf("\t\t    ���\xCE���\xCE���\n");
        }
    }
    printf("\n");
printf("Deu velha!");
}


int esc = 0;                            //QUESTAO 5 :: Na fun��o principal o programa dever� ter uma estrutura de repeti��o condicional
                                        //para controlar a execu��o do jogo, pois deve ser verificado at� quando jogar;
printf("\n\nO que deseja fazer: ");//Menu para o jogador escolher sair do jogo ou continuar a jogar...
printf("\n    1 -> Jogar Novamente");
printf("\n    2 -> Sair");
scanf("%d",&esc);
while((esc<1) || (esc>2))//TRATAMENTO DE ERROS CASO O USUARIO ENTRE COM OP��ES INV�LIDAS
{
system("cls");
printf("\n\nO que deseja fazer: ");
printf("\n  1 -> Jogar Novamente");
printf("\n  2 -> Sair");
scanf("%d",&esc);
}
if(esc==1)
{
goto inicio;//Vai pro rotulo inicio come�ando tuuudo de novo...
}
else
{
printf("Saindo,clique qualquer tecla para sair...");
flagRepeticao = 0;//SAINDO DO LA�O QUEBRANDO A CONDICAO 'flagRepeticao==1'
}
getch();
return 0;
}
}
//RAUL SEIXAS PREFERE "C"..
