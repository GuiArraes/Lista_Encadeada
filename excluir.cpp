#include "tipos.h"

TBasePessoal excluir (TLista *p){
	
	char cpfExclusao[12];
	
	fflush (stdin);
	printf ("\n Informe o CPF para exclusão: ");
	gets (cpfExclusao);
	
	TDadoPessoal *atual, *anterior;
	atual = p->inicio;
	
	while (atual != NULL){
		if (strcmp (atual->info.cpf, cpfExclusao) == 0) { //Achando os elementos iguais
			if (atual == p->inicio){ // Se o elemento que for excluido estiver na primeira posição
				p->inicio = p->inicio->proximo;
				return atual->info;
			} else { 
				anterior->proximo = atual->proximo;// Se o elemento que for excluido estiver entre a primeira e última posição
				// Faz o encadeamento entre os elementos
				return atual->info;
				if (atual == p->fim){
					p->fim = anterior;// Se o elemento que for excluido estiver na última posição
					return atual->info;
				}
			}
			atual = NULL;
		} else { //Se não achar o elemento, desloca para a próxima posição
			anterior = atual;
			atual = atual->proximo;
		}
	}
	free(atual); //Liberando a memória
	// Caso o CPF informado não tenha na lista
	TDadoPessoal suporte;
	strcpy (suporte.info.cpf, "-1");
	return suporte.info;
}
