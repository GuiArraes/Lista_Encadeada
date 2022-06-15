#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

typedef struct dadoEndereco {
	char logradouro[30];
	char num[5];
	char complemento[15];
	char bairro[20];
	char cidade[15];
	char cep[9];
}TEndereco;

typedef struct baseDadoPessoal {
	char nome[30];
	char email[50];
	char senha [15];
	char confSenha[15];
	char cpf[12];
	TEndereco dadosEndereco;
}TBasePessoal;

typedef struct dadoPessoal {
	TBasePessoal info;
	struct dadoPessoal *proximo;	
}TDadoPessoal;

typedef struct listaPessoal {
	TDadoPessoal *inicio;
	TDadoPessoal *fim;
}TLista;

void menuInserir (TLista *p);
void menuApresentar (TLista *p);

void inicializarLista (TLista *p);

void inserir (TLista *p);
void inserirInicio (TLista *p);
void inserirOrdenado (TLista *p);

void apresentar (TLista *p);

void consultar (TLista *p);
TBasePessoal excluir (TLista *p);

void apresentarEmailOrdem (TLista *p);
//void apresentarOrdDecres (TLista *p);



#endif
