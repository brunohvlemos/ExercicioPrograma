#include "telas.h"
#include <iostream>

using namespace std;

int Telas::MenuInicial() {
  cout << "PoliSocial" << endl;
  cout << "----------" << endl;
  cout << "1) Cadastrar pessoa" << endl;
  cout << "2) Logar como pessoa" << endl;
  cout << "3) Terminar" << endl;
  cin >> this->opcao;
  return this->opcao;
};

void Telas::CadastrarPessoa(int id){
  if(id < 10){
    cout << "Informe os dados da pessoa:" << endl;
    cout << "Nome: ";
    cin.ignore(100,'\n');
    getline(cin, this->name);
    cout << "Data de nascimento: ";
    getline(cin, this->birth);
    cout << "Pais: ";
    getline(cin, this->country);
    cout << "Pessoa cadastrada com sucesso" << endl;
  }
  else {
    cout << "Numero maximo de pessoas cadastradas" << endl;
  }
}

int Telas::Logar(Pessoa* person[10], int id) {

  cout << "Escolha uma das pessoas:" << endl;

        for(int i = 0; i<(id) ; i++){

              cout << (i+1) << ": " << person[i]->getNome() << endl;
        }

        cout << "Digite um numero ou 0 para voltar" << endl;
        cin >> pessoaEscolhida;
        if(opcao!=0){
          cout << "------------------------------" << endl << "Pessoa: " << person[pessoaEscolhida-1]->getNome() << endl  << person[pessoaEscolhida-1]->getDataDeNascimento() << " | " << person[pessoaEscolhida-1]->getPais() << endl;
          cout << "Contatos: " << endl;
          person[pessoaEscolhida-1]->verContatos();
          cout << endl << "------------------------------" << endl << endl << "Escolha uma opcao:" << endl << "1) Adicionar contato" << endl << "2) Ver mensagens enviadas" << endl << "3) Ver mensagens recebidas" << endl << "4) Escrever mensagem" << endl << "0) Voltar" << endl;
          cin >> opcao;
          return opcao;
        }
        else {
          return 5;
        }
}

int Telas::adicionarContato(Pessoa* person[10], int id){
  cout << "Pessoas" << endl << "--------" << endl;
  for(int i=0; i<id; i++){
    cout << (i+1) << ") " << person[i]->getNome() << endl;
  }
  cout << "Escolha um contato para adicionar ou 0 para voltar: ";
  cin >> pessoaEscolhida;

  if(pessoaEscolhida == 0) return 0;
  else {person[id]->adiciona(person[pessoaEscolhida-1]);
  return 1;}
}
