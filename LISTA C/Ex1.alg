funcao Soma (x,y:real) : real
var
resultado : real
inicio
resultado <- x+y
retorne resultado
fimfuncao

funcao Subtracao (x,y:real) : real
var
resultado : real
inicio
resultado <- x-y
retorne resultado
fimfuncao

funcao Multiplicacao (x,y:real) : real
var
resultado : real
inicio
resultado <- x*y
retorne resultado
fimfuncao

funcao Divisao (x,y:real) : real
var
resultado : real
inicio
resultado <- x/y
retorne resultado
fimfuncao


procedimento MostraOpcoes ()
var
flag : logico
inicio
flag <- verdadeiro
enquanto flag=verdadeiro faca
   limpatela
   escreval("")
   escreval("Entre com a Op��o Desejada: ")
   escreval("")
   escreval("1 :: SOMA")
   escreval("2 :: SUBTRA��O")
   escreval("3 :: MULTIPLICA��O")
   escreval("4 :: DIVIS�O")
   escreval("")
   leia(esc)
   limpatela
   se (esc>0) e (esc<5) entao
      flag <- falso
   fimse
fimenquanto
fimprocedimento

procedimento DelegaFuncoes (esc : inteiro)
inicio
escolha esc
caso 1
   escreva(n1," +",n2," =",Soma(n1,n2))
caso 2
   escreva(n1," -",n2," =",Subtracao(n1,n2))
caso 3
   escreva(n1," *",n2," =",Multiplicacao(n1,n2))
caso 4
   escreva(n1," /",n2," =",Divisao(n1,n2))
outrocaso
   limpatela
   escreval("ERRO NA DELEGA��O DE FUN��ES!")
fimescolha
fimprocedimento

procedimento ImprimeResultado ()
escreva()
fimprocedimento

algoritmo "Lista07_Ex1"
// Fun��o : 1) Dado dois n�meros fa�a um programa que:
// -Calcule a soma
// -Calcule a subtra��o
// -Calcule a multiplica��o
// -Calcule a divis�o
// -Imprima o resultado
// Obs.: Utilize uma fun��o para cada opera��o
// aritm�tica, retornando o valor.
// Obs.: Utilize um procedimento para a impress�o do
//resultado.

// Autor : Luis Vinicius Costa Silva
// Data : 16/4/2014
// Se��o de Declara��es
var
n1,n2,resultado:real
esc : inteiro
inicio
escreva("Entre com o 1� n�mero: ")
leia(n1)
escreva("Entre com o 2� n�mero: ")
leia(n2)
MostraOpcoes()
DelegaFuncoes(esc)
fimalgoritmo
