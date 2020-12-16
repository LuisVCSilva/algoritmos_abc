algoritmo "Lista4_Ex24"
// Enunciado : Uma empresa paga R$ 10.00 por hora normal
//trabalhada e R$ 15.00 por hora extra. Escreva um
//programa que leia o total de horas normais e o total
//de horas extras trabalhadas por um empregado em
//um ano e calcule o salário anual deste trabalhador.

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
escreva("O salário anual correspondente é: R$",salano)
fimalgoritmo
