#include "pessoa.h"
#include <iostream>

using namespace std;


Pessoa::Pessoa(string nome, string dataDeNascimento, string pais){
	this->nome = nome;
	this->dataDeNascimento = dataDeNascimento;
	this->pais = pais;
};

void Pessoa::adiciona(Pessoa *contato){

};
void Pessoa::envia(string texto){

};
// void recebe(Mensagem *m){
//
// };
void verContatos(){

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
