#include "Elemento.h"

Elemento::Elemento()
{
    //ctor
}

Elemento::~Elemento()
{
    //dtor
}

//Mensagem* Elemento::getMensagem(){
//    return msg;
//};

void Elemento::setProximo(Elemento* prox){
  this->proxElemento = prox;
};

Elemento Elemento::getProximo(){
    return *proxElemento;

};

void Elemento::setMensagem(Mensagem* msg){
  this->msg = msg;
};
