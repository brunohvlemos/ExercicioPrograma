#ifndef ELEMENTO_H
#define ELEMENTO_H


class Elemento
{
    public:
        Elemento();
        virtual ~Elemento();
        Elemento* proximo();
        void setProximo(Elemento* prox);
        Mensagem* getMensagem();
        void setMensagem(Mensagem* msg);
        int chave;
    protected:
    private:
      Elemento* proxElemento;
      Mensagem* msg;
};

#endif // ELEMENTO_H
