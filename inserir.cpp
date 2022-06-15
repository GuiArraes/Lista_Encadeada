#include "tipos.h"

void inserir (TLista *p){
	
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
	
	//Daqui para cima eu peguei as informações cadastrais da pessoa
	
	//Add a Lista e ligando os elementos desta lista
	if (p->inicio == NULL){
		p->inicio = novoCadastro;
		p->fim	  = novoCadastro;
	}else{
		p->fim->proximo = novoCadastro;
		p->fim			= novoCadastro;
	}
	printf ("\n Cadastro Realizado!!!");
	getch ();	
}
