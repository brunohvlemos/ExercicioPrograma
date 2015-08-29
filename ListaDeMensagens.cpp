#include "ListaDeMensagens.h"
#include <iostream>

using namespace std;

ListaDeMensagens::ListaDeMensagens(){

};

ListaDeMensagens::~ListaDeMensagens(){

};

void ListaDeMensagens::adicionar(Mensagem* m){
  if(this->getCabeca() == NULL){
    Elemento* cabeca = new Elemento;
    Elemento* atual = new Elemento;
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
}

void ListaDeMensagens::getMensagensEnviadas(){

};

void ListaDeMensagens::getMensagensRecebidas(){
  cout  << "1) " << cabeca->getMensagem()->printMensagem() << "( " << cabeca->getMensagem()->getCurtidas() << " curtidas)" << endl;
  for(int i=0; i<tamanho; i++){
  cout  << (i+2) << ") " << cabeca->getMensagem()->printMensagem() << "( " << cabeca->getMensagem()->getCurtidas() << " curtidas)" << endl;
  }
};
