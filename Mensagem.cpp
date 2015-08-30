#include "Mensagem.h"
#include <iostream>

using namespace std;

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

string Mensagem::getMensagem(){
    return msg;
};

void Mensagem::setMensagem(string msg){
    this->msg = msg;
};

/*Aumenta as curtidas de uma mensagem*/
void Mensagem::curtir(){
  this->curtidas++;
};
