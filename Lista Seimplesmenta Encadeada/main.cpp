#include "lista_encadeada.h"


int main(void) {
	listaSE *l1 = new listaSE();
	listaSE *l2 = new listaSE();
	listaSE *l3 = new listaSE();
	
	int ch, elemento;
	
	do {
		cout << "\nO que deseja fazer fazer?\n";
		cout << "\nComandos lista l1:\n";
		cout << "1- Inserir dado no inicio\n";
		cout << "2- Inserir dado no fim\n";
		cout << "3- Inserir em ordem\n";
		cout << "4- Retirar primeiro dado\n";
		cout << "5- Retirar ultimo dado\n";
		cout << "6- Imprimir \n";
		cout << "7- Retornar ultimo elemento\n";
		cout << "\nComandos lista l2:\n";
		cout << "8- Inserir dado no inicio\n";
		cout << "9- Inserir dado no fim\n";
		cout << "10- Inserir em ordem\n";
		cout << "11- Retirar primeiro dado\n";
		cout << "12- Retirar ultimo dado\n";
		cout << "13- Imprimir \n";
		cout << "14- Retornar ultimo elemento\n";
		cout << "\n15- Calcular similaridade\n";
		cout << "16- Calcular intersecao\n";
		cout << "18- Retirar elemento\n";
		cout << "19- Numero elementos\n";
		cout << "20- Ordena\n";
		cout <<"17- Sair\n\n";
		cout << "Escolha: ";
		cin >> ch;
		
		switch (ch) {
			case 1: {
				system("CLS");
				cout << "\nDigite o elemento que deseja inserir no inicio: ";
				cin >> elemento;
				l1->insere_primeiro(elemento);
				break;
			}
			case 2: {
				system("CLS");
				cout << "\nDigite o elemento que deseja inserir no fim: ";
				cin >> elemento;
				l1->insere_ultimo(elemento);
				break;
			}
			case 3: {
				system("CLS");
				cout << "\nDigite o elemento que deseja inserir em ordem: ";
				cin >> elemento;
				l1->insere_em_ordem(elemento);
				break;
			}
			case 4: {
				system("CLS");
				l1->retira_primeiro();
				break;
			}
			case 5: {
				system("CLS");
				l1->retira_ultimo();
				break;
			}
			case 6: {
				system("CLS");
				cout << "\nImprimir l1: \n";
				//imprime(l1);
				break;
			}
			case 7: {
				system("CLS");
				cout << "Ultimo elemento: " << l1->ultimo_elemento() << endl;
				break;
			}
			case 8: {
				system("CLS");
				cout << "\nDigite o elemento que deseja inserir no inicio: ";
				cin >> elemento;
				l2->insere_primeiro(elemento);
				break;
			}
			case 9: {
				system("CLS");
				cout << "\nDigite o elemento que deseja inserir no fim: ";
				cin >> elemento;
				l2->insere_ultimo(elemento);
				break;
			}
			case 10: {
				system("CLS");
				cout << "\nDigite o elemento que deseja inserir em ordem: ";
				cin >> elemento;
				l2->insere_em_ordem(elemento);
				break;
			}
			case 11: {
				system("CLS");
				l2->retira_primeiro();
				break;
			}
			case 12: {
				system("CLS");
				l2->retira_ultimo();
				break;
			}
			case 13: {
				system("CLS");
				cout << "\nImprimir l2: \n";
				//l2->imprime();
				break;
			}
			case 14: {
				system("CLS");
				cout << "Ultimo elemento: " << l2->ultimo_elemento() << endl;
				break;
			}
					 /*
			case 15: {
				system("CLS");
				similaridade(l1, l2);
				break;
			}
			case 16: {
				intersecao(l1, l2, l3);
				system("CLS");
				cout << "\nImprimir l3 (Intersecao): \n";
				imprime(l3);
				break;
			}
			case 18: {
				system("CLS");
				cout << "\n Procurar e retirar elemento que deseja remover: ";
				cin >> elemento;
				retira_qualquer(l1, elemento);
				retira_qualquer(l2, elemento);
				
				break;
			}
			case 19: {
				cout <<"\nN_elementos l1: " << numero_elementos(l1);
				cout <<"\nN_elementos l2: " << numero_elementos(l2);
				break;
			}
			*/
			case 20: {
				//ordena(l1);
				//ordena(l2);
				break;
			}
			
			
		}
	} while (ch!=17);
	
	
	delete [] l1;
	delete [] l2;
	delete [] l3;
	
	getchar();
	return 0;
}
