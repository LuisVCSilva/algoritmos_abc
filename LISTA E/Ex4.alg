algoritmo "Lista6_Ex4"
// Fun��o : 4. Fa�a um algoritmo para ler uma matriz 3X3
//inteiro e imprimir a soma dos elementos da
//Diagonal principal.

// Autor : Luis Vinicius Costa Silva
// Data : 14/4/2014
// Se��o de Declara��es
var
mat : vetor[1..3,1..3] de inteiro
soma,i,j : inteiro

inicio
para i de 1 ate 3 faca
   para j de 1 ate 3 faca
      limpatela
      escreva("Digite o elemento da ",i,"� linha e ",j,"� coluna da Matriz: ")
      leia(mat[i,j])
      se i=j entao
      soma <- soma + mat[i,j]
      fimse
   fimpara
fimpara
limpatela
escreval("Matriz Original: ")
para i de 1 ate 3 faca
   escreval("")
   para j de 1 ate 3 faca
      escreva(mat[i,j])
   fimpara
fimpara
escreval("")
escreval("")
escreval("A soma da Diagonal Principal da Matriz �:",mat[1,1]," +",mat[2,2]," +",mat[3,3]," =",soma)
fimalgoritmo
