algoritmo "Lista4_Ex36"
// Enunciado : Escrever um algoritmo para calcular o consumo
//m�dio de um autom�vel sendo fornecida a dist�ncia
//total percorrida pelo autom�vel e o total de
//combust�vel gasto.


// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
var
cmb,dist,totcomb : real
inicio
escreva("Entre com a dist�ncia percorrida e a qtde de combust�vel consumido: ")
leia(dist,totcomb)
cmb <- totcomb/dist
escreva("O consumo m�dio de comb�stivel foi de ",cmb,"L/km")
fimalgoritmo
