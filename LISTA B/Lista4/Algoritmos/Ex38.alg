algoritmo "Lista4_Ex38"
// Enunciado : Ler uma temperatura em graus Celsius e
//apresent�-la convertida em graus Fahrenheit. A
//f�rmula de convers�o �:

//� F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C
//a temperatura em Celsius.


// Autor : Luis Vinicius Costa
// Data : 04/04/2014
// Se��o de Declara��es
var
tc,tf,r : real
inicio
escreva("Entre com a temperatura em Celsius: ")
leia(tc)
tf <- (9*tc+160)/5
escreva(tc," �C � igual a ",tf,"�F")
fimalgoritmo
