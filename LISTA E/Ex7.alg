algoritmo "Lista6_Ex7"
// Função : 7. Crie uma matriz 7X8 onde cada elemento é a
//soma dos índices de sua posição dentro da
//matriz.

// Autor : Luis Vinicius Costa Silva
// Data : 14/4/2014
// Seção de Declarações
var
mat : vetor[1..7,1..8] de inteiro
soma,i,j : inteiro
inicio
para i de 1 ate 7 faca
para j de 1 ate 8 faca
soma <- soma + i +j
fimpara
fimpara

escreva("A soma é : ",soma)
fimalgoritmo
