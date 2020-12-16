algoritmo "Lista4_Ex26"
// Enunciado : – Faca um algoritmo que converta horas em
//minutos e vice versa.

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
esc : inteiro
h,min : real
flag : logico
inicio
flag <- verdadeiro
enquanto flag=verdadeiro faca
limpatela
escreval("1 :: Hora >> Minuto")
escreval("2 :: Minuto >> Hora")
leia(esc)

escolha esc

caso 1
flag <- falso
limpatela
escreva("Entre com a hora:")
leia(h)
min <- h*60
escreval(h," hora(s) = ",min," minuto(s).")

caso 2
flag <- falso
limpatela
escreva("Entre com o minuto:")
leia(min)
h <- min/60
escreval(min," minuto(s) = ",h," hora(s).")


outrocaso
flag <- verdadeiro
fimescolha
fimenquanto
fimalgoritmo
