#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
#include <pthread.h>
#include <string.h>
#include <math.h>
#include <time.h>

struct No {
    mpz_t valor;
    mpz_t Expoente;
    struct No *prox;
};
typedef struct No TipoNo;

struct Pilha {
    TipoNo *topo;
    unsigned int tamanho;
};
typedef struct Pilha TipoPilha;

void IniciaPilha(TipoPilha *pilha);
unsigned int Vazia(TipoPilha *pilha);
void Empilha(mpz_t x, TipoPilha *pilha,int possuiExpoente);
void Desempilha(TipoPilha *pilha,TipoNo *saida);
void topo(TipoPilha *pilha,mpz_t *saida);
void ImprimePilha (mpz_t b,TipoPilha *primos,int ativaExpoente);
void Fatora (mpz_t b,mpz_t bGeral,TipoPilha *primos,int ativaExpoente);
void ComputaMultiplo (mpz_t *x,mpz_t b,mpz_t limite);
int ehPrimo (mpz_t b);

void IniciaPilha(TipoPilha *pilha)
{
    pilha->topo = NULL;
    pilha->tamanho = 0;
}

unsigned int Vazia(TipoPilha *pilha)
{
    return (pilha->tamanho==0);
}

void Empilha(mpz_t x, TipoPilha *pilha,int possuiExpoente)// 2) EMPILHAR DE ACORDO COM A OPCAO DE EXPOENTE
{
if(mpz_cmp_ui(x,1)!=0)
{
x->ehPrimo = 0;
    if(!Vazia(pilha))
    {
        if(mpz_cmp(x,pilha->topo->valor)==0)
        {
        mpz_add_ui(pilha->topo->Expoente,pilha->topo->Expoente,1);
        }
        else
        {
        TipoNo *aux;
        aux = (TipoNo *) malloc(sizeof(TipoNo));

        mpz_init(aux->valor);
        mpz_set(aux->valor,x);

        aux->prox = pilha->topo;
        pilha->topo = aux;

        mpz_init(pilha->topo->Expoente);

        mpz_set_ui(pilha->topo->Expoente,1);
        pilha->tamanho++;
        }
    }
    else
    {
    TipoNo *aux;
    aux = (TipoNo *) malloc(sizeof(TipoNo));

    mpz_init(aux->valor);
    mpz_set(aux->valor,x);

    aux->prox = pilha->topo;
    pilha->topo = aux;

    mpz_init(pilha->topo->Expoente);

    mpz_set_ui(pilha->topo->Expoente,1);
    pilha->tamanho++;
    }
}
}

void Desempilha(TipoPilha *pilha, TipoNo *saida)
{
TipoNo *q;
mpz_t v;mpz_init(v);
mpz_t e;mpz_init(e);
    if(Vazia(pilha))
    {
    saida = NULL;
    }
    else
    {
    q = pilha->topo;
    pilha->topo = q->prox;
    mpz_set(v,q->valor);
    mpz_set(e,q->Expoente);
    free(q);
    pilha->tamanho--;
        if(saida!=NULL)
        {
        mpz_set(saida->valor,v);
        mpz_set(saida->Expoente,e);
        saida->prox = NULL;
        }
    }
}

void topo(TipoPilha *pilha,mpz_t *saida)
{
mpz_t s;
mpz_init(s);
mpz_set_si(s,-1);
mpz_set(*saida,s);
}

void ImprimePilha (mpz_t b,TipoPilha *primos,int ativaExpoente) {
//gmp_fprintf(arquivo," >> %Zd = ",b);
gmp_printf(" >> %Zd = ",b);
    while(primos->tamanho!=1)
    {
    gmp_printf("%Zd^%Zd * ",primos->topo->valor,primos->topo->Expoente);
    Desempilha(primos,NULL);
    }
    gmp_printf("%Zd^%Zd\n",primos->topo->valor,primos->topo->Expoente);
    Desempilha(primos,NULL);
}

pthread_t threads[2];
void *thread_func(void *arg) {
}

int main (int argc, char *argv[]) {
//(10^103)-1 = 9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999 = 153211620887015423991278431667808361439217294295901387715486473457925534859044796980526236853^1 * 7034077^1 * 1031^1 * 3^2 => 0.224 s
mpz_t b;mpz_init_set_str(b,"9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999",0);
//mpz_mul(b,b,b);
TipoPilha *primos;
primos = (TipoPilha *) malloc (sizeof(TipoPilha));
IniciaPilha(primos);
Fatora(b,b,primos,0);
ImprimePilha(b,primos,0);
return 0;
}

void ProdutoDePilha (TipoPilha *primos,mpz_t saida,int ativaExpoente) {
TipoPilha *pilha2;
pilha2 = (TipoPilha *) malloc (sizeof(TipoPilha));
IniciaPilha(pilha2);
}

void Fatora (mpz_t b,mpz_t bGeral,TipoPilha *primos,int ativaExpoente) {
mpz_t *x;x = (mpz_t *) malloc(sizeof(mpz_t)*2);

mpz_init(*(x+0));
mpz_init(*(x+1));
mpz_t limite;mpz_init(limite);
mpz_sqrt(limite,b);
ComputaMultiplo(x,b,limite);

/*mpz_t valorParcial;mpz_init(valorParcial);
mpz_t complemento;mpz_init(complemento);
ProdutoDePilha(primos,valorParcial,ativaExpoente);
mpz_divexact(complemento,b,valorParcial);
gmp_printf("\n%Zd/%Zd\n\n",bGeral,valorParcial);
*/
//gmp_printf("\n%Zd = (M){%Zd, %Zd}\n",b,(x+0),(x+1));
    if((mpz_cmp_ui((*(x+0)),1)!=0))
    {
    Empilha(*(x+0),primos,ativaExpoente);
    Fatora(*(x+1),bGeral,primos,ativaExpoente);
    }
    else
    {
    Empilha(*(x+0),primos,ativaExpoente);
    Empilha(*(x+1),primos,ativaExpoente);
    free(x);
    }
}

void ComputaMultiplo (mpz_t *x,mpz_t b,mpz_t limite) {
//gmp_printf("\n\nTestando Multiplos de %Zd ate %Zd",b,limite);
mpz_init(*(x+0));
mpz_set_ui(*(x+0),1);//x[0] = 1

mpz_init(*(x+1));
mpz_set(*(x+1),b);//x[1] = b

mpz_t i;
mpz_init(i);
mpz_set_ui(i,mpz_divisible_ui_p(b,2) ? 2 : 3);//i = 2

mpz_t flagMod;
mpz_init(flagMod);
mpz_set_ui(flagMod,2);//flagMod = 1

mpz_t multiplo2;
mpz_init(multiplo2);
mpz_set(multiplo2,b);

mpz_t testeRaiz;mpz_init(testeRaiz);
mpz_sqrt(testeRaiz,b);
if((mpz_probab_prime_p(b,99)!=1))
{
    if((mpz_divisible_ui_p(b,2)==0) || (mpz_divisible_ui_p(b,3)==0))
    {
        for(;;)
        {
        //gmp_printf("\n%Zd -> %Zd",i,b);
            if(mpz_divisible_p(b,i)!=0)//if(b%i==0)
            {
            mpz_set(*(x+0),i);//x[0] = i
            mpz_divexact(multiplo2,b,i);
            mpz_set(*(x+1),multiplo2);//x[1] = b/i
            break;
            }
            /*mpz_mul_ui(i,i,6);
            mpz_add_ui(i,i,1);*/
            mpz_add_ui(i,i,2);
            if(mpz_cmp(i,b)>0)
            {
            break;
            }
        }
    }
    else
    {
        if(mpz_divisible_ui_p(b,2)!=0)//if(b%2==0)
        {
        mpz_set_ui(*(x+0),2);//x[0] = 2
        mpz_divexact_ui(multiplo2,b,2);
        mpz_set(*(x+1),multiplo2);//x[1] = b/2
        }
        else
        {
        mpz_set_ui(*(x+0),3);//x[0] = 3
        mpz_divexact_ui(multiplo2,b,3);
        mpz_set(*(x+1),multiplo2);//x[1] = b/3
        }
    }
}
else
{
    if(mpz_probab_prime_p(b,99)==1)
    {
    mpz_set_ui(*(x+0),1);
    mpz_set(*(x+1),b);
    }
    else
    {
    mpz_set_ui(*(x+0),2);
    mpz_set(*(x+1),testeRaiz);
    }
}
}
/*int ehPrimo (mpz_t b) {
mpz_t *x;
x = (mpz_t *) malloc(sizeof(mpz_t)*2);
if(b->ehPrimo==0)
{
ComputaMultiplo(*(&x),b,b);
}
//gmp_printf( ((mpz_cmp_ui(*(x+0),1)==0) || (mpz_cmp_ui(*(x+1),1)==0)) ? "\n %Zd = {%Zd,%Zd} -> PRIMO\n" : "\n %Zd = {%Zd,%Zd} -> COMPOSTO\n",b,*(x+0),*(x+1));
return ((b->ehPrimo==1) || (mpz_cmp_ui(*(x+0),1)==0) || (mpz_cmp_ui(*(x+1),1)==0));
}*/