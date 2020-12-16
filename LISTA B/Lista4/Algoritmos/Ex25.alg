algoritmo "Lista4_Ex25"
// Enunciado : Assuma que o trabalhador do exercício anterior
//deve pagar 10% de imposto se o seu salário anual for
//menor ou igual a R$ 12.000,00. Caso o salário seja
//maior que este valor o imposto devido é igual a 10%
//sobre R$ 12000.00 mais 25% sobre o que passar de
//R$ 12000.00. Escreva um programa que calcule o
//imposto devido pelo trabalhador.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
tothnor,tothext : inteiro
salano : real
inicio
escreva("Digite o total de horas normais trabalhadas durante o ano: ")
leia(tothnor)
escreva("Digite o total de horas extras trabalhadas durante o ano: ")
leia(tothext)
limpatela
salano <- tothnor*10.0 + tothext*15.0
se salano<=12000 entao
   escreval("O salário anual bruto é: R$",salano)
   escreval("O salário anual com tributação é: R$",salano*0.90)
   escreval("O total de desconto dos impostos é: R$",salano-(salano*0.9))
senao
   escreval("O salário anual bruto é: R$",salano)
   escreval("O salário anual com desconto dos impostos é: R$",(12000*0.9)+((salano-12000)*0.25))
   escreval("O total de desconto dos impostos é: R$",salano-((12000*0.9)+((salano-12000)*0.25)))
fimse
fimalgoritmo
