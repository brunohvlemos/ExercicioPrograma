#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

using namespace std;

class Pessoa
{
private:
	string  nome, dataDeNascimento, pais;
	Pessoa* contato[9];
	int contactId;
	ListaDeMensagens* listaEnviadas;
	ListaDeMensagens* listaRecebidas;


public:
	Pessoa(string nome, string dataDeNascimento,string pais);
	~Pessoa();
	string getNome();
	string getDataDeNascimento();
	string getPais();
	void adiciona(Pessoa* contato);
	void envia( string texto );
	// void recebe (Mensagem *m);
	void verContatos();
};
#endif //PESSOA_H
