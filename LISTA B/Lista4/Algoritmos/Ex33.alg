algoritmo "Lista4_Ex33"
//Fa�a um algoritmo para calcular o n�mero de
//metros c�bicos de uma caixa retangular.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
var
b,h,p : real
inicio
escreva("Digite a base,altura, e profundidade do ret�ngulo: ")
leia(b,h,p)
se ((h=0) ou (b=0) ou (p=0)) ou (h=b) entao
   se (h=0) ou (b=0) ou (p=0) entao
      escreval("Valor(es) inv�lidos")
   fimse
   se (h=b) e (b=p) entao
      escreval("Esse algoritmo n�o calcula �rea de cubos!")
   fimse
senao
   escreva("A �rea da caixa retangular �",b*h*p)
fimse
fimalgoritmo
