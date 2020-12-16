algoritmo "Lista4_Ex38"
// Enunciado : Ler uma temperatura em graus Celsius e
//apresentá-la convertida em graus Fahrenheit. A
//fórmula de conversão é:

//– F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C
//a temperatura em Celsius.


// Autor : Luis Vinicius Costa
// Data : 04/04/2014
// Seção de Declarações
var
tc,tf,r : real
inicio
escreva("Entre com a temperatura em Celsius: ")
leia(tc)
tf <- (9*tc+160)/5
escreva(tc," ºC é igual a ",tf,"ºF")
fimalgoritmo
