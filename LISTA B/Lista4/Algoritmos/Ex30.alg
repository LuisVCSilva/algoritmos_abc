algoritmo "Lista4_Ex30"
// Enunciado : Fa�a um algoritmo para ler 3 n�meros e
//informar o maior deles.


// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
var
n1,n2,n3 : inteiro
inicio
escreva("Digite os n�meros: ")
leia(n1,n2,n3)
se ((n1>n2) e (n1>n3)) ou ((n2>n1) e (n2>n3)) entao
   se (n1>n2) e (n1>n3) entao
      escreva(n1," � o maior!")
   fimse
   se (n2>n1) e (n2>n3) entao
      escreva(n2," � o maior!")
   fimse
senao
escreva(n3," � o maior!")
fimse
fimalgoritmo
