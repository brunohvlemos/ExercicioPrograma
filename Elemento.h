#ifndef ELEMENTO_H
#define ELEMENTO_H
#include "Mensagem.h"


class Elemento
{
    public:
        Elemento();
        ~Elemento();
        Elemento getProximo();
        //Mensagem *getMensagem();
        void setProximo(Elemento* prox);
        void setMensagem(Mensagem* msg);
        int chave;
        /*por algum motivo nao consigo usar o getMensagem (deixei comentado no Elemento.cpp
        e por isso tive que deixar msg publico. */
        Mensagem* msg;
    private:
      Elemento* proxElemento;

};

#endif // ELEMENTO_H
