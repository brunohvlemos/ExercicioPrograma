#ifndef LISTADEMENSAGENS_H
#define LISTADEMENSAGENS_H
#include <iostream>
#include "Elemento.h"

class ListaDeMensagens {
private:
  int tamanho,numMsg;
  Elemento* cabeca = new Elemento();
  Elemento* atual = new Elemento();

public:
  ListaDeMensagens();
  ~ListaDeMensagens();
  int getTamanho();
  void adicionar(Mensagem* m);
  Elemento* getCabeca();
  void getMensagens();
  //void getMensagensEnviadas();
};
#endif
