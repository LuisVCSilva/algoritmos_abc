algoritmo "LISTA4_Ex35"
// Enunciado : Escreva um algoritmo que leia 2 vari�veis inteiras e troque o
//conte�do entre elas.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
var
l1,l2,l3 : inteiro
inicio
escreva("Digite os valores: ")
leia(l1,l2,l3)
limpatela
   se(l1=l2) e (l2=l3) entao
      escreval("Tri�ngulo Equil�tero!")
   fimse
   se (l1<>l2) e (l1<>l3) e (l2<>l3) entao
      escreval("Tri�ngulo Escaleno!")
   fimse
se((l1=l2) e (l2<>l3)) ou ((l1=l3) e (l3<>l2)) ou ((l2=l3) e (l3<>l1)) entao
escreval("Tri�ngulo Is�sceles!")
fimse
escreval("")
fimalgoritmo
