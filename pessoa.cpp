#include "pessoa.h"
#include <iostream>

using namespace std;

/*ctor*/
Pessoa::Pessoa(string nome, string dataDeNascimento, string pais){
	this->nome = nome;
	this->dataDeNascimento = dataDeNascimento;
	this->pais = pais;
	this->contactId = 0;
	this->novaLista = true;
	this->listaRecebidas = new ListaDeMensagens();
	this->listaEnviadas = new ListaDeMensagens();
};

/*Verifica se a pessoa cadastrada ja contem um determinado contato*/
bool Pessoa::contemContato(Pessoa *contato){
    for (int i =0;i<contactId;i++){
        if(this->contato[contactId]==contato){
            return true;
        }
    }
    return false;
};

/*Adiciona um novo contato para a pessoa logada*/
void Pessoa::adiciona(Pessoa *contato){
			this->contato[contactId] = new Pessoa("x","x","x");
			this->contato[contactId] = contato;
			this->contactId++;
};

/*Metodo chamado em telas.cpp para que uma pessoa envie uma mensagem para seus contatos*/
void Pessoa::envia(string texto){
		Mensagem* msg = new Mensagem(texto);
		this->listaEnviadas->adicionar(msg);
		for(int i=0; i<contactId; i++){
			contato[i]->recebe(msg);
		}
};

/*Adiciona a lista de mensagens recebidas uma nova mensagem recebida*/
 void Pessoa::recebe(Mensagem *msg){
   this->listaRecebidas->adicionar(msg);
};

/*Imprime todos os nomes dos contatos de uma pessoa*/
void Pessoa::verContatos(){
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
