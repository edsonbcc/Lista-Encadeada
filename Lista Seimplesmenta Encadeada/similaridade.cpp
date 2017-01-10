#include "lista_encadeada.h"
/*
float similaridade(listaSE* l1, listaSE* l2) {
	int i;
	float soma_l1=0, soma_l2=0, soma_l1xl2=0;
	float dado_l1, dado_l2, formula;
		
	if (!l1->vazia() && !l2->vazia()) // faço uma verificacao para ver se nao estao vazias
		while (!vazia(l1) && !vazia(l2)) { // faço um controle enquanto l1 nao estiver vazia
			dado_l1 = retira_primeiro(l1); // dado_l1 recebe o elemento retornado pela funcao retira primeiro
			dado_l2 = retira_primeiro(l2);
			soma_l1xl2 += dado_l1 * dado_l2; // somatorio(l1*l2) parte de cima
			soma_l1 += pow(dado_l1, 2); // somatorio(l1^2) parte de baixo
			soma_l2 += pow(dado_l2, 2); // somatorio(l2^2) parte de baixo
		}
		
	if (soma_l1*soma_l2 != 0) { // verificar se o denominador nao é zero
		formula =  soma_l1xl2/sqrt(soma_l1 * soma_l2); // juncao e aplicacao da formula
		cout << "Similaridade = " << formula << endl;
		return formula;
	}
	else	
		cout << "Impossivel dividir, denominador = 0"; 
		return 0;
}
*/