#pragma once
#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

class no {
	friend class listaSE;
private:
	int dado; // DADO digitado
	no *prox; // ponteiro no pra prox
public:
	no(int e);
	void set_dado(int DADO);
	int get_dado();
	void set_no(no *PROX);
	no * get_no();
	~no();
};

class listaSE {
private:
	no * primeiro;
	no * ultimo;
public:
	listaSE();
	~listaSE();
	no * aloca_no(int numero);
	bool vazia(); // verifica se esta vazia
	void insere_primeiro(int e);
	void insere_ultimo(int e);
	no * insere_depois(no *p, int e);
	void insere_em_ordem(int e);
	void imprime();
	int retira_primeiro(); // retira o primeiro no
	int retira_ultimo(); // retira o ultimo no
	no* retira_depois(no *p); // retira um determinado no passado no* p
	int ultimo_elemento(); // retorna o ultimo elemento
	int primeiro_elemento(); // retorna o primeiro elemento
	int procura(int chave);
	bool retira_elemento(int chave);

	//int retorna_valor(int chave); // implementação para uso em grafo
	
};

