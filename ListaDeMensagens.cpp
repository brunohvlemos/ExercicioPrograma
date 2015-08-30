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
    cabeca->chave=0;
    tamanho = 1;
    numMsg=1;
  }
  else {
    Elemento* novoElemento = new Elemento;
    novoElemento->chave = numMsg;
    numMsg++;
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

Elemento* ListaDeMensagens::procurar(int indice){
    procura = new Elemento;
    procura = cabeca;
    while (procura!=NULL && procura->chave!=indice){
        *procura = procura->getProximo();
    }
    return procura;
};

void ListaDeMensagens::getMensagens(){
  for(int i=0; i<tamanho; i++){
  cout  << (i+1) << ") " << procurar(i)->msg->getMensagem() << "( " << procurar(i)->msg->getCurtidas() << " curtidas)" << endl;
  }
};
