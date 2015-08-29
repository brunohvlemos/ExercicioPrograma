#include "Mensagem.h"

Mensagem::Mensagem(string msg)
{
    //ctor
    this->msg = msg;
};

Mensagem::~Mensagem()
{
    //dtor
};

int Mensagem::getCurtidas(){
  return this->curtidas;
};

void Mensagem::curtir(){
  this->curtidas++;
}

void Mensagem::printMensagem(){
  cout << this->msg << endl;
}
