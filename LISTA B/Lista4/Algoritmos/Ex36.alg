algoritmo "Lista4_Ex36"
// Enunciado : Escrever um algoritmo para calcular o consumo
//médio de um automóvel sendo fornecida a distância
//total percorrida pelo automóvel e o total de
//combustível gasto.


// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
cmb,dist,totcomb : real
inicio
escreva("Entre com a distância percorrida e a qtde de combustível consumido: ")
leia(dist,totcomb)
cmb <- totcomb/dist
escreva("O consumo médio de combústivel foi de ",cmb,"L/km")
fimalgoritmo
