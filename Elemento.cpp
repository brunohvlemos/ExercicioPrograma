#include "Elemento.h"

Elemento::Elemento()
{
    //ctor
}

Elemento::~Elemento()
{
    //dtor
}

Elemento Elemento::proximo(){
  return this->proxElemento;
};

void Elemento::setProximo(Elemento* prox){
  this->proxElemento = prox;
};

Mensagem Elemento::getMensagem(){
    return this->msg;
};

void Elemento::setMensagem(Mensagem* msg){
  this->msg = msg;
};
