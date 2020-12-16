algoritmo "Lista6_Ex5"
// Função : 5. Ler uma matriz 4X3 inteiro e imprimir a soma
//dos elementos de uma linha L fornecida pelo
//usuário.
// Autor : Luis Vinicius Costa Silva
// Data : 14/4/2014
// Seção de Declarações
var
mat : vetor[1..4,1..3] de inteiro
esc,soma,i,j : inteiro
inicio
para i de 1 ate 4 faca
   para j de 1 ate 3 faca
      limpatela
      escreva("Entre com o elemento da ",i,"ª linha e da ",j,"ª coluna: ")
      leia(mat[i,j])
   fimpara
fimpara
limpatela
escreval("Matriz Original: ")
escreval("")
para i de 1 ate 4 faca
   escreval("")
   para j de 1 ate 3 faca
      escreva(mat[i,j])
   fimpara
fimpara
escreval("")
escreval("")
escreval("Entre com a linha a ser somada: ")
leia(esc)
enquanto (esc>4) ou (esc<0)  faca

   limpatela
   escreval("Matriz Original: ")
   escreval("")
   para i de 1 ate 4 faca
      escreval("")
      para j de 1 ate 3 faca
         escreva(mat[i,j])
      fimpara
   fimpara
   escreval("")
   escreval("")
   escreval("Entre com a linha a ser somada: ")
   leia(esc)

fimenquanto
para j de 1 ate 3 faca
   soma <- soma + mat[esc,j]
fimpara
escreval("A soma da Linha",esc," = ",soma)
fimalgoritmo
