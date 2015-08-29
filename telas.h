#ifndef TELAS_H
#define TELAS_H
#include "pessoa.h"
#include <iostream>

using namespace std;

class Telas {
private:
  int opcao=0;
  int pessoaLogada;
  int novoContato;
  Mensagem* msg = new Mensagem("");
  string texto;

public:
  string name, birth, country;
  int MenuInicial();
  void CadastrarPessoa(int id);
  int Logar(Pessoa* person[10], int id);
  void Opcoes();
  int adicionarContato(Pessoa* person[10], int id);
  int Logado(Pessoa* person[10],int pessoaEscolhida);
  int mensagensEnviadas(Pessoa *person[10]);
  int mensagensRecebidas(Pessoa *person[10]);
  int escreverMensagem(Pessoa *person[10],int id);

  };

#endif //TELAS_H
