#ifndef LISTADEMENSAGENS_H
#define LISTADEMENSAGENS_H
#include <iostream>
#include "Elemento.h"
#include "Mensagem.h"

class ListaDeMensagens {
private:
  int tamanho,numMsg;
  Elemento* cabeca;
  Elemento* atual;

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
