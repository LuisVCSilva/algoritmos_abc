algoritmo "Lista4_Ex31"
// Enunciado : Faça um algoritmo que converta reais em
//dólares. Para tanto a primeira parte do algoritmo
//serve para perguntar o valor do dólar. E depois o
//usuário pode escolher qual tipo de conversão ele
//quer:

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
cambio,cotDol : real
escambio : inteiro
flag : logico
inicio
flag <- verdadeiro
escreva("Entre com a cotação do Dólar: ")
leia(cotDol)
escreval("")
escreval("")
enquanto flag=verdadeiro faca
limpatela
escreval("Entre com a opção desejada")
escreval("")
escreval("1 :: Dólar >> Real")
escreval("2 :: Real >> Dólar")
leia(escambio)
escolha escambio
caso 1
flag <- falso

escreva("Entre com a quantia em Dólar: ")
leia(cambio)
escreva(cambio," dólares valem R$",cambio*cotDol)
caso 2
flag <- falso
escreva("Entre com a quantia em Reais: ")
leia(cambio)
escreva(cambio," Reais valem $",cotDol/cambio)
fimescolha
fimenquanto
fimalgoritmo
