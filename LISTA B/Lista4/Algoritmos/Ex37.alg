algoritmo "LISTA4_Ex37"
// Enunciado : Ler dois valores para as variáveis A e B, e efetuar
//as trocas dos valores de forma que a variável A passe
//a possuir o valor da variável B e a variável B passe a
//possuir o valor da variável A. Apresentar os valores
//alterados.

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
