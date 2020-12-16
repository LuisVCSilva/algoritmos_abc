/*
_________________________________________________________________________

Exercício 12): Agenda
_________________________________________________________________________

Fazer um programa para simular uma agenda de telefones. Para cada pessoa deve-se ter os seguintes dados:
Nome
E-mail
Endereço (contendo campos para Rua, numero, complemento, bairro, cep, cidade, estado, país) -> usar uma estrutura aqui
Telefone (contendo campo para DDD e número)
Data de aniversário (contendo campo para dia, mês, ano)
Observações : Uma linha (string) para alguma observações especial.
a) Definir a estrutura acima para a agenda.
b) Declarar a variavel agenda (vetor) com capacidade de agendar até 100 nomes. 
c) Definir a função busca por primeiro nome: Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
d) Definir a função busca por mês de aniversário: Imprime os dados de todas as pessoas que fazem aniversário nesse mês. 
e) Definir a função busca por dia e mês de aniversário: Imprime os dados de todas as pessoas que fazem aniversário nesse dia e mês. 
f) Definir a função insere pessoa: Insere por ordem alfabética de nome. 
g) Definir a função retira pessoa: retira todos os dados dessa pessoa e desloca todos os elementos seguintes do vetor para a posição anterior. 
h) Definir a função imprime agenda com duas opções:
imprime nome, telefone e e-mail
imprime todos os dados.
i) O programa deve ter um menu principal oferecendo as opções acima.
*/


 #include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define limiteDeEntradas 100

int buscar_contato(void);
void adicionar_contato(void);
void remover_contato(void);
void visualizar_contato(void);
void editar_contato(void);
void limpaEntrada(void);
int confirmaModificacao(char x);
int buscaNumero (int registronum);
int salva (FILE *arquivoContato,char nomeArquivoContato[]);
int carrega (FILE *arquivoContato,char nomeArquivoContato[]);

typedef struct localidade {
char pais[40];
char estado[40];
char cidade[40];
}localidade;

typedef struct lugar {
char logradouro[40];
int numero;
char bairro[40];
char cep[40];
localidade regiao;
}lugar;

typedef struct Contato {
int numero;
char nome[20];
char fone[15];
char email[20];
lugar endereco;

struct Contato *prox; /*Ponteiro prox é usado para navegar pelo struct*/
int cont;

}Contato;
Contato *contato1,*contatoAtual,*proxContato;

/* contato1 é usado para apontar para o primeiro registro na lista
contatoAtual aponta para o registro atual na lista
proxContato contem o endereço da nova estrutura
*/
int idContato = 0; /*atribui um ID unico ao campo numero dos contatos*/


int main()
{
    system("Color 70");
setlocale(LC_ALL, "Portuguese");
    FILE *arquivoContato;
    char *nomeArquivoContato = "Contatodatabase.dat";
    char esc;
    carrega(&(*arquivoContato),nomeArquivoContato);
    inicio:
    do
    {
    system("cls");
	fflush(stdin);
    puts("\nAgenda Telefônica");
    puts("-- -----------------------------");
    puts("(A)dicionar Novo Contato");
	puts("(D)eletar Contato");
	puts("(L)istar todos os Contatos");
	puts("(M)odificar Contatos");
	puts("(B)uscar Contatos por Nome");
	puts("-- -----------------------------");
        puts("(S)alvar e Sair\n");

        printf("\t");
        esc = getchar();
	    esc = toupper(esc);/*Insere caixa alta na escolha do Usuario*/
        system("cls");
        switch(esc)
        {
            case 'A':
                puts("Adicionar novo contato\n");
                fflush(stdin);
                adicionar_contato();
                getch();
                break;
	    case 'D':
		puts("Deletar contato\n");
		remover_contato();
		getch();
		break;
	    case 'L':
		puts("Listar todos os contatos\n");
		visualizar_contato();
		getch();
		break;
	    case 'M':
		puts("Modificar um contato\n");
		editar_contato();
		getch();
		break;
	    case 'B':
		puts("Buscar contato por nome\n");
		buscar_contato();
		getch();
		break;
            case 'S':
                puts("Salvar e sair\n");
                getch();
                default:
                break;
        }
    }
    while(esc!='S');
    if(confirmaModificacao('S'))
    {
    return salva(&(*arquivoContato),nomeArquivoContato);
    }
    else
    {
    goto inicio;
    }
}


void adicionar_contato(void)
{
    proxContato = (struct Contato*)malloc(sizeof(struct Contato));
    /*aloca espaço na memória para novo contato*/

/*Checa se é o primeiro registro no arquivo
Se for, todos os ponteiros são inicializados nesse registro
*/

    if(contato1==NULL)
    {
    contato1 = contatoAtual = proxContato;
    }

//Se não, o fim da lista de struct é obtido
    else
    {
        contatoAtual = contato1;      /* faz do primeiro registro o atual*/


        while(contatoAtual->prox != NULL)contatoAtual = contatoAtual->prox;
                                /* e percorre por todos os registros*/
        contatoAtual->prox = proxContato;  /* aponta pro próximo struct*/
        contatoAtual = proxContato;        /* faz do registro atual o próximo*/
    }

/*atualiza a estrutura*/

    idContato++;
    if(idContato<=limiteDeEntradas)
    {
        printf("%27s: %5i\n","Número do contato",idContato);
    contatoAtual->numero = idContato;    /*como dito anteriormente idContato é usado para dar uma identificação exclusiva aos numeros dos contatos*/

    printf("\n%27s: ","Entre com o nome do contato: ");
    gets(contatoAtual->nome);

    printf("\n%27s: ","Entre com o fone do contato: ");
    gets(contatoAtual->fone);

    printf("\n%27s: ","Entre com o email do contato: ");
    gets(contatoAtual->email);


    printf("\n\n\n%27s\n ","Endereco do contato: ");

    printf("\n%27s: ","Entre com o logradouro do contato: ");
    gets(contatoAtual->endereco.logradouro);

    printf("\n%27s: ","Entre com o bairro do contato: ");
    gets(contatoAtual->endereco.bairro);

    fflush(stdin);

    printf("\n%27s: ","Entre com o CEP do contato: ");
    gets(contatoAtual->endereco.cep);

    fflush(stdin);

    printf("\n%27s: ","Entre com o numero da casa/edificio do contato: ");
    scanf("%d",&(contatoAtual->endereco.numero));
    fflush(stdin);
    printf("\n\n\n%27s\n","Regiao do contato: ");

    printf("\n%27s: ","Entre com o País: ");
    gets(contatoAtual->endereco.regiao.pais);

    printf("\n%27s:","Entre com o Estado: ");
    gets(contatoAtual->endereco.regiao.estado);

    printf("\n%27s: ","Entre com a Cidade: ");
    gets(contatoAtual->endereco.regiao.cidade);



    printf("\nContato adicionado!");
    contatoAtual->cont=0;
/*atribui ao novo registro um ponteiro nulo para mostrar que ele é o último*/
    contatoAtual->prox = NULL;
    }
    else
    {
    printf("\n\nApenas %d contatos podem ser armazenados na versao Lite...\nContate o administrador para obter a versao PRO!",limiteDeEntradas);
    }
}

void visualizar_contato(void)
{
    if(contato1==NULL)
        puts("Nao existem contatos cadastrados!");

    else
    {
        contatoAtual=contato1;

        do
        {
        printf("\nContato %d",contatoAtual->numero);
        printf("\n=========");
        printf("\nNome: %s",contatoAtual->nome);
        printf("\nFone: %s",contatoAtual->fone);
        printf("\nEmail: %s",contatoAtual->email);
        printf("\nBairro: %s",contatoAtual->endereco.bairro);
        printf("\nCEP: %s",contatoAtual->endereco.cep);
        printf("\nLogradouro: %s",contatoAtual->endereco.logradouro);
        printf("\nNumero: %d",contatoAtual->endereco.numero);
        printf("\nPaís: %s",contatoAtual->endereco.regiao.pais);
        printf("\nEstado: %s",contatoAtual->endereco.regiao.estado);
        printf("\nCidade: %s",contatoAtual->endereco.regiao.cidade);
        printf("\n\n");
        }
        while((contatoAtual=contatoAtual->prox)!=NULL);
    }
}

void remover_contato(void)
{
    int registro;
    struct Contato *ant;

    if(contato1==NULL)
    {
    puts("Nao existem contatos a serem deletados!");
	return;
    }

    visualizar_contato();
    printf("Entre com o numero de contato: ");
    scanf("%d",&registro);

    contatoAtual = contato1;
if(confirmaModificacao('R'))
{
int flag = 1;
    while((contatoAtual != NULL) && (flag!=0))
    {
        if(contatoAtual->numero==registro)
        {
        if(contatoAtual==contato1)	/*se registro a ser deletado é o primeiro registro*/
		contato1=contatoAtual->prox; /*reinicia contato1 para apontar para o proximo registro como se fosse o primeiro*/
	    else
		ant->prox = contatoAtual->prox;/*ponteiro ant é usado se o registro a ser deletado não é o primeiro*/

        free(contatoAtual); /*dá um free,LIMPAAAA!*/
	    idContato--;
        if(idContato>=1)
        {
        contatoAtual = contato1;
        int i = 1;
            do
            {
            contatoAtual->numero = i;
            i++;
            }
            while((contatoAtual=contatoAtual->prox)!=NULL);
        }
        else
        {
            if(idContato==0)
            {
            system("del Contatodatabase.dat");/*Tive que usar um método meio brutamonte,por alguma razão não dava de remover o primeiro
            contato quando só ele estava na lista com o free,tentei também dar um realloc de espaço nulo... então decidi excluir o arquivo
            visto que o usuário está apagando o último contato e assim apagando tudo do arquivo.*/
            }
        }
        flag = 0;
	}

	else
	{
    ant = contatoAtual;
	flag = 1;
	contatoAtual = contatoAtual->prox;
	}
    }
    if(flag==1)
    {
    printf("\nContato não foi encontrado...");
    }
    else
    {
    printf("\nContato %d foi deletado...",registro);
    }
}
}

void editar_contato(void)
{
    int registro,result;

    if(contato1==NULL)
    {
        puts("Nao existem contatos a serem modificados");
	return;
    }

    visualizar_contato();
    printf("\nEntre com o numero de contato a ser modificado: ");
    scanf("%d",&registro);

    result = buscaNumero(registro);

    if(result>0){
	    printf("\n\nContato %d:\n",contatoAtual->numero);

	    printf("Nome: %s\n",contatoAtual->nome);
	    if(confirmaModificacao('M'))
		    gets(contatoAtual->nome);

	    printf("\n\nFone: %s\n",contatoAtual->fone);
	    if(confirmaModificacao('M'))
		    gets(contatoAtual->fone);

	    printf("\n\nEmail: %s\n",contatoAtual->email);
	    if(confirmaModificacao('M'))
		    gets(contatoAtual->email);

	    printf("\n\nBairro: %s\n",contatoAtual->endereco.bairro);
	    if(confirmaModificacao('M'))
		    gets(contatoAtual->endereco.bairro);

	    printf("\n\nCEP: %s\n",contatoAtual->endereco.cep);
	    if(confirmaModificacao('M'))
		    gets(contatoAtual->endereco.cep);

	    printf("\n\nLogradouro: %s\n",contatoAtual->endereco.logradouro);
	    if(confirmaModificacao('M'))
		    gets(contatoAtual->endereco.logradouro);

        fflush(stdin);

	    printf("\n\nNúmero: %d\n",contatoAtual->endereco.numero);
	    if(confirmaModificacao('M'))
            scanf("%d",&(contatoAtual->endereco.numero));

        fflush(stdin);

	    printf("\n\nPaís: %s\n",contatoAtual->endereco.regiao.pais);
	    if(confirmaModificacao('M'))
		    gets(contatoAtual->endereco.regiao.pais);

	    printf("\n\nEstado: %s\n",contatoAtual->endereco.regiao.estado);
	    if(confirmaModificacao('M'))
		    gets(contatoAtual->endereco.regiao.estado);

	    printf("\n\nCidade: %s\n",contatoAtual->endereco.regiao.cidade);
	    if(confirmaModificacao('M'))
		    gets(contatoAtual->endereco.regiao.cidade);


	    return;
	}
    printf("Contato %d nao foi encontrado!\n",registro);
}

int buscaNumero (int registronum)
{
    int registro;
    registro = registronum;
    contatoAtual = contato1;
    while(contatoAtual != NULL)
    {

        if(contatoAtual->numero==registro)
	     {
           return 1;
         }

	else
	{
	    contatoAtual = contatoAtual->prox;
	}
    }
    return -1;
}

int buscar_contato(void)
{
     char nomeContato[20];

     if(contato1==NULL)
	{
        puts("Nao existem contatos cadastrados");
	    return 1;
    }

    printf("Entre com o nome do contato: ");
    fflush(stdin);
    gets(nomeContato);

    contatoAtual = contato1;
    while(contatoAtual != NULL)
    {
        if(strcmp(contatoAtual->nome,nomeContato)==0)
	    {
        printf("\nContato %d",contatoAtual->numero);
        printf("\n=========");
        printf("\nNome: %s",contatoAtual->nome);
        printf("\nFone: %s",contatoAtual->fone);
        printf("\nEmail: %s",contatoAtual->email);
        printf("\nBairro: %s",contatoAtual->endereco.bairro);
        printf("\nCEP: %s",contatoAtual->endereco.cep);
        printf("\nLogradouro: %s",contatoAtual->endereco.logradouro);
        printf("\nNumero: %d",contatoAtual->endereco.numero);
        printf("\nPaís: %s",contatoAtual->endereco.regiao.pais);
        printf("\nEstado: %s",contatoAtual->endereco.regiao.estado);
        printf("\nCidade: %s",contatoAtual->endereco.regiao.cidade);
        printf("\n\n");

			return 0;
	    }
		else
		{
			contatoAtual = contatoAtual->prox;
		}
    }
    printf("Contato %s nao foi encontrado!\n",nomeContato);
          return 1;
}

int confirmaModificacao(char x)
{
	char mensagemDeEstado[80] = "";
	char *p = &mensagemDeEstado;

	switch(x) {
    case 'M':
    p = (char*) realloc(p,20*sizeof(char));
    strcpy(mensagemDeEstado,"modificar este campo");

    break;

    case 'R':
    p = (char*) realloc(p,20*sizeof(char));
    strcpy(mensagemDeEstado,"remover este contato");
    break;

    case 'S':
    p = (char*) realloc(p,27*sizeof(char));
    strcpy(mensagemDeEstado,"salvar as alteracoes e sair");
    break;

    default:
    printf("Erro na chamada de funcao,favor contatar o desenvolvedor!");
    getch();
    exit(1);
    break;
	}

	char esc = ' ';

    fflush(stdin);

	printf("\n\nTem Certeza que deseja %s?\n(\x22S\x22 para Sim, qualquer tecla para nao)",mensagemDeEstado);
	esc = getchar();
	esc = toupper(esc);
	fflush(stdin);
	//free(mensagemDeEstado); nao pode dar free numa regiao que nao esta no heap
	if(esc=='S')
	{
	    if(x=='M')
        {
        printf("Entre com o novo %s  : ");
        }
    return 1;
	}

	else
    {
    return 0;
    }
}

int salva (FILE *arquivoContato,char nomeArquivoContato[]) {
    contatoAtual = contato1;

    if(contatoAtual==NULL)
	    return 0;		/*sem dado a escrever*/

    arquivoContato = fopen(nomeArquivoContato,"w");   /*Abre arquivo para escrita*/

    if(arquivoContato==NULL)
    {
	    printf("Erro ao criar o arquivo \x22%s\x22\n",nomeArquivoContato);
	    return 1;
    }
    				/*Escreve cada registro no disco*/
    while(contatoAtual != NULL)
    {
	    fwrite(contatoAtual,sizeof(struct Contato),1,arquivoContato);
	    contatoAtual = contatoAtual->prox;
    }
    fclose(arquivoContato);
    return 0;
}

int carrega (FILE *arquivoContato,char nomeArquivoContato[]) {
    contato1 = NULL;

    arquivoContato = fopen(nomeArquivoContato,"r");/* open file for reading*/

    if(arquivoContato)
    {
	    contato1 = (struct Contato *)malloc(sizeof(struct Contato));
    /*uso do malloc para definir memória do tamanho relativo a estrutura*/
	    contatoAtual = contato1;       /*faz do primeiro registro o atual*/
	    while(1) /*ponteiro nulo mata o loop*/
     	    {
		    proxContato = (struct Contato *)malloc(sizeof(struct Contato));
		    fread(contatoAtual,sizeof(struct Contato),1,arquivoContato);
		    if(contatoAtual->prox==NULL)   /*ponteiro nulo indica fim da lista*/
			    break;
		    contatoAtual->prox = proxContato;       /*ponteiro referenciando próximo nó*/
            contatoAtual->cont=0;
		    contatoAtual = proxContato;             /* faz registro atual o novo registro*/
	    }
	    fclose(arquivoContato);
	    idContato = contatoAtual->numero;
    }
}
