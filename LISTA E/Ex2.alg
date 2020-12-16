algoritmo "Lista6_Ex2"
// Função : 2. Ler uma matriz 3X4 e gerar outra em que cada
//elemento é o dobro do elemento respectivo na
//matriz original.

// Autor : Luis Vinicius Costa Silva
// Data : 14/4/2014
// Seção de Declarações
var
mat1,mat2 : vetor[1..3,1..4] de inteiro
i,j : inteiro
inicio
para i de 1 ate 3 faca
   para j de 1 ate 4 faca
      limpatela
      escreva("Entre com o termo da ",i,"ª linha e da ",j,"ª coluna: ")
      leia(mat1[i,j])
   fimpara
fimpara

para i de 1 ate 3 faca
escreval("")
   para j de 1 ate 4 faca
      mat2[i,j] <- mat1[i,j]*2
      escreva(mat2[i,j])
   fimpara
fimpara


fimalgoritmo
