#include "lista_estatica.h"
#include <stdio.h>
#include <stdlib.h>

const int TAM = 100;

struct Lista{
	
	int vetor[100];
	int a;	
	
};

TLista* criar(){
	
	TLista* nova = (TLista*)malloc(sizeof(TLista));
	nova->a = 0;
	return nova;
	
}

int tamanho(TLista *l){
	
	return l->a;
	
}

void inserir(TLista *l, int v){
	
	if(l->a == TAM){
		
		return;
		
	}
	
	l->vetor[l->a++] = v;
		
}

int buscar(TLista *l, int v){
	
	int i;
	for(i = 0; i < l->a; i++){
		
		if(l->vetor[i] == v){
			
			return i;
			
		}	
		
	}
	
	
	return -1;
	
}

int remover(TLista *l, int v){
	
	int pos = buscar(l, v);
	
	if(pos == -1){
		
		return -1;
		
	} 
	
	int i;
	
	for(i = pos + 1;i < l->a; i++){
		
		l->vetor[i - 1] = l->vetor[i];
		
	}
	
	l->a = l->a - 1;
	
	return pos;
	
}

void exibir(TLista *l){
	
	printf("\n------------------------\n");
	int i;
	for(i = 0; i < l->a; i++){
		
		printf("%d\n", l->vetor[i]);
		
	}
	
	printf("------------------------\n");
	
}

/*EXTRAS*/

int removertodos(TLista *l, int v){
	
	int retorno = 0;
	int pos = buscar(l, v);
	
	while(pos != -1){
		retorno = 1;
		int i;
	
		for(i = pos + 1;i < l->a; i++){
		
			l->vetor[i - 1] = l->vetor[i];
		
		}
	
		l->a = l->a - 1;
		pos = buscar(l, v);
		
	}
	
	return retorno;
	
}

void inserirnoini(TLista *l, int v){
	
	if(l->a == TAM){
		
		return;
		
	}
	
	int i;
	
	for(i = l->a - 1; i >=0; i--){
		
		l->vetor[i+1] = l->vetor[i];
		
	}
	
	l->vetor[0] = v;
	l->a = l->a + 1;
}

void removerdoini(TLista *l){
	
	if(l->a == TAM){
		
		return;
		
	}
	
	int i;
	
	for(i = 1;i < l->a; i++){
		
		l->vetor[i - 1] = l->vetor[i];
		
	}
	
	l->a = l->a - 1;
}

void inserirpos(TLista *l, int v, int p){
	
	if(l->a == TAM){
		
		return;
		
	}
	
	int i;
	
	for(i = l->a - 1; i >= p; i--){
		
		if(l->a - 1 == p){
			
			l->vetor[i] = v;
			
		} else if(l->a - 1 != p){
			
			l->vetor[i+1] = l->vetor[i];
			
		}	
	}
	
	l->a = l->a + 1;
}

int removerpos(TLista *l, int v){
	
	int i;
	
	for(i = v + 1; i < l->a; i++){
		
		l->vetor[i - 1] = l->vetor[i];
					
	}
	
	l->a = l->a - 1;
	
	return l->a;
}

int comparar(TLista *l1, TLista *l2){
	
	int i, j, qtd = 0;
	
	for(i = 0; i < l1->a; i++){
		int e1 = l1->vetor[i];
		
		for(j = 0; j < l2->a; j++){
			
			if(e1 == l2->vetor[j]){
				
				qtd = qtd + 1;
				
			}	
		}
	}
	return qtd;
}

void inverter(TLista *l){
	
	int i;
	for(i = 0; i < l->a/2; i++){
		
		int temp = l->vetor[i];
		l->vetor[i] = l->vetor[l->a - i - 1];
		l->vetor[l->a - i - 1] = temp;
		
	}
}


