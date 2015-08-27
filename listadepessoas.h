#ifndef LISTADEPESSOAS_H
#define LISTADEPESSOAS_H
#include <iostream>
#include "pessoa.h"

using namespace std;

//Foi a primeira coisa que eu pensei, acho que aqui devia usar vetor ou lista, mas eu nao sabia entao fiz assim

class ListaDePessoas {
private:
	Pessoa *person;
	int listaDePessoas[10];
public:
	void pickaPerson (int id, Pessoa* person1, Pessoa* person2, Pessoa* person3, Pessoa* person4, Pessoa* person5, Pessoa* person6, Pessoa* person7, Pessoa* person8, Pessoa* person9, Pessoa* person10);
	void atualiza(int id, Pessoa* person1, Pessoa* person2, Pessoa* person3, Pessoa* person4, Pessoa* person5, Pessoa* person6, Pessoa* person7, Pessoa* person8, Pessoa* person9, Pessoa* person10);
};
#endif
