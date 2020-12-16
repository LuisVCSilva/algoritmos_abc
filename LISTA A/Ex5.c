/*_________________________________________________________________________

Exercício 5): Tempo certo
_________________________________________________________________________

Dada a estrutura:
struct time {
	int hora;
	int min;
	int seg;
}
E a seguinte declaração:     struct time tempo;
Fazer um programa contendo funções para:
a) Receber uma quantidade de tempo em segundos e transformar a mesma em horas, minutos e segundo, preenchendo e imprimindo a variável tempo.
b) Ler a variável tempo (hora, minuto e segundos) e devolver a quantidade de horas em segundos.
c) O programa principal: chama as duas funções acima.*/

#include <stdio.h>

struct time {
int hora;
int min;
int seg;
};

struct time tempo;

void segPTudo () {
float seg;
printf("Entre com o tempo em segundos: ");
scanf("%f",&seg);
tempo.seg = seg;
tempo.min = tempo.seg/60;
tempo.hora = tempo.min/60;
printf("\nSegundo: %d \nMinuto: %d \nHora: %d\n\n",tempo.seg,tempo.min,tempo.hora);
}

void f2 () {
printf("Entre com o tempo em segundos,minutos e horas: ");
scanf("%d%d%d",&tempo.seg,&tempo.min,&tempo.hora);
printf("\n\nQtde de horas em segundos na variavel tempo sao %d segundos",tempo.hora*3600+tempo.min*60+tempo.seg);
}

int main () {
segPTudo();
f2();
}
