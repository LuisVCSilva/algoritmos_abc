/*
_________________________________________________________________________

Exercício 15): Funcionário e Salário
_________________________________________________________________________

Escrever um programa para atribuir valores aos dados do funcionário: o nome, salário, idade e sexo para um registro de com 100 funcionários.
Inserção -> A inserção dos dados de um funcionário pode ser feita a qualquer momento, desde que tenha espaço no vetor para armazenar. Lembre-se que a inserção deve se dar na 1° posição livre do vetor.
Exclusão -> A exclusão dos dados de um funcionário pode ser feita a qualquer momento, desde que tenha funcionários cadastrados. Para exclusão, exclua pelo nome, se houver nome repetido apresente-os para que o usuário possa escolher qual registro ser excluído.
Impressão -> Implemente uma função para mostrar os registros na tela de todos os funcionários, de acordo com as possibilidades:
- nome de todos funcionários cadastrados,
- nome e salário,
- informação completa do funcionário.
O programa deve permitir também que seja selecionado um único funcionário e exibido seus dados de acordo com as opções da função de exibir dados na tela.
Escreva a função main para chamar as funções.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define nFuncionario 100

int checaCPF (char cpf[]) {
char dig10, dig11;
int sm, i, r, num;
sm = 0;
for (i=0; i<9; i++)
{
num = cpf[i] - 48;
sm = sm + (num * (10 - i));
}
r = 11 - (sm % 11);
if ((r == 10) || (r == 11))
dig10 = '0';
else
dig10 = r + 48;
sm = 0;
for (i=0; i<10; i++)
{
num = cpf[i] - 48;
sm = sm + (num * (11 - i));
}
r = 11 - (sm % 11);
if ((r == 10) || (r == 11))
{
dig11 = '0';
}
else
dig11 = r + 48;
return ((dig10 == cpf[9]) && (dig11 == cpf[10]))? 0 : 1;//CPF Valido
}

enum sexo
{
Masculino=1,
Feminino
};
typedef enum sexo tipoSexo;

typedef struct funcionario {
char nome[40];
int idade;
float salario;
tipoSexo genero;
}tipoFuncionario;

void ImprimeFuncionario (tipoFuncionario *x,int flag1,int flag2,int flag3,int flag4) {
if((*(x+0)).nome!='\0')
{
if(flag1==0)
printf("\nNome: %s",(*x).nome);
if(flag2==0)
printf("\nIdade: %d",(*x).idade);
if(flag3==0)
printf("\nSalario: %f",(*x).salario);
if(flag4==0)
{
switch((*x).genero)
{
case 1:
printf("\nGenero: Masculino");
break;
case 2:
printf("\nGenero: Feminino");
break;
default:
exit(1);
}
}
}
}

void Insere (tipoFuncionario *x,int *nContatos) {
int i=0;
for(i=*nContatos;i<nFuncionario;i++)
{
system("cls");
printf("\nEntre com o nome do Funcionario: ");
scanf("%s",&(*(x+i)).nome);

printf("\nEntre com a idade do Funcionario: ");
scanf("%d",&(*(x+i)).idade);

printf("\nEntre com o salario do Funcionario: ");
scanf("%f",&(*(x+i)).salario);

inicio:
system("cls");
printf("\n\t\t\tEntre com o genero do Funcionario %s: ",(*(x+i)).nome);
printf("\n\n\t\t\t1 :: Masculino");
printf("\n\n\t\t\t2 :: Feminino\n\n\t\t\t");
scanf("%d",&(*(x+i)).genero);

switch((*(x+i)).genero)
{
case Masculino:
printf("\n\nFuncionario Cadastrado!\n\nNome: %s\nIdade: %d\nSalario: %f",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).salario,(*(x+i)).salario);
printf("\nGenero: Masculino");
break;

case Feminino:
printf("\n\nFuncionaria Cadastrado!\n\nNome: %s\nIdade: %d\nSalario: %f",(*(x+i)).nome,(*(x+i)).idade,(*(x+i)).salario,(*(x+i)).salario);
printf("\nGenero: Feminino");
break;

default:
goto inicio;
}
getch();
short int nEsc;
inicio2:
nEsc = 0;
system("cls");
printf("\n\t\t\tDeseja cadastrar um novo funcionario?");
printf("\n\n\t\t\t1 :: Sim");
printf("\n\n\t\t\t2 :: Nao\n\n\t\t\t:");
scanf("%d",&nEsc);
switch(nEsc) {

case 1:
continue;
break;

case 2:
i = nFuncionario;
break;

default:
goto inicio2;
}

system("pause");
}
}

void Exclui (tipoFuncionario *x,int *nContatos) {
if(*nContatos>=1)
{
char nome[40];
printf("Entre com o nome: ");
scanf("%s",&nome);
int i,j=0;

int *p;
inicio:
p = (int *)malloc(1*sizeof(int));
if(p==NULL)
{
printf("\n\n\nMemoria Insuficiente!\n\n");
system("pause");
getch();
exit(1);
}
system("cls");
printf("\n\nListando Resultados %d",j+1);
for(i=0;i<nFuncionario;i++)
{
    if((strcmp(nome,(*(x+i)).nome)==0))
    {
    printf("\n\nFuncionario %d",j+1);
    p = (int*) realloc (p, (j+1)*sizeof(int));
    *(p+j) = i;

    ImprimeFuncionario((&(*(x+((*p+j))))),0,0,0,0);
    j++;
    }
}
int opcao;
printf("\n\nQual funcionario deseja apagar(especifique numero do funcionario)? ");
scanf("%d",&opcao);
getch();
if((opcao>j) || (opcao<1))
{
printf("Opcao Invalida");
free(p);
goto inicio;
}
else
{
printf("\nFuncionario excluido!\n");
getch();
(*(x+((*p+opcao)))).nome[0] = '\0';
(*(x+((*p+opcao)))).genero = -1;
(*(x+((*p+opcao)))).idade = 0;
free(p);
(*(x+((*p+opcao)))).idade = 0;
}
}
else
{
printf("\nNao existem funcionarios cadastrados...\n");
system("pause");
}
getch();
system("cls");
}

void Ver (tipoFuncionario *x,int tipoDeVis,int nContatos) {
int i;
if((*(x+0)).nome!='\0')
{
if(tipoDeVis==0)
{
    for(i=0;i<nContatos;i++)
    {
    ImprimeFuncionario((&(*(x+i))),0,1,1,1);
    }
}
else
{
    if(tipoDeVis==1)
    {
        for(i=0;i<nContatos;i++)
        {
        ImprimeFuncionario((&(*(x+i))),0,1,0,1);
        }
    }
    else
    {
        if(tipoDeVis==2)
        {
            for(i=0;i<nContatos;i++)
            {
            ImprimeFuncionario((&(*(x+i))),0,0,0,0);
            }
        }
        else
        {
        exit(1);
        }
    }
}
}
else
{
printf("\nNao existem funcionarios cadastrados...\n");
system("pause");
}
getch();
}

int CriaMenu (tipoFuncionario *x) {
int esc = 0;
int nContatos = 0;
inicio:
esc = 0;
system("cls");
printf("\n\t\t\t1 :: Inserir Funcionario\n\n\t\t\t2 :: Excluir Funcionario\n\n\t\t\t3 :: Visualizar dados\n\n\t\t\t4 :: Sair");
printf("\n\n\t\t\t: ");
scanf("%d",&esc);
int vesc;
switch (esc)
{
case 1:
Insere(&(*x),&nContatos);
nContatos++;
goto inicio;
break;

case 2:
Exclui((&(*x)),&nContatos);
goto inicio;
break;

case 3:
vesc = -1;
inicio2:
printf("\n\n\t\t\t1 :: Visualizar Apenas nomes\n\t\t\t2 :: Visualizar nomes e salarios\n\n\t\t\t3 :: Visualizar Todas as informacoes\n\n\n\n\t\t\t: ");
scanf("%d",&vesc);
    switch(vesc)
    {
    case 1:
    Ver((&(*x)),0,nContatos);
    break;

    case 2:
    Ver((&(*x)),1,nContatos);
    break;

    case 3:
    Ver((&(*x)),2,nContatos);
    break;

    default:
    goto inicio2;
    }
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

int main() {
int x[nFuncionario];
if(CriaMenu(&x)==-1)
{
printf("\n\nClique qualquer tecla para sair...");
}
return 0;
}
