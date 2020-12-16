procedimento ordenacao (n1,n2,n3,n4:inteiro)
var
vet : vetor [1..4] de inteiro
i,j,aux:inteiro
inicio
vet[1] <- n1
vet[2] <- n2
vet[3] <- n3
vet[4] <- n4

para i de 1 ate 4 faca
para j de 1 ate i-1 faca
se vet[i]<vet[j] entao
aux <- vet[i]
vet[i] <- vet[j]
vet[j] <- aux
fimse
fimpara
fimpara
escreval("")
escreva("Os números ordenados são: {")
para i de 1 ate 3 faca
escreva(vet[i]," :: ")
fimpara
escreva(vet[4]," }")
escreval("")

fimprocedimento

algoritmo "Lista07_Ex3"
// Função : 3) Ler quatro valores inteiros e imprimir quais
//foram os valores digitados. Depois, usando um
//procedimento, colocá-los em ordem crescente e
//imprimi-los ordenados.

// Autor : Luis Vinicius Costa Silva
// Data : 16/4/2014
// Seção de Declarações
var
n1,n2,n3,n4 : inteiro
inicio
escreva("Digite os números: ")
leia(n1,n2,n3,n4)
limpatela
escreval("Você Digitou os valores {",n1," ::",n2," ::",n3," ::",n4," }")
ordenacao(n1,n2,n3,n4)
fimalgoritmo
