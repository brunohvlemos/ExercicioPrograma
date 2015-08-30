#ifndef MENSAGEM_H
#define MENSAGEM_H
#include <iostream>

using namespace std;

class Mensagem
{
    private:
      int curtidas;
      string msg;
    public:
        int getCurtidas();
        void curtir();
        void setMensagem(string msg);
        Mensagem(string msg);
        string getMensagem();
        ~Mensagem();
};

#endif // MENSAGEM_H
