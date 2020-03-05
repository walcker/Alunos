#include <iostream>
#include "aluno.h"
#include "turma.h"
using namespace std;

int main() {
  Aluno eu;
  eu.setMatricula("123\n");
  eu.setIdade(36);
  eu.setNome("emerson");
  std::cout << "matricula = " << eu.getMatricula() << "idade = " << eu.getIdade() << endl << "nome = " << eu.getNome() << std::endl;
return 0;
}