algoritmo "Lista4_Ex7"
// Enunciado : Escreva um algoritmo para calcular e exibir a m�dia de 2 notas
//dadas.
//� ( nota1 = peso 6 e nota2 = peso 4 )

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es

var
n1,n2,media : real
inicio
escreval("Entre com as notas: ")
leia(n1,n2)
media <- (n1*6 + n2*4)/(6+4)
escreval("")
escreval("A m�dia das notas � ",media)
fimalgoritmo
