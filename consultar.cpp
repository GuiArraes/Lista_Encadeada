#include "tipos.h"

TDadoPessoal* buscarCadastro (TLista *p, char consulta[12]){
	TDadoPessoal *aux;
	aux = p->inicio;
	
	while (aux != NULL){
		if (strcmp (aux->info.cpf, consulta) == 0){
			return aux;  //Achou o valor buscado
		} else {
			aux = aux->proximo;
		}
	}
	return aux;
}

void consultar (TLista *p){
	
	char cpfConsultar[12];
	TDadoPessoal *memoria;
	
	fflush (stdin);
	printf ("\n Informe o CPF para consulta: ");
	gets (cpfConsultar);
	
	memoria = buscarCadastro (p, cpfConsultar);
	system ("cls");
	printf (" **********CONSULTA POR CPF**********");
	if (memoria != NULL){
		printf ("\n Consulta CPF: %s", cpfConsultar);
		printf ("\n Nome: %s", memoria->info.nome);
		printf ("\n E-mail: %s", memoria->info.email);
		printf ("\n Senha: %s", memoria->info.senha);
		printf ("\n Endereco: %s Num: %s", memoria->info.dadosEndereco.logradouro, memoria->info.dadosEndereco.num);		
	} else {
		printf ("\n CPF: %s \n Não cadastrado!!!", cpfConsultar);
	}
	printf ("\n ------------------------------------");
	getch ();	
}
