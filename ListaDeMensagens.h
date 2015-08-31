#ifndef LISTADEMENSAGENS_H
#define LISTADEMENSAGENS_H
#include <iostream>
#include "Elemento.h"
#include "Mensagem.h"

class ListaDeMensagens {
private:
  int tamanho,numMsg,i;
  Elemento* cabeca;
  Elemento* atual;
  Elemento* procura,*lixo;

public:
  ListaDeMensagens();
  ~ListaDeMensagens();
  int getTamanho();
  void adicionar(Mensagem* m);
  Elemento* getCabeca();
  Elemento* procurar(int indice);
  void getMensagens();
};
#endif
