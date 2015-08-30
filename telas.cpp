#include "telas.h"
#include "ListaDeMensagens.h"
#include <iostream>

using namespace std;

Telas::Telas(){
  this->opcao = 0;
  this->msg = new Mensagem("");
  this->ignore = false;
}

int Telas::MenuInicial() {
  cout << "PoliSocial" << endl;
  cout << "----------" << endl;
  cout << "1) Cadastrar pessoa" << endl;
  cout << "2) Logar como pessoa" << endl;
  cout << "3) Terminar" << endl;
  if(ignore) cin.ignore(100,'\n');
  ignore = false;
  cin >> this->opcao;
  return this->opcao;
};

void Telas::CadastrarPessoa(int id){
  if(id < 10){
    cout<< endl << "Informe os dados da pessoa:" << endl;
    cout << "Nome: ";
    cin.ignore(100,'\n');
    getline(cin, this->name);
    cout << "Data de nascimento: ";
    getline(cin, this->birth);
    cout << "Pais: ";
    getline(cin, this->country);
    cout << "Pessoa cadastrada com sucesso" << endl<< endl;
  }
  else {
    cout << "Numero maximo de pessoas cadastradas" << endl<< endl;
  }
}

int Telas::Logar(Pessoa* person[10], int id) {

  cout << "Escolha uma das pessoas:" << endl;

        for(int i = 0; i<=(id) ; i++){

              cout << (i+1) << ": " << person[i]->getNome() << endl;
        }

        cout<< endl << "Digite um numero ou 0 para voltar" << endl<< endl;
        cin >> pessoaLogada;
        return pessoaLogada;
}

int Telas::Logado(Pessoa* person[10],int pessoaLogada){
    cout << "------------------------------" << endl << "Pessoa: " << person[pessoaLogada-1]->getNome() << endl  << person[pessoaLogada-1]->getDataDeNascimento() << " | " << person[pessoaLogada-1]->getPais() << endl;
    cout << "Contatos: " << endl;
    person[pessoaLogada-1]->verContatos();
    cout << endl << "------------------------------" << endl << endl << "Escolha uma opcao:" << endl << "1) Adicionar contato" << endl << "2) Ver mensagens enviadas" << endl << "3) Ver mensagens recebidas" << endl << "4) Escrever mensagem" << endl << "0) Voltar" << endl;
    cin >> opcao;
    return opcao;
};


int Telas::mensagensEnviadas(Pessoa* person[10]){
    cout << "Mensagens Enviadas" << endl<< "-----------------------" << endl;
    person[pessoaLogada-1]->listaEnviadas->getMensagens();
    return 1;
};


int Telas::mensagensRecebidas(Pessoa* person[10]){
    cout << "Mensagens Recebidas" << endl << "-----------------------" << endl;
    person[pessoaLogada-1]->listaRecebidas->getMensagens();
    return 1;
};

int Telas::escreverMensagem(Pessoa *person[10],int id){
    cout << "Digite a mensagem: ";
    cin >> texto;
    msg->setMensagem(texto);
    person[pessoaLogada-1]->envia(texto);

    return 1;
};


int Telas::adicionarContato(Pessoa* person[10], int id){
  cout << "Pessoas" << endl << "--------" << endl;
  for(int i=0; i<=id; i++){
    cout << (i+1) << ") " << person[i]->getNome() << endl;
  }
  cout << "Escolha um contato para adicionar ou 0 para voltar: ";
  cin >> novoContato;

  if(novoContato == 0)
    return 0;
  else {
    if((novoContato-1)==(pessoaLogada-1))
        return 1;
    else{
        person[pessoaLogada-1]->adiciona(person[novoContato-1]);
        cout << endl << person[pessoaLogada-1]->getNome() << " contactado a " << person[novoContato-1]->getNome()<<endl<<endl;
        }
    return 1;
  }
};
