#include "tipos.h"

TBasePessoal excluir (TLista *p){
	
	char cpfExclusao[12];
	
	fflush (stdin);
	printf ("\n Informe o CPF para exclus�o: ");
	gets (cpfExclusao);
	
	TDadoPessoal *atual, *anterior;
	atual = p->inicio;
	
	while (atual != NULL){
		if (strcmp (atual->info.cpf, cpfExclusao) == 0) { //Achando os elementos iguais
			if (atual == p->inicio){ // Se o elemento que for excluido estiver na primeira posi��o
				p->inicio = p->inicio->proximo;
				return atual->info;
			} else { 
				anterior->proximo = atual->proximo;// Se o elemento que for excluido estiver entre a primeira e �ltima posi��o
				// Faz o encadeamento entre os elementos
				return atual->info;
				if (atual == p->fim){
					p->fim = anterior;// Se o elemento que for excluido estiver na �ltima posi��o
					return atual->info;
				}
			}
			atual = NULL;
		} else { //Se n�o achar o elemento, desloca para a pr�xima posi��o
			anterior = atual;
			atual = atual->proximo;
		}
	}
	free(atual); //Liberando a mem�ria
	// Caso o CPF informado n�o tenha na lista
	TDadoPessoal suporte;
	strcpy (suporte.info.cpf, "-1");
	return suporte.info;
}
