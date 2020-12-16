algoritmo "Lista4_Ex27"
// Enunciado : – Faça um algoritmo que simule um caixa
//eletrônico com as seguintes opções:

// 1 – Depositar dinheiro
// 2 – Ver saldo
// 3 – Sacar dinheiro
// 4 – Sair
// O algoritmo só deve finalizar após o usuário
//digitar a opção 4. Assuma que a opção 1 faça o
//depósito de qualquer valor.


// Autor : Luis Vinicius Costa Silva
// Data : 04/04/2014
// Seção de Declarações
var
flag : logico
esc,vmn : inteiro
saldo,ndep : real


inicio
saldo <- 10
flag <- verdadeiro
enquanto flag=verdadeiro faca
   ndep <- 0
   limpatela
   escreval(" 1 :: Depositar dinheiro")
   escreval(" 2 :: Ver saldo")
   escreval(" 3 :: Sacar dinheiro")
   escreval(" 4 :: Sair")
   leia(esc)

   escolha esc


   caso 1
      limpatela
      escreval("Digite o valor a ser depositado: ")
      leia(ndep)
      saldo <- saldo + ndep

   caso 2
      limpatela
      escreval("Saldo Disponível R$: ",saldo)
      escreval("")
      escreval("Entre com qualquer tecla para voltar ao Menu Prinicipal: ")
      leia(vmn)
   caso 3
      limpatela
      escreval("Digite o valor para saque: ")
      leia(ndep)
      se ndep<=saldo entao
         saldo <- saldo-ndep
      senao
         limpatela
         escreval("Não há saldo suficiente para tal saque!")
         escreval("Entre com qualquer tecla para voltar ao Menu Prinicipal: ")
         leia(vmn)
         esc <- 3
      fimse
   caso 4
      flag <- falso

   outrocaso
      limpatela

   fimescolha
fimenquanto
limpatela
escreval("FIM DO PROGRAMA!")
fimalgoritmo

