#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>


void incLiv();
void verLiv();
void buscaAutor();
void buscaTitulo();
void buscaEstilo();
void calcMedia();



typedef struct livro {
    char titulo[15], autor[20], estilo[10];
    int codigo;
    float preco;
};




struct livro vetlivro[50];
char ch;
int numlivros = 0, cont = 0, i;
void menu() {
    printf("(I)ncluir um livro. \n");
    printf("(L)istar o nome de todos os livros. \n");
    printf("Procurar livro por (A)utor. \n");
    printf("Procurar livro por (T)ítulo. \n");
    printf("Procurar livro por (E)stilo. \n");
    printf("Calcular a (M)édia de preço de todos os livros. \n");
    printf("(S)air \n");
    ch = getch();
    ch = toupper(ch);

}

int main() {
    inicio:
        while (ch != 'S') {
        menu();
        switch (ch) {

            case 'I':
                incLiv();
                break;

            case 'L':
                verLiv();
                break;

            case 'A':
                buscaAutor();
                break;

            case 'T':
                buscaTitulo();
                break;

            case 'E':
                buscaEstilo();
                break;

            case 'M':
                calcMedia();
                break;

            default:
                if (ch != 'S') {
                    puts("Entrada invalida!");
                    getch();
                    exit(1);
                }
        }
        goto inicio;
    }
}



void incLiv() {
    system("cls");
    if (cont < 50) {
        char titulo1[15], autor1[20], estilo[10];
        printf("Digite as informações do livro: Titulo, autor, estilo, codigo. preço\n");
        fflush(stdin);
        gets(vetlivro[cont].titulo);
        fflush(stdin);
        gets(vetlivro[cont].autor);
        fflush(stdin);
        gets(vetlivro[cont].estilo);
        scanf("%i", & vetlivro[cont].codigo);
        scanf("%f", & vetlivro[cont].preco);
        cont++;
    }

    printf("\nDigite qualquer tecla para continuar:");
    getch();

}
void verLiv() {
    system("cls");
    for (i = 0; i < cont; i++) {

        printf("\nTitulo:%s\n", vetlivro[i].titulo);
        printf("Autor::%s\n", vetlivro[i].autor);
        printf("estilo:%s\n", vetlivro[i].estilo);
        printf("Codigo:%i\n", vetlivro[i].codigo);
        printf("Preço:%.2f\n", vetlivro[i].preco);


    }
    getch();
}
void buscaAutor() {
    char autor1[20];
    system("cls");
    puts("\nDigite o autor:\t");
    fflush(stdin);
    gets(autor1);
    for (i = 0; i < cont; i++) {
        if (strcmp(autor1, vetlivro[i].autor) == 0) {

            printf("\nTitulo:%s\n", vetlivro[i].titulo);
            printf("Autor::%s\n", vetlivro[i].autor);
            printf("estilo:%s\n", vetlivro[i].estilo);
            printf("Codigo:%i\n", vetlivro[i].codigo);
            printf("Preço:%.2f\n", vetlivro[i].preco);

        }


    }
    getch();
}
void buscaTitulo() {
    char titulo1[15];
    system("cls");
    puts("\nDigite o titulo:\t");
    fflush(stdin);
    gets(titulo1);
    for (i = 0; i < cont; i++) {
        if (strcmp(titulo1, vetlivro[i].titulo) == 0) {

            printf("\nTitulo:%s\n", vetlivro[i].titulo);
            printf("Autor::%s\n", vetlivro[i].autor);
            printf("estilo:%s\n", vetlivro[i].estilo);
            printf("Codigo:%i\n", vetlivro[i].codigo);
            printf("Preço:%.2f\n", vetlivro[i].preco);

        }


    }
    getch();
}
void buscaEstilo() {
    char estilo1[10];
    system("cls");
    puts("\nDigite o restilo:\t");
    fflush(stdin);
    gets(estilo1);
    for (i = 0; i < cont; i++) {
        if (strcmp(estilo1, vetlivro[i].estilo) == 0) {

            printf("\nTitulo:%s\n", vetlivro[i].titulo);
            printf("Autor::%s\n", vetlivro[i].autor);
            printf("estilo:%s\n", vetlivro[i].estilo);
            printf("Codigo:%i\n", vetlivro[i].codigo);
            printf("Preço:%.2f\n", vetlivro[i].preco);

        }


    }
    getch();
}
void calcMedia() {
    int preco1;
    system("cls");
    puts("\nDigite o preco:\t");
    scanf("%f", & preco1);
    for (i = 0; i < cont; i++) {
        if (preco1 == vetlivro[i].preco) {

            printf("\nTitulo:%s\n", vetlivro[i].titulo);
            printf("Autor::%s\n", vetlivro[i].autor);
            printf("estilo:%s\n", vetlivro[i].estilo);
            printf("Codigo:%i\n", vetlivro[i].codigo);
            printf("Preço:%.2f\n", vetlivro[i].preco);

        }

    }
    getch();
}
