algoritmo "Lista4_Ex25"
// Enunciado : Assuma que o trabalhador do exerc�cio anterior
//deve pagar 10% de imposto se o seu sal�rio anual for
//menor ou igual a R$ 12.000,00. Caso o sal�rio seja
//maior que este valor o imposto devido � igual a 10%
//sobre R$ 12000.00 mais 25% sobre o que passar de
//R$ 12000.00. Escreva um programa que calcule o
//imposto devido pelo trabalhador.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
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
   escreval("O sal�rio anual bruto �: R$",salano)
   escreval("O sal�rio anual com tributa��o �: R$",salano*0.90)
   escreval("O total de desconto dos impostos �: R$",salano-(salano*0.9))
senao
   escreval("O sal�rio anual bruto �: R$",salano)
   escreval("O sal�rio anual com desconto dos impostos �: R$",(12000*0.9)+((salano-12000)*0.25))
   escreval("O total de desconto dos impostos �: R$",salano-((12000*0.9)+((salano-12000)*0.25)))
fimse
fimalgoritmo
