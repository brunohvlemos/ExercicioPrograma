#include "ListaDeMensagens.h"
#include <iostream>

using namespace std;

ListaDeMensagens::ListaDeMensagens(){
    this->tamanho = 0;
};

ListaDeMensagens::~ListaDeMensagens(){

};

void ListaDeMensagens::adicionar(Mensagem* m){
  if(this->getCabeca() == NULL){
    cabeca = new Elemento();
    atual = new Elemento();
    atual->setMensagem(m);
    atual->setProximo(NULL);
    cabeca = atual;
    tamanho = 1;
  }
  else {
    Elemento* novoElemento = new Elemento;
    novoElemento->chave = numMsg;
    novoElemento->setMensagem(m);
    novoElemento->setProximo(NULL);
    atual->setProximo(novoElemento);
    atual = novoElemento;
    tamanho++;
  }
};

Elemento* ListaDeMensagens::getCabeca(){
  return this->cabeca;
};

int ListaDeMensagens::getTamanho(){
    return this->tamanho;
};

//void ListaDeMensagens::getMensagensEnviadas(){
//
//};

void ListaDeMensagens::getMensagens(){
  for(int i=0; i<tamanho; i++){
  cout  << (i+1) << ") " << cabeca->msg->getMensagem() << "( " << cabeca->msg->getCurtidas() << " curtidas)" << endl;
  }
};
