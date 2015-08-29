#include <iostream>
#include <string>
#include "pessoa.h"
#include "telas.h"
using namespace std;


int main()
{
	string nome, dataDeNascimento, pais;
	int opcao, id = 0;

	Pessoa* person [10];

	Telas* tela = new Telas;

	opcao = 1;
	while (opcao != 3){
			opcao = tela->MenuInicial();
		switch( opcao ){
            //case 0: break;
			case 1:
						tela->CadastrarPessoa(id);
						person[id] = new Pessoa (tela->name, tela->birth, tela->country);
						id++;
						break;

			case 2:
						while(opcao != 0){
								opcao = tela->Logar(person, id-1);
						switch(opcao){
							case 1: opcao = tela->adicionarContato(person,id-1);
							break;
							//case 2:
						}
					}
					break;

		}
	}
	return 0;
}
