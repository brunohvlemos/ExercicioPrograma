#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

using namespace std;

class Pessoa
{
private:
	string  nome, dataDeNascimento, pais;
	int Id;

public:
	void setId(int id);
	int getId();
	void setCaracteristicas(string nome, string dataDeNascimento,string pais);
	string getNome();
	string getDataDeNascimento();
	string getPais();
	//void adiciona();
	//void envia( string texto );
	//void recebe ();
	//void verContatos();
};
#endif //PESSOA_H
