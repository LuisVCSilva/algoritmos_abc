algoritmo "Lista4_Ex23"
// Enunciado : Escreva um algoritmo que leia uma certa quantidade
//de n�meros e imprima o maior deles e quantas vezes o
//maior n�mero foi lido. A quantidade de n�meros a
//serem lidos deve ser fornecida pelo usu�rio. Assuma que
//o usu�rio sempre fornecer� um n�mero positivo.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
var
i,c,cont : inteiro
x,maior : real
inicio
escreva("Digite o n�mero de repeti��es: ")
leia(i)
escreva("Digite um n�mero: ")
leia(maior)
para c de 1 ate i-1 faca
   limpatela
   escreva("Digite um n�mero: ")
   leia(x)
   se x=maior entao
   cont <- cont+1
   senao
      se x>maior entao
         maior <- x
      fimse
   fimse
fimpara
limpatela
escreva("O maior n�mero digitado foi ",maior, " e ele foi escrito ",cont+1," vez(es).")
fimalgoritmo
