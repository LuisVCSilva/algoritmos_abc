algoritmo "Lista6_Ex1"
// Fun��o : 1. Fa�a um algoritmo para ler uma matriz de 3�4
//de n�meros inteiro e depois exibir toda a matriz
//e, por fim, o elemento do canto superior
//esquerdo e do canto inferior direito.

// Autor : Luis Vinicius Costa Silva
// Data : 14/4/2014
// Se��o de Declara��es
var
mat : vetor[1..3,1..4] de inteiro
i,j,x : inteiro
inicio
para i de 1 ate 3 faca
   para j de 1 ate 4 faca
      limpatela
      escreva("Entre com o elemento da",i,"� linha e da",j,"� coluna: ")
      leia(mat[i,j])
   fimpara
fimpara
limpatela
escreva("O elemento do canto superior esquerdo �",mat[1,1])
escreval("")
escreval("O elemento do canto inferior direito �",mat[3,4])
fimalgoritmo
