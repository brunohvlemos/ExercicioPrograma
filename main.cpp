#include <iostream>
#include <string>
#include "pessoa.h"
using namespace std;


int main()
{
	string birth, country, name;
	int opcao, id = 0;

// Inicia uma pessoa aleatoria pra guardar o valor temporario e as 10 pessoas que podem ser adicionadas
	Pessoa* person [10];
	opcao = 1;
	while (opcao != 3){
			cout << "PoliSocial" << endl;
			cout << "----------" << endl;
			cout << "1) Cadastrar pessoa" << endl;
			cout << "2) Logar como pessoa" << endl;
			cout << "3) Terminar" << endl;
		cin >> opcao;
		switch( opcao ){
			case 1:
						cout << "Informe os dados da pessoa:" << endl;
						cout << "Nome: ";
						cin.ignore(100,'\n');
						getline(cin, name);
						cout << "Data de nascimento: ";
						getline(cin, birth);
						cout << "Pais: ";
						getline(cin, country);
						person[id]= new Pessoa(name,birth,country);
						cout << "Pessoa cadastrada com sucesso" << endl;
						id++;
						break;

			case 2: cout << "Escolha uma das pessoas:" << endl;
						// aqui ta dando errado, a intencao era imprimir as pessoas cadastradas ate o momento
						for(int i = 0; i<(id) ; i++){

									cout << (id) << ": " << person[i]->getNome() << endl;
						}

						cout << "Digite um numero ou 0 para voltar";
						cin >> opcao;
						//mostra as informacoes da pessoa escolhida
						if(opcao!=0){
							cout << "Pessoa: " << person[opcao-1]->getNome() << endl  << person[opcao-1]->getDataDeNascimento() << " | " << person[opcao-1]->getPais() << endl;
							cout << "------------------------------" << endl << endl << "Escolha uma opcao:" << endl << "1) Adicionar contato" << endl << "2) Ver mensagens enviadas" << endl << "3) Ver mensagens recebidas" << endl << "4) Escrever mensagem" << endl << "0) Voltar";
							cin >> opcao;
							switch (opcao){
								case 1:
							}
							break;
						}


		}
	}
	return 0;
}
