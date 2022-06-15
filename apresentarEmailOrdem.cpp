#include "tipos.h"

void ordenarLista (TLista *p, TLista *pNovaOrdem){
	
	TDadoPessoal *aux;
	aux = p->inicio;
	
	while (aux != NULL){
	//Inserir em ordem alfabetica de email
		TDadoPessoal *novoEmail;
		novoEmail = (TDadoPessoal*)malloc(sizeof(TDadoPessoal));
		novoEmail->info = aux->info;
		novoEmail->proximo = NULL;

		if (pNovaOrdem->inicio == NULL){ //Se a nova lista estiver vazia
			pNovaOrdem->inicio = novoEmail;
			pNovaOrdem->fim = novoEmail;
			
		}else { // Se o elemento a add for menor que a primeira posição da lista
			if (strcmp (pNovaOrdem->inicio->info.email, novoEmail->info.email) < 0){
				novoEmail->proximo = pNovaOrdem->inicio;
				pNovaOrdem->inicio = novoEmail;
			
			}else {// Se o elemento a add for maior que a última posição da lista
				if (strcmp (pNovaOrdem->fim->info.email, novoEmail->info.email) > 0){
					pNovaOrdem->fim->proximo = novoEmail;
					pNovaOrdem->fim = novoEmail;
					
				}else { // Se o elemento a add for add no meio da lista
					TDadoPessoal *atual, *anterior;
					anterior = pNovaOrdem->inicio;
					atual = pNovaOrdem->inicio->proximo;
					while (atual != NULL){
						if (strcmp (atual->info.nome, novoEmail->info.email) > 0){
							novoEmail->proximo = atual;
							anterior->proximo = novoEmail;
							break;
						} else {
							anterior = atual;
							atual = atual->proximo;
						}
					}
				}
			}
		}
		aux = aux->proximo;
	}	
}
//Tenho que ordenar a lista que recebo em *p primeiro em uma outra lista 
//E apresentar essa nova lista.
void apresentarEmailOrdem (TLista *p){
	
	TLista novaOrdem;
	
	inicializarLista(&novaOrdem);
	
	ordenarLista (p, &novaOrdem);
	
	//Para este caso não tratei se tiver e-mail repetidos, só irá apresentar o primeiro e-mail
	//os demais serão ignorados
	printf("\n *** LISTA EM ORDEM ALFABETICA DE E-MAIL ***");
	printf("\n ******* ORDEM DECRESCENTE DE E-MAIL *******");
	apresentar(&novaOrdem);	
}
