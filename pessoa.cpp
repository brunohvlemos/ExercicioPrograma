#include "pessoa.h"
#include <iostream>

using namespace std;


Pessoa::Pessoa(string nome, string dataDeNascimento, string pais){
	this->nome = nome;
	this->dataDeNascimento = dataDeNascimento;
	this->pais = pais;
	this->contactId = 0;
	this->novaLista = true;
	this->listaRecebidas = new ListaDeMensagens();
	this->listaEnviadas = new ListaDeMensagens();
};


void Pessoa::adiciona(Pessoa *contato){
			this->contato[contactId] = new Pessoa("x","x","x");
			this->contato[contactId] = contato;
			this->contactId++;
};

void Pessoa::envia(string texto){
		for(int i=0; i<contactId; i++){
			Mensagem* msg = new Mensagem(texto);
		/*	if(novaLista){
				this->listaEnviadas = new ListaDeMensagens();
				this->listaRecebidas = new ListaDeMensagens();
				novaLista = false;
			}*/
			this->listaEnviadas->adicionar(msg);
			contato[i]->recebe(msg);
		}
};
 void Pessoa::recebe(Mensagem *msg){
   this->listaRecebidas->adicionar(msg);
};
void Pessoa::verContatos(){
/*ta dando erro com o contactId quando chama a função verContatos depois que já tem algum contato adicionado
E não  erro no contato[contactId]!! por algum motivo até imprimir o contactId dá erro.*/
			for(int i=0; i<contactId; i++){
				cout << contato[i]->getNome() << endl;
			}
};
string Pessoa::getNome() {
	return this->nome;
};

string Pessoa::getDataDeNascimento() {
	return this->dataDeNascimento;
};

string Pessoa::getPais() {
	return this->pais;
};
