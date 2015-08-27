#include <iostream>
#include <string>
#include "listadepessoas.h"

using namespace std;


int main()
{
	string birth, country, name;
	int opcao, id = 0;

// Inicia uma pessoa aleatoria pra guardar o valor temporario e as 10 pessoas que podem ser adicionadas
	Pessoa* person = new (Pessoa);
	Pessoa* person1 = new (Pessoa);
	Pessoa* person2 = new (Pessoa);
	Pessoa* person3 = new (Pessoa);
	Pessoa* person4 = new (Pessoa);
	Pessoa* person5 = new (Pessoa);
	Pessoa* person6 = new (Pessoa);
	Pessoa* person7 = new (Pessoa);
	Pessoa* person8 = new (Pessoa);
	Pessoa* person9 = new (Pessoa);
	Pessoa* person10 = new (Pessoa);

	cout << "PoliSocial" << endl;
	cout << "----------" << endl;
	cout << "1) Cadastrar pessoa" << endl;
	cout << "2) Logar como pessoa" << endl;
	cout << "3) Terminar" << endl;

	ListaDePessoas* lista = new (ListaDePessoas);
	opcao = 1;
	while (opcao != 0){
		cin >> opcao;
		switch( opcao ){
			case 1: cout << "Informe os dados da pessoa:" << endl;
						cout << "Nome: ";
						getline(cin, name);
						getline(cin, name);
						cout << "Data de nascimento: ";
						getline(cin, birth);
						cout << "Pais: ";
						getline(cin, country);
						person->setId(id);
						person->setCaracteristicas(name, birth, country);
						lista->atualiza(id, person1, person2, person3, person4, person5, person6, person7, person8, person9, person10);
						id++;
						cout << "Pessoa cadastrada com sucesso" << endl;

			case 2: cout << "Escola uma das pessoas:" << endl;
						// aqui ta dando errado, a intencao era imprimir as pessoas cadastradas ate o momento
						for(int i = 0; i<10 ; i++){
							lista->pickaPerson(i, person1, person2, person3, person4, person5, person6, person7, person8, person9, person10);
							cout << id << ": " << person->getNome() << endl;
						}
						cin >> opcao;
						//mostra as informacoes da pessoa escolhida
						lista->pickaPerson(opcao, person1, person2, person3, person4, person5, person6, person7, person8, person9, person10);
						cout << "NOME " << person->getNome() << endl;
						cout << "NASCIMENTO: " << person->getDataDeNascimento() << endl;
						cout << "PAIS: " << person->getPais() << endl;


		}
	}
	return 0;
}
