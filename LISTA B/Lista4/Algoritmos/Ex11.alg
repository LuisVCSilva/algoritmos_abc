algoritmo "Lista4_Ex11"
// Enunciado : Escreva um algoritmo que leia dois números e
//exiba-os em ordem crescente.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações

var
n1,n2 : inteiro
inicio
escreval("Digite 2 valores: ")
leia(n1,n2)
escreval("")
se n1<>n2 entao
escreval("Ordem Crescente:")
   se n1>n2 entao
      escreval(n2," :: ",n1)
   senao
      escreval(n1," :: ",n2)
   fimse
senao
escreval(n1," é igual a",n2)
fimse
fimalgoritmo
