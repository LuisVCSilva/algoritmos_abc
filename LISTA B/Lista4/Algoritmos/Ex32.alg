algoritmo "Lista4_Ex32"
// Enunciado : Faça um algoritmo para calcular uma área de
//um retângulo.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
b,h : real
inicio
escreva("Digite a base e a altura do retângulo: ")
leia(b,h)
se ((h=0) ou (b=0)) ou (h=b) entao
   se (h=0) ou (b=0) entao
      escreval("Valor(es) inválidos")
   fimse
   se h=b entao
      escreval("Esse algoritmo não calcula área de quadrados!")
   fimse
senao
   escreva("A área do retângulo é",b*h)
fimse
fimalgoritmo
