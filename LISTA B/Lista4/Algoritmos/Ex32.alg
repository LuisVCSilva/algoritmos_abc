algoritmo "Lista4_Ex32"
// Enunciado : Fa�a um algoritmo para calcular uma �rea de
//um ret�ngulo.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
var
b,h : real
inicio
escreva("Digite a base e a altura do ret�ngulo: ")
leia(b,h)
se ((h=0) ou (b=0)) ou (h=b) entao
   se (h=0) ou (b=0) entao
      escreval("Valor(es) inv�lidos")
   fimse
   se h=b entao
      escreval("Esse algoritmo n�o calcula �rea de quadrados!")
   fimse
senao
   escreva("A �rea do ret�ngulo �",b*h)
fimse
fimalgoritmo
