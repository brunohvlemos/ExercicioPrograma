#ifndef LISTADEMENSAGENS_H
#define LISTADEMENSAGENS_H
#include <iostream>

class ListaDeMensagens {
private:
  int tamanho;

public:
  ListaDeMensagens();
  ~ListaDeMensagens();
  void adicionar(Mensagem* m);
  Elemento* getCabeca();
  void getMensagensRecebidas();
  void getMensagensEnviadas();


}
