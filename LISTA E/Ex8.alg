algoritmo "Lista6_Ex8"
// Função : 8) Faça um algoritmo que leia uma matriz 2 x 3, mat1,
//e uma matriz 2 x 3, mat2, e imprima na tela a soma de
//todos os elementos das matrizes colocados em uma
//matriz 3, chamada mat3.

// Autor : Luis Vinicius Costa Silva
// Data : 14/4/2014
// Seção de Declarações
var
mat1,mat2,mat3 : vetor[1..2,1..3] de inteiro
i,j,k,soma : inteiro
inicio
para k de 1 ate 2 faca
   para i de 1 ate 2 faca
      para j de 1 ate 3 faca
         limpatela
         escreva("Entre com o elemento da",k,"ª matriz da",i,"ª linha e da ",j,"ª coluna: ")
         se k=1 entao
            leia(mat1[i,j])
         senao
            leia(mat2[i,j])
         fimse
      fimpara
   fimpara
fimpara

para i de 1 ate 2 faca
   para j de 1 ate 3 faca
      mat3[i,j] <- mat1[i,j] + mat2[i,j]
   fimpara
fimpara

escreva("A soma das matrizes é igual a : ")
escreval("")
para i de 1 ate 2 faca
   escreval("")
   para j de 1 ate 3 faca
      escreva(mat3[i,j])
   fimpara
fimpara


fimalgoritmo
