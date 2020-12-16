algoritmo "Lista6_Ex6"
// Função : 6. Ler uma matriz 4X3 inteiro. Depois, mostre
//qual é o elemento armazenado em uma linha e
//coluna C fornecidos pelo usuário.

// Autor : Luis Vinicius Costa Silva
// Data : 14/4/2014
// Seção de Declarações
var
mat : vetor[1..4,1..3] de inteiro
po : vetor[1..2] de inteiro
i,j : inteiro
flag : logico
inicio
flag <- verdadeiro
para i de 1 ate 4 faca
   para j de 1 ate 3 faca
      limpatela
      escreva("Entre com o elemento da",i,"ª linha e da ",j,"ª coluna: ")
      leia(mat[i,j])
   fimpara
fimpara

enquanto flag=verdadeiro faca
   limpatela
   para i de 1 ate 2 faca
      escreva("Entre com as coordenadas do item desejado: ")
      leia(po[i])
   fimpara
   limpatela
se (po[1]<4) e (po[2]<3) e (po[1]>0) e (po[2]>0) entao
flag <- falso
fimse
fimenquanto

escreval("O item desejado é:",mat[po[1],po[2]]," e ele se encontra na posição (",po[1],",",po[2]," )")
fimalgoritmo
