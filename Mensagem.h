#ifndef MENSAGEM_H
#define MENSAGEM_H


class Mensagem
{
    public:
        Mensagem(string msg);
        int getCurtidas();
        void curtir();
        void printMensagem();
        virtual ~Mensagem();
    protected:
    private:
      int curtidas;
      string msg;
};

#endif // MENSAGEM_H
