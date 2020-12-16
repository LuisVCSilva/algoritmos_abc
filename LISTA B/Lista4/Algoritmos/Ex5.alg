algoritmo "LISTA4_Ex5"
// Enunciado : Escreva um algoritmo que leia 2 variáveis inteiras e troque o
//conteúdo entre elas.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações 
var
n1,n2,aux : inteiro
inicio
escreva("Digite os valores: ")
leia(n1,n2)
limpatela
escreval("n1 = ",n1," :: ","n2 = ",n2)
aux <- n1
n1 <- n2
n2 <- aux
escreval("")
escreval("Troca de Valores: ")
escreval("")
escreval("n1 = ",n1," :: ","n2 = ",n2)
fimalgoritmo
