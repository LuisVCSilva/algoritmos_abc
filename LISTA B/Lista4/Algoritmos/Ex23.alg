algoritmo "Lista4_Ex23"
// Enunciado : Escreva um algoritmo que leia uma certa quantidade
//de números e imprima o maior deles e quantas vezes o
//maior número foi lido. A quantidade de números a
//serem lidos deve ser fornecida pelo usuário. Assuma que
//o usuário sempre fornecerá um número positivo.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
i,c,cont : inteiro
x,maior : real
inicio
escreva("Digite o número de repetições: ")
leia(i)
escreva("Digite um número: ")
leia(maior)
para c de 1 ate i-1 faca
   limpatela
   escreva("Digite um número: ")
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
escreva("O maior número digitado foi ",maior, " e ele foi escrito ",cont+1," vez(es).")
fimalgoritmo
