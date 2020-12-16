funcao PegaMaior (n1,n2,n3:inteiro) : inteiro
var
maior : inteiro
inicio
se (n1>n2) e (n1>n3) entao
   maior <- n1
senao
   se (n2>n1) e (n2>n3) entao
      maior <- n2
   senao
      maior <- n3
   fimse
fimse
retorne maior
fimfuncao

algoritmo "Lista07_Ex2"
// Função : 2) Ler três valores e, dentro de uma função,
//verificar o maior dentre eles. Retornar o maior
//número e imprimir o maior.

// Autor : Luis Vinicius Costa Silva
// Data : 16/4/2014
// Seção de Declarações
var
n1,n2,n3,maior : inteiro
inicio
escreva("Entre com os números: ")
leia(n1,n2,n3)
maior <- PegaMaior(n1,n2,n3)
escreva("O maior é ",maior)
fimalgoritmo
