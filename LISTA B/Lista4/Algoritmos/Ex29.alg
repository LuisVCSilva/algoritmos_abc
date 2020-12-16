algoritmo "Lista4_Ex29"
// Enunciado : O IMC – Índice de Massa Corporal é um critério da
//Organização Mundial de Saúde para dar uma indicação
//sobre a condição de peso de uma pessoa adulta. A fórmula
//é IMC=peso/altura2 .
//Elabore um algoritmo que leia o peso e a altura de um
//adulto, calcule o IMC e mostre sua condição. Utilize a
//estrutura de seleção “se”.
//IMC em adultos Condição
//Abaixo de 18,5 Abaixo do peso
//Entre 18,5 e 25 Peso normal
//Acima de 25 e abaixo ou igual a 30 Acima do peso
//Acima de 30 Obeso

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
imc,alt,peso : real
inicio
escreva("Entre com a altura: ")
leia(alt)
escreva("Entre com o peso: ")
leia(peso)
imc <- peso/(alt*alt)
se imc<18.5 entao
escreva("Você está abaixo do peso.")
fimse
se (imc>18.5) e (imc<25) entao
escreva("Você está com o peso normal.")
fimse
se (imc>25) e (imc<30) entao
escreva("Você está acima do peso.")
senao
escreva("Você está obeso.")
fimse
fimalgoritmo
