#include <iostream>
#include "aluno.h"
#include "turma.h"

using namespace std;

int main() {

  Aluno aluno1;
  aluno1.setNome("Emerson");
  aluno1.setMatricula("2018010");
  aluno1.setIdade(20);
  aluno1.setContato1("emerson@email.com");
  aluno1.setEndereco("Rua da UFRN");

  Turma turma
  turma.setCodigo("LP1");
  turma.setDescricao("linguagem de programção 1");
  turma.setCapacidade(10);
  turma.addParticipantes(aluno1);

  turma.mostraAlunos

  
return 0;
}