algoritmo "Lista4_Ex31"
// Enunciado : Fa�a um algoritmo que converta reais em
//d�lares. Para tanto a primeira parte do algoritmo
//serve para perguntar o valor do d�lar. E depois o
//usu�rio pode escolher qual tipo de convers�o ele
//quer:

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
var
cambio,cotDol : real
escambio : inteiro
flag : logico
inicio
flag <- verdadeiro
escreva("Entre com a cota��o do D�lar: ")
leia(cotDol)
escreval("")
escreval("")
enquanto flag=verdadeiro faca
limpatela
escreval("Entre com a op��o desejada")
escreval("")
escreval("1 :: D�lar >> Real")
escreval("2 :: Real >> D�lar")
leia(escambio)
escolha escambio
caso 1
flag <- falso

escreva("Entre com a quantia em D�lar: ")
leia(cambio)
escreva(cambio," d�lares valem R$",cambio*cotDol)
caso 2
flag <- falso
escreva("Entre com a quantia em Reais: ")
leia(cambio)
escreva(cambio," Reais valem $",cotDol/cambio)
fimescolha
fimenquanto
fimalgoritmo
