funcao escreveVetor(x:inteiro):inteiro
var
i : inteiro
inicio
para i de 1 ate 9 faca
escreva(vet[i],",")
fimpara
escreva(vet[10])
fimfuncao

algoritmo "Lista07_Ex4"
// Função : 4) Dado um vetor de 10 posições, com valores
//informado pelo usuário, fazer uma função que
//imprima o vetor.

// Autor : Luis Vinicius Costa Silva
// Data : 16/4/2014
// Seção de Declarações
var
vet : vetor [1..10] de inteiro
i : inteiro
inicio
para i de 1 ate 10 faca
limpatela
escreva("Entre com o ",i,"º elemento do vetor: ")
leia(vet[i])
fimpara
escreval("")
escreva("Vetor : {")
i<-escreveVetor(0)//Acho que um procedimento seria melhor nesse caso mas já
//que o exercício pede função então eu só passo um argumento pra função ser executada
escreva(" }")
fimalgoritmo
