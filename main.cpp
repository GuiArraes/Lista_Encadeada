#include "tipos.h"

int main (){
	setlocale(LC_ALL,"portuguese");
	
	TLista cadastro;
	inicializarLista(&cadastro);
	int op;

	do{
		system ("cls");
		printf ("\n 1 - Menu Cadastro");
		printf ("\n 2 - Menu Apresentar");
		printf ("\n 3 - Buscar por CPF");
		printf ("\n 4 - Exluir por CPF");
		printf ("\n 0 - Sair");
		printf ("\n Escolha uma opcao: ");
		scanf ("%d", &op);
		switch (op){
			case 1: menuInserir (&cadastro); break;
			case 2: menuApresentar (&cadastro); break;
			case 3: {
				system ("cls");
				if (cadastro.inicio != NULL){
					consultar (&cadastro);	
				} else {
					printf ("\n Não há cadastro!!!");
				}
				getch ();
				break;
			}
			case 4: {
				system ("cls");
				if (!(cadastro.inicio == NULL)){
					TBasePessoal itemExcluido;
					itemExcluido = excluir (&cadastro);
					if (!(strcmp (itemExcluido.cpf, "-1")) == 0){
						system ("cls");
						printf ("\n ********CADASTRO EXCLUIDO********");
						printf ("\n Nome: %s", itemExcluido.nome);
						printf ("\n CPF : %s", itemExcluido.cpf);
						printf ("\n ---------------------------------");
					} else {
						printf ("\n ********CADASTRO EXCLUIDO********");
						printf ("\n CPF Não cadastrado");
						printf ("\n----------------------------------");					
					}	
				}else {
					printf ("\n Não há cadastro!!!");
				}
				getch ();
				break;
			}
		}	
	}while (op != 0);

	return 0;
}
