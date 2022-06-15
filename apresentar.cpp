#include "tipos.h"

void apresentar (TLista *p){
	
	system ("cls");
	if (p->inicio != NULL){
	
		TDadoPessoal *aux;
		aux = p->inicio;
		
		printf ("\n**********************************");
		printf ("\n***Lista de Pessoas Cadastradas***");
		printf ("\n**********************************");
		while (aux != NULL){
			printf ("\n Nome: %s", aux->info.nome);
			printf ("\n E-mail: %s", aux->info.email);
			printf ("\n Senha: %s", aux->info.senha);
			printf ("\n Endereco: %s Num: %s", aux->info.dadosEndereco.logradouro, aux->info.dadosEndereco.num);
			printf ("\n----------------------------------");
			aux = aux->proximo;
		}
		printf ("\n**********************************");
		
	}else {
		printf ("\n Não há cadastro!!!");
	}
	getch ();
}
