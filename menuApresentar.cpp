#include "tipos.h"

void menuApresentar (TLista *p){

	int op;
	
	do{
		system ("cls");
		printf ("\n 1 - Aapresentar lista Original");
		printf ("\n 2 - Apresentar ordem DECRESCENTE (E-MAIL)");
		printf ("\n 0 - Menu Principal");
		printf ("\n Escolha uma opcao: ");
		scanf ("%d", &op);
		switch (op){
			case 1: apresentar (p) ; break;
			case 2: apresentarEmailOrdem (p); break;
		}
	}while (op != 0);		
}
