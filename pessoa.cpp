#include "pessoa.h"
#include <iostream>

using namespace std;

void Pessoa::setCaracteristicas(string nome, string dataDeNascimento, string pais){
	this->nome = nome;
	this->dataDeNascimento = dataDeNascimento;
	this->pais = pais;
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

void Pessoa::setId(int id){
	 this->Id = id;
};

int Pessoa::getId(){
	return this->Id;
};
