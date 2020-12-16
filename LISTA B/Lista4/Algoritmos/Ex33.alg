algoritmo "Lista4_Ex33"
//Faça um algoritmo para calcular o número de
//metros cúbicos de uma caixa retangular.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
b,h,p : real
inicio
escreva("Digite a base,altura, e profundidade do retângulo: ")
leia(b,h,p)
se ((h=0) ou (b=0) ou (p=0)) ou (h=b) entao
   se (h=0) ou (b=0) ou (p=0) entao
      escreval("Valor(es) inválidos")
   fimse
   se (h=b) e (b=p) entao
      escreval("Esse algoritmo não calcula área de cubos!")
   fimse
senao
   escreva("A área da caixa retangular é",b*h*p)
fimse
fimalgoritmo
