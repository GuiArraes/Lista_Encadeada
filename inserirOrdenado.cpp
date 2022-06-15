#include "tipos.h"

void inserirOrdenado (TLista *p){
	
	TDadoPessoal *novoCadastro;
	
	novoCadastro = (TDadoPessoal*) malloc(sizeof(TDadoPessoal));
	
	//Info Pessoal
	fflush (stdin);
	printf ("Nome: ");
	gets (novoCadastro->info.nome);
	fflush (stdin);
	printf ("E-mail: ");
	gets (novoCadastro->info.email);
	fflush (stdin);
	printf ("CPF: ");
	gets (novoCadastro->info.cpf);
	fflush (stdin);
	printf ("Senha: ");
	gets (novoCadastro->info.senha);
	
	//Endereço
	fflush (stdin);
	printf ("Logradouro: ");
	gets (novoCadastro->info.dadosEndereco.logradouro);
	printf ("Numero: ");
	gets (novoCadastro->info.dadosEndereco.num);	
		
	novoCadastro->proximo = NULL;
	
	if (p->inicio == NULL){
		p->inicio = novoCadastro;
		p->fim = novoCadastro;
	
	} else {
		
		if (strcmp (p->inicio->info.nome, novoCadastro->info.nome) > 0){ //Add antes do inicio da lista
			novoCadastro->proximo = p->inicio; //Gurdando a referencia
			p->inicio = novoCadastro;
	
		} else {
			if (strcmp(p->fim->info.nome, novoCadastro->info.nome) < 0){
				p->fim->proximo = novoCadastro;
				p->fim = novoCadastro;
			}
			
			else { //Add entre elementos da lista
				TDadoPessoal *anterior, *atual;
				anterior = p->inicio;
				atual = p->inicio->proximo;
				
				while (atual != NULL){
					if (strcmp (atual->info.nome, novoCadastro->info.nome) > 0){
						novoCadastro->proximo = atual;
						anterior->proximo = novoCadastro;
						atual = NULL;
					} else {
						anterior =atual;
						atual = atual->proximo;
					}
				}
			}
		}	
	}	
}
