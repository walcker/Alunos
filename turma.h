#include "aluno.h"
#ifndef TURMA_H
#define TURMA_H
using namespace std::string;

class Turma {
  private: 
    string codigo;
    string descricao;
    short capacidade;
    Aluno* participantes;

  public:
  //get & set
    string getCodigo();
    void setCodigo(string var_codigo);
    string getDescricao();/
    void setDescricao(string var_descricao);
    short getCapacidade();
    void setCapacidade(short var_capacidade){
      capacidade = var_capacidade;
      participantes = new Aluno[capacidade];
      lotacao = 0;
    }
    
    void addParticipantes(Aluno umAluno);
    void mostrarAlunos();

}

#endif