#ifndef TELAS_H
#define TELAS_H
#include "pessoa.h"
#include <iostream>

using namespace std;

class Telas {
private:
  int opcao,i;
  int pessoaLogada;
  int novoContato;
  Mensagem* msg;
  string texto;

public:
  string name, birth, country;
  bool ignore;
  Telas();
  int MenuInicial();
  void CadastrarPessoa();
  int Logar(Pessoa* person[10], int id);
  void Opcoes();
  int adicionarContato(Pessoa* person[10], int id);
  int Logado(Pessoa* person[10],int pessoaEscolhida);
  int mensagensEnviadas(Pessoa *person[10]);
  int mensagensRecebidas(Pessoa *person[10]);
  int escreverMensagem(Pessoa *person[10],int id);

  };

#endif //TELAS_H
