/*
_________________________________________________________________________

Exercício 1): Variáveis Ponteiros
_________________________________________________________________________

Crie um programa que declare duas variáveis (inteiro e real) atribua valores
para elas e crie dois ponteiros, cada um apontando para uma destas variáveis.
Mostre na tela: O valor e o endereço de memória das variáveis, o valor do
ponteiro, o endereço do ponteiro e o valor apontado pelo ponteiro.
Qual destes valore são iguais? Justifique?
*/

int main () {
int x=10,*px=&x;
float y=1,*py=&y;
printf("%Valor de X = %d :: Endereco de X = %p\nValor de Y = %2.f :: Endereco de Y= %p\n\nValor do Ponteiro PX = %p\nEndereço do Ponteiro X = %p\nValor que aponta = %d\n\nValor do Ponteiro PY = %p\nEndereço do Ponteiro Y = %p\nValor que aponta = %2.f\n",x,&x,y,&y,px,&px,*px,py,&py,*py);

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
