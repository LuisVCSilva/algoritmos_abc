algoritmo "Lista4_Ex12"
// Enunciado : Escreva um algoritmo que leia dois números e
//exiba o maior deles.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
n1,n2 : real
inicio
escreva("Digite os valores: ")
leia(n1,n2)
se n1<>n2 entao
   se n1>n2 entao
      escreval("Maior >> ",n1)
   senao
      escreval("Maior >> ",n2)
   fimse
senao
   escreval(n1," é igual a",n2)
fimse
fimalgoritmo
