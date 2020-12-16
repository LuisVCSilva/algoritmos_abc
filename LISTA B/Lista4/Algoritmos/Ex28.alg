algoritmo "Lista4_Ex28"
// Enunciado : Faça um algoritmo que leia o nome de uma pessoa, o
//ano de nascimento e o ano atual. Pergunte também se ela
//já fez aniversário esse ano. A partir desses dados calcular a
//idade.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
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
escreval("Você já fez aniversário esse ano?")
escreval("")
enquanto flag=verdadeiro faca
   limpatela

   escreval("Você já fez aniversário esse ano?")

   escreval("1 :: SIM")
   escreval("2 :: NÃO")

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
   escreval("A idade atual de ",nome ," é",idade)
senao
   escreval("A idade atual de ",nome ," é",idade-1)
fimse
fimalgoritmo
