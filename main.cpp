#include <iostream>
#include <string>
#include "pessoa.h"
#include "telas.h"
using namespace std;


int main()
{
	string nome, dataDeNascimento, pais;
	int opcaoMenu=1,opcaoLogado=1, id = 0;

	Pessoa* person [10];

	Telas* tela = new Telas;

	while (opcaoMenu != 3){
			opcaoMenu = tela->MenuInicial();
		switch( opcaoMenu ){
			case 1:
						tela->CadastrarPessoa(id);
						person[id] = new Pessoa (tela->name, tela->birth, tela->country);
						id++;
						break;

			case 2:
                        if(opcaoLogado!=0)
                            opcaoLogado = tela->Logar(person, id-1);
						while(opcaoLogado != 0){
						switch(opcaoLogado){
							case 1: opcaoLogado = tela->adicionarContato(person,id-1);
							//case 2:
						}
					}
					break;

		}
	}
	return 0;
}
