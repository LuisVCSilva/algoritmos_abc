funcao filtraeConta (argnulo : logico) : inteiro
var
i,contseq : inteiro
inicio
para i de 3 ate 100 faca
   se (vet[i]=4) e (vet[i-1]=3) e (vet[i-2]=1) entao
      contseq <- contseq+1
   fimse
retorne contseq
fimpara
fimfuncao

algoritmo "Lista07_Ex5"
// Fun��o : 5) Fazer um programa ler um vetor de inteiros
//positivos:
// Fazer um subprograma para imprimir quantas vezes
//aparece o n�mero 1, 3 e 4, nesta ordem.
// O vetor ter� no m�ximo 100 posi��es.
// Finalizar o programa quando for digitado -1.

// Autor : Luis Vinicius Costa Silva
// Data : 16/4/2014
// Se��o de Declara��es
var
vet : vetor[1..100] de inteiro
i,contseq : inteiro
flag : logico
inicio
i <- 1
flag <- verdadeiro
enquanto (i<=100) e (flag=verdadeiro) faca
limpatela
escreva("Digite o",i,"� elemento do vetor: ")
leia(vet[i])
se vet[i]=-1 entao
flag <- falso
fimse
i <- i+1
fimenquanto
contseq <- filtraeConta(verdadeiro)//N�o consegui passar argumentos com vetores pra fun��o ent�o
//coloquei essa gambiarra.Mas funciona! :D
escreva("A sequ�ncia 1,3 e 4 apareceu",contseq," vez(es).")
fimalgoritmo
