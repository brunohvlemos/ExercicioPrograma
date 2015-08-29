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
//  return this->proxElemento;
};

/*
Mensagem Elemento::getMensagem(){
    return msg;
};*/

void Elemento::setProximo(Elemento* prox){
  this->proxElemento = prox;
};

void Elemento::setMensagem(Mensagem* msg){
  this->msg = msg;
};
