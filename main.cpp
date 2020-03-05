#include <iostream>
#include "aluno.h"
#include "turma.h"

int main(){

	Aluno r;
	r.setMatricula(10);
	r.setIdade(50);
  r.setNome("walcker")

	std::cout << "Matricula = " << r.getMatricula() << ", Idade = " << r.getIdade() << "Nome: = " << r.getNome;

  Turma s;
	s.setCodigo(101);
	s.setDescricao("EDB1");
  s.setCapacidade("walcker")

	std::cout << "Codigo = " << s.getMatricula() << ", Descricao = " << s.getIdade() << "Capacidade: = " << s.getNome;

	return 0;
}