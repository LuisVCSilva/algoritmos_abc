algoritmo "Lista4_Ex22"
// Enunciado : Escreva um algoritmo que leia três números e os
//imprima em ordem crescente.
// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
n : vetor [1..3] de real
aux : real
i,j : inteiro

inicio
escreva("Digite os números: ")
para i de 1 ate 3 faca
   leia(n[i])
fimpara

para j de 3 ate 1 passo -1 faca
   para i de 1 ATE j-1 faca
      se n[i]>n[i+1] entao
         aux <- n[i]
         n[i] <- n[i+1]
         n[i+1] <- AUX
      fimse
   fimpara
fimpara

para i de 1 ate 3 faca
   se i<>3 entao
      escreva(n[i]," :: ")
   senao
      escreva(n[i])
   fimse
fimpara
fimalgoritmo
