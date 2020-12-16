/*
_________________________________________________________________________

Exercício 2): Código Incompleto
_________________________________________________________________________

Implemente o código e explique o que ele faz e quais valores serão exibidos
ao final.

*/

#include <stdio.h>

int main () {
int x1=1, x2=2, *px;//>> Sao declarados 2 variaveis de tipo inteiro(x1 e x2) e um ponteiro que aponta para x1(*px)
px=&x1;
x1=5;
x2=(*px)+10;//>> x1 recebe 5 e x2 recebe 10+5(o 5 é carregado pelo *px que por sua vez aponta para o valor de x1 que eh 5)
x1=9;//>> Dai x1 recebe 9
printf("x1:%d   x2:%d   *px:%d", x1, x2, *px);//>> Valores sao impressos
return 0;
}
