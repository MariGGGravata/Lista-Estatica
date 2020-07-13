#include <stdio.h>
#include <stdlib.h>
#include "lista_estatica.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	TLista *l = criar();
	
	/*
	TLista *l1 = criar();
	TLista *l2 = criar();
	*/
	
	printf("A lista tem %d elementos.\n", tamanho(l));
	
	/*
	inserir(l1, 8);
	inserir(l1, 9);
	inserir(l1, 10);
	inserir(l1, 11);
	inserir(l1, 12);
	
	inserir(l2, 4);
	inserir(l2, 5);
	inserir(l2, 6);
	inserir(l2, 7);
	inserir(l2, 8);
	
	printf("Iguais = %d", comparar(l1,l2));
	printf("\n----------------\n");
	exibir(l1);
	inverter(l1);
	printf("\n");
	exibir(l1);
	printf("\n----------------\n");
	exibir(l2);
	inverter(l2);
	printf("\n");
	exibir(l2);
	*/
	
	/*
	inserir(l, 8);
	inserir(l, 9);
	inserir(l, 10);
	inserir(l, 11);
	inserir(l, 12);
	*/
	/*
	exibir(l);
	
	printf("A lista tem %d elementos.\n", tamanho(l));
	
	printf("\nO n: %d esta na posicao: %d.", 9, buscar(l, 9)+1);
	
	printf("\n");
	
	printf("\nO n: %d esta na posicao: %d.", 6, buscar(l, 6));
	
	remover(l, 10);
	exibir(l);
	
	printf("A lista tem %d elementos.\n", tamanho(l));
	
	removertodos(l, 11);
	exibir(l);
	
	printf("A lista tem %d elementos.\n", tamanho(l));
	
	inserirnoini(l, 5);
	exibir(l);
	
	printf("A lista tem %d elementos.\n", tamanho(l));
	
	inserirpos(l, 11, 3);
	inserirpos(l, 11, 3);
	exibir(l);
	
	printf("A lista tem %d elementos.\n", tamanho(l));
	
	removerpos(l, 3);
	exibir(l);
	
	printf("A lista tem %d elementos.\n", tamanho(l));
	
	removerdoini(l);
	exibir(l);
	
	printf("A lista tem %d elementos.\n", tamanho(l));
	
	inserirnoini(l, 5);
	exibir(l);
	
	printf("A lista tem %d elementos.\n", tamanho(l));
	
	*/
	
	
	return 0;
}
