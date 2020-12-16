/*
_________________________________________________________________________

Exerc�cio 1): Vari�veis Ponteiros
_________________________________________________________________________

Crie um programa que declare duas vari�veis (inteiro e real) atribua valores
para elas e crie dois ponteiros, cada um apontando para uma destas vari�veis.
Mostre na tela: O valor e o endere�o de mem�ria das vari�veis, o valor do
ponteiro, o endere�o do ponteiro�e o valor apontado pelo ponteiro.
Qual destes valore s�o iguais? Justifique?
*/

int main () {
int x=10,*px=&x;
float y=1,*py=&y;
printf("%Valor de X = %d :: Endereco de X = %p\nValor de Y = %2.f :: Endereco de Y= %p\n\nValor do Ponteiro PX = %p\nEndere�o do Ponteiro X = %p\nValor que aponta = %d\n\nValor do Ponteiro PY = %p\nEndere�o do Ponteiro Y = %p\nValor que aponta = %2.f\n",x,&x,y,&y,px,&px,*px,py,&py,*py);

/*
Valores iguais:
Valor de X = Valor que ponteiro px aponta
Valor de Y = Valor que ponteiro py aponta
Valor do Ponteiro PY = Endereco de PY
Valor do Ponteiro PX = Endereco de PX

o valor de x
*/
return 0;
}
