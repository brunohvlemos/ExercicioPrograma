#ifndef TELAS_H
#define TELAS_H
#include "pessoa.h"
#include <iostream>

using namespace std;

class Telas {
private:
  int opcao;
  int pessoaEscolhida;

public:
  string name, birth, country;
  int MenuInicial();
  void CadastrarPessoa(int id);
  int Logar(Pessoa* person[10], int id);
  void Opcoes();
  int adicionarContato(Pessoa* person[10], int id);
  int Logado(Pessoa* person[10],int pessoaEscolhida);

  };

#endif //TELAS_H
