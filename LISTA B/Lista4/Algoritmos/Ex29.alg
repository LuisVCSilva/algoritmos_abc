algoritmo "Lista4_Ex29"
// Enunciado : O IMC � �ndice de Massa Corporal � um crit�rio da
//Organiza��o Mundial de Sa�de para dar uma indica��o
//sobre a condi��o de peso de uma pessoa adulta. A f�rmula
//� IMC=peso/altura2 .
//Elabore um algoritmo que leia o peso e a altura de um
//adulto, calcule o IMC e mostre sua condi��o. Utilize a
//estrutura de sele��o �se�.
//IMC em adultos Condi��o
//Abaixo de 18,5 Abaixo do peso
//Entre 18,5 e 25 Peso normal
//Acima de 25 e abaixo ou igual a 30 Acima do peso
//Acima de 30 Obeso

// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Se��o de Declara��es
var
imc,alt,peso : real
inicio
escreva("Entre com a altura: ")
leia(alt)
escreva("Entre com o peso: ")
leia(peso)
imc <- peso/(alt*alt)
se imc<18.5 entao
escreva("Voc� est� abaixo do peso.")
fimse
se (imc>18.5) e (imc<25) entao
escreva("Voc� est� com o peso normal.")
fimse
se (imc>25) e (imc<30) entao
escreva("Voc� est� acima do peso.")
senao
escreva("Voc� est� obeso.")
fimse
fimalgoritmo
