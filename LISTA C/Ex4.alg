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
// Fun��o : 4) Dado um vetor de 10 posi��es, com valores
//informado pelo usu�rio, fazer uma fun��o que
//imprima o vetor.

// Autor : Luis Vinicius Costa Silva
// Data : 16/4/2014
// Se��o de Declara��es
var
vet : vetor [1..10] de inteiro
i : inteiro
inicio
para i de 1 ate 10 faca
limpatela
escreva("Entre com o ",i,"� elemento do vetor: ")
leia(vet[i])
fimpara
escreval("")
escreva("Vetor : {")
i<-escreveVetor(0)//Acho que um procedimento seria melhor nesse caso mas j�
//que o exerc�cio pede fun��o ent�o eu s� passo um argumento pra fun��o ser executada
escreva(" }")
fimalgoritmo
