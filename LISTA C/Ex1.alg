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
   escreval("Entre com a Opção Desejada: ")
   escreval("")
   escreval("1 :: SOMA")
   escreval("2 :: SUBTRAÇÃO")
   escreval("3 :: MULTIPLICAÇÃO")
   escreval("4 :: DIVISÃO")
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
   escreval("ERRO NA DELEGAÇÃO DE FUNÇÕES!")
fimescolha
fimprocedimento

procedimento ImprimeResultado ()
escreva()
fimprocedimento

algoritmo "Lista07_Ex1"
// Função : 1) Dado dois números faça um programa que:
// -Calcule a soma
// -Calcule a subtração
// -Calcule a multiplicação
// -Calcule a divisão
// -Imprima o resultado
// Obs.: Utilize uma função para cada operação
// aritmética, retornando o valor.
// Obs.: Utilize um procedimento para a impressão do
//resultado.

// Autor : Luis Vinicius Costa Silva
// Data : 16/4/2014
// Seção de Declarações
var
n1,n2,resultado:real
esc : inteiro
inicio
escreva("Entre com o 1º número: ")
leia(n1)
escreva("Entre com o 2º número: ")
leia(n2)
MostraOpcoes()
DelegaFuncoes(esc)
fimalgoritmo
