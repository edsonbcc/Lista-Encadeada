#include "lista_encadeada.h"
/*

void intersecao(listaSE* l1, listaSE* l2, listaSE* l3) {
	no* aux_l1 = l1->primeiro; // auxiliar l1 sera o pivo e percorrerá toda a lista
	no* aux_l2 = l2->primeiro; // aux_l2 sera estatico e sempre ficara na primeira posicao
	
	while (!vazia(l1) && !vazia(l2)) { // enquanto lista l1 && l2 nao estiverem vazias
		if (aux_l1->dado == aux_l2->dado) { // verifica se os dados sao iguais
			insere_em_ordem(l3, aux_l2->dado); // caso sejam ele  insere em l3 o dado de l2 que é igual a l1
			retira_depois(aux_l1, l1); // retira o elemento de l1 em qualquer lugar da lista
			retira_primeiro(l2); // retira primeiro pq dado->l2 sempre fica em primeiro
			aux_l1 = l1->primeiro; // auxiliar l1 volta para o inicio
			aux_l2 = l2->primeiro; // auxiliar l2 volta para o inicio
			
		}
		else if (aux_l1->prox == NULL){ // caso aconteca uma excecao de l1 chegar ao fim e nao achar nenhum elemento igual
			retira_primeiro(l2); // retira o l2->dado pq ele ja passou por toda a lista e nao achou nenhum igual
			aux_l1 = l1->primeiro;// auxiliar l1 volta para o inicio
			aux_l2 = l2->primeiro;// auxiliar l2 volta para o inicio
		}
		else 
			aux_l1 = aux_l1->prox; // caso nenhuma, ele incrementa aux_l1 para ver o proximo dado
	}
}



*/



