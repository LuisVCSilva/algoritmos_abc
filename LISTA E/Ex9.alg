algoritmo "Lista6_Ex9"
// Fun��o : 9) Fa�a um algoritmo que leia uma matriz 4 x 4,
//chamada mat, e imprima na tela a soma dos elementos
//abaixo da diagonal principal da matriz mat.

// Autor : Luis Vinicius Costa Silva
// Data : 14/4/2014
// Se��o de Declara��es
var
mat : vetor[1..4,1..4] de inteiro
i,j,soma : inteiro
inicio
para i de 1 ate 4 faca
   para j de 1 ate 4 faca
      limpatela
      escreva("Entre com o elemento da ",i,"� linha e da ",j,"� coluna: ")
      leia(mat[i,j])
      se i=j entao
      soma <- soma + mat[i,j]
      fimse
   fimpara
fimpara
limpatela

escreval("MATRIZ ORIGINAL : ")
escreval("")

para i de 1 ate 4 faca
escreval("")
   para j de 1 ate 4 faca
      escreva(mat[i,j])
   fimpara
fimpara

escreval("")
escreval("")

escreval("A soma da diagonal principal � : ")
para i de 1 ate 4 faca
se i<>4 entao
escreva(mat[i,i]," +")
senao
escreva(mat[i,i])
fimse
fimpara
escreva(" =",soma)
fimalgoritmo
