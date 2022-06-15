#include "tipos.h"

void menuInserir (TLista *p){
	int op;
	
	do{
		system ("cls");
		printf ("\n 1 - Inserir no Final da Lista");
		printf ("\n 2 - Inserir no Inicio");
		printf ("\n 3 - Inserir em Ordem (Nome)");
		printf ("\n 0 - Menu Principal");
		printf ("\n Escolha uma opcao: ");
		scanf ("%d", &op);
		switch (op){
			case 1: inserir (p); break;
			case 2: inserirInicio (p); break;
			case 3: inserirOrdenado (p); break;
		}	
	}while (op != 0);
}
