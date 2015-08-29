#include <iostream>
#include <string>
#include "pessoa.h"
#include "telas.h"
using namespace std;


int main()
{
	string nome, dataDeNascimento, pais;
	int opcaoMenu=1,opcaoLogado, id = 0, pessoaLogada;

	Pessoa* person [10];

	Telas* tela = new Telas();

	while (opcaoMenu != 3){
			opcaoMenu = tela->MenuInicial();
			opcaoLogado=1;
		switch( opcaoMenu ){
			case 1:
						tela->CadastrarPessoa(id);
						person[id] = new Pessoa (tela->name, tela->birth, tela->country);
						id++;
						break;
			case 2:
            if(opcaoLogado!=0)
              pessoaLogada = tela->Logar(person, id-1);
						if (pessoaLogada ==0) break;
						while(opcaoLogado != 0){
							opcaoLogado = tela->Logado(person, pessoaLogada);
						switch(opcaoLogado){
							case 1: opcaoLogado = tela->adicionarContato(person,id-1); break;
							case 2: opcaoLogado = tela->mensagensEnviadas(person); break;
							case 3: opcaoLogado = tela->mensagensRecebidas(person);break;
							case 4: opcaoLogado = tela->escreverMensagem(person,id); tela->ignore = true; break;
						}
					}
					break;

		}
	}
	return 0;
}
