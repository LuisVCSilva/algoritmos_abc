algoritmo "Lista4_Ex28"
// Enunciado : Fa�a um algoritmo que leia o nome de uma pessoa, o
//ano de nascimento e o ano atual. Pergunte tamb�m se ela
//j� fez anivers�rio esse ano. A partir desses dados calcular a
//idade.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
var
nome : literal
anoN,anoA,esc,idade : inteiro
flag : logico
inicio
flag <- verdadeiro
escreva("Digite seu nome: ")
leia(nome)
escreva("Digite o seu ano de nascimento: ")
leia(anoN)
escreva("Digite o ano atual: ")
leia(anoA)
escreval("")
escreval("Voc� j� fez anivers�rio esse ano?")
escreval("")
enquanto flag=verdadeiro faca
   limpatela

   escreval("Voc� j� fez anivers�rio esse ano?")

   escreval("1 :: SIM")
   escreval("2 :: N�O")

   leia(esc)
   se esc=1 entao
      flag <- falso
   fimse
   se esc=2 entao
      flag <- falso
   fimse
fimenquanto
limpatela
idade <- anoA-anoN
se esc=1 entao
   escreval("A idade atual de ",nome ," �",idade)
senao
   escreval("A idade atual de ",nome ," �",idade-1)
fimse
fimalgoritmo
