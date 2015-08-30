#include "ListaDeMensagens.h"
#include <iostream>

using namespace std;

/*ctor*/
ListaDeMensagens::ListaDeMensagens(){
    this->tamanho = 0;
    cabeca = new Elemento();
    cabeca = NULL;
};

/*dtor*/
ListaDeMensagens::~ListaDeMensagens(){

};

/*adiciona uma mensagem a lista de recebidos ou enviados (depende de onde o metodo e chamado)*/
void ListaDeMensagens::adicionar(Mensagem* m){
  /*Caso a lista ainda nao tenha nenhum elemento*/
  if(this->getCabeca() == NULL){
    atual = new Elemento();
    atual->setMensagem(m);
    atual->setProximo(NULL);
    cabeca = atual;
    cabeca->chave=0;
    tamanho = 1;
    numMsg=1;
  }
  /*caso a lista ja tenha sido inicializada*/
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

/*Retorna o primeiro elemento da lista*/
Elemento* ListaDeMensagens::getCabeca(){
  return this->cabeca;
};

/*Numero de elementos da lista*/
int ListaDeMensagens::getTamanho(){
    return this->tamanho;
};

/*procura e retorna um elemento atraves de sua chave, que entra no metodo como 'indice'*/
Elemento* ListaDeMensagens::procurar(int indice){
    procura = new Elemento;
    procura = cabeca;
    while (procura!=NULL && procura->chave!=indice){
        *procura = procura->getProximo();
    }
    return procura;
};

/*Imprime todas as mensagens de uma determinada lista*/
void ListaDeMensagens::getMensagens(){
  for(int i=0; i<tamanho; i++){
  cout  << (i+1) << ") " << procurar(i)->msg->getMensagem() << "( " << procurar(i)->msg->getCurtidas() << " curtidas)" << endl;
  }
};
