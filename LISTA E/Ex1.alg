algoritmo "Lista6_Ex1"
// Função : 1. Faça um algoritmo para ler uma matriz de 3×4
//de números inteiro e depois exibir toda a matriz
//e, por fim, o elemento do canto superior
//esquerdo e do canto inferior direito.

// Autor : Luis Vinicius Costa Silva
// Data : 14/4/2014
// Seção de Declarações
var
mat : vetor[1..3,1..4] de inteiro
i,j,x : inteiro
inicio
para i de 1 ate 3 faca
   para j de 1 ate 4 faca
      limpatela
      escreva("Entre com o elemento da",i,"ª linha e da",j,"ª coluna: ")
      leia(mat[i,j])
   fimpara
fimpara
limpatela
escreva("O elemento do canto superior esquerdo é",mat[1,1])
escreval("")
escreval("O elemento do canto inferior direito é",mat[3,4])
fimalgoritmo
