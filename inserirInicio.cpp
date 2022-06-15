#include "tipos.h"

void inserirInicio (TLista *p){
	
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
		novoCadastro->proximo = p->inicio;
		p->inicio = novoCadastro;		
	}
}
