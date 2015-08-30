#include <iostream>
#include <string>
#include "pessoa.h"
#include "telas.h"
#include <stdlib.h>

using namespace std;


int main()
{
	int opcaoMenu=1,opcaoLogado, id = 0, pessoaLogada;
	bool clear = true, retornoParaLogar = true;
	Pessoa* person [10];
	Telas* tela = new Telas();

	while (opcaoMenu != 3){
		    system("clear");
			opcaoMenu = tela->MenuInicial();
			opcaoLogado=1;
			retornoParaLogar = true;
		switch( opcaoMenu ){
			case 1:
						system("clear");
						tela->CadastrarPessoa(id);
						person[id] = new Pessoa (tela->name, tela->birth, tela->country);
						id++;
						break;
			case 2:
					while(retornoParaLogar){
                        system("clear");
                        pessoaLogada = tela->Logar(person, id-1);
						if (pessoaLogada ==0){
						 retornoParaLogar = false;
						 break;
					 }
					 opcaoLogado = 1;
						while(opcaoLogado != 0){
						if(clear)	system("clear");
						clear = true;
							opcaoLogado = tela->Logado(person, pessoaLogada);
							if(opcaoLogado == 0) break;
						switch(opcaoLogado){
							case 1: system("clear"); opcaoLogado = tela->adicionarContato(person,id-1); break;
							case 2: system("clear"); opcaoLogado = tela->mensagensEnviadas(person); clear = false; break;
							case 3: system("clear"); opcaoLogado = tela->mensagensRecebidas(person); clear = false; break;
							case 4: system("clear"); opcaoLogado = tela->escreverMensagem(person,id); tela->ignore = true; break;
						}
					}
				}
					break;

		}
	}
	return 0;
}
