algoritmo "LISTA4_Ex35"
// Enunciado : Escreva um algoritmo que leia 2 variáveis inteiras e troque o
//conteúdo entre elas.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
l1,l2,l3 : inteiro
inicio
escreva("Digite os valores: ")
leia(l1,l2,l3)
limpatela
   se(l1=l2) e (l2=l3) entao
      escreval("Triângulo Equilátero!")
   fimse
   se (l1<>l2) e (l1<>l3) e (l2<>l3) entao
      escreval("Triângulo Escaleno!")
   fimse
se((l1=l2) e (l2<>l3)) ou ((l1=l3) e (l3<>l2)) ou ((l2=l3) e (l3<>l1)) entao
escreval("Triângulo Isósceles!")
fimse
escreval("")
fimalgoritmo
