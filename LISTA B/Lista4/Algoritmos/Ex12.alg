algoritmo "Lista4_Ex12"
// Enunciado : Escreva um algoritmo que leia dois n�meros e
//exiba o maior deles.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
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
   escreval(n1," � igual a",n2)
fimse
fimalgoritmo
