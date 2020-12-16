algoritmo "Lista6_Ex3"
// Função : 3. Faça um algoritmo para ler uma matriz 2X3
//real e depois gerar e imprimir sua transposta
//(matriz 3X2 equivalente).


// Autor : Luis Vinicius Costa Silva
// Data : 14/4/2014
// Seção de Declarações
var
mat1 : vetor[1..2,1..3] de inteiro
mat2 : vetor[1..3,1..2] de inteiro
i,j : inteiro
inicio
para i de 1 ate 2 faca
   para j de 1 ate 3 faca
      limpatela
      escreva("Entre com o termo da ",i,"ª linha e da ",j,"ª coluna: ")
      leia(mat1[i,j])
   fimpara
fimpara

limpatela
escreval("A Matriz Original é: ")
para i de 1 ate 2 faca
escreval("")
   para j de 1 ate 3 faca
      escreva(mat1[i,j])
   fimpara
fimpara

escreval("")
escreval("")

escreval("A Matriz Transposta é: ")

para i de 1 ate 3 faca
escreval("")
   para j de 1 ate 2 faca
      mat2[i,j] <- mat1[j,i]
      escreva(mat2[i,j])
   fimpara
fimpara


fimalgoritmo
